#include <ArduinoBLE.h>

int buttonPin = 3;
int encoderAPin = 2;
int encoderBPin = 4;

int buttonState = 0;
int ButtonLastState = -1;
int encoderState = 0;
int encoderLastState = -1;
int direction = 0;
int lastDirection = -1;
int teller0 = 0;
int teller1 = 0;
int grens = 3;


void setup() {
  Serial.begin(9600);
  pinMode(buttonPin, INPUT);
  pinMode(encoderAPin, INPUT);
  pinMode(encoderBPin, INPUT);
  BLE.begin();
  Serial.println("Bluetooth® Low Energy Central - dial");
  BLE.scanForUuid("19b10000-e8f2-537e-4f6c-d104768a1214");  //19b10000-e8f2-537e-4f6c-d104768a1214
}

void loop() {
  BLEDevice dial = BLE.available();
  if (dial) {
    Serial.print("Found ");
    Serial.print(" '");
    Serial.print(dial.localName());
    Serial.println("' ");
    if (dial.localName() != "central") {
      return;
    }
    BLE.stopScan();
    outputProtopie(dial);
    BLE.scanForUuid("19b10000-e8f2-537e-4f6c-d104768a1214");
  }
}

void outputProtopie(BLEDevice dial) {
  Serial.println("Connecting ...");
  if (dial.connect()) {
    Serial.println("Connected");
  } else {
    Serial.println("Failed to connect!");
    return;
  }
  Serial.println("Discovering attributes ...");
  if (dial.discoverAttributes()) {
    Serial.println("Attributes discovered");
  } else {
    Serial.println("Attribute discovery failed!");
    dial.disconnect();
    return;
  }
  BLECharacteristic central = dial.characteristic("19b10001-e8f2-537e-4f6c-d104768a1214");

  while (dial.connected()) {
    buttonState = digitalRead(buttonPin);
    encoderState = digitalRead(encoderAPin);

    if (buttonState == 0 && ButtonLastState == 1) {
      Serial.println("button1");
      central.writeValue((byte)0x01);
    }
    /*if (buttonState == 1 && ButtonLastState == 0) {
      Serial.println("button0");
      central.writeValue((byte)0x00);
    }*/
    ButtonLastState = buttonState;

    if (encoderState != encoderLastState) {
      if (digitalRead(encoderBPin) != encoderState) {
        direction = 0;
        if (direction == 0 && lastDirection == 0) {
          teller0 += 1;
          if (teller0 == grens) {
            teller0 = 0;
            teller1 = 0;
            Serial.println("dir0");
            central.writeValue((byte)0x02);
            direction = 1;
          }
        }
        lastDirection = direction;
      } else {
        direction = 1;
        if (direction == 1 && lastDirection == 1) {
          teller1 += 1;
          if (teller1 == grens) {
            teller1 = 0;
            teller0 = 0;
            Serial.println("dir1");
            central.writeValue((byte)0x03);
            direction = 0;
          }
        }
        lastDirection = direction;
      }
    }
    encoderLastState = encoderState;
  }
  Serial.println("Peripheral disconnected");
}