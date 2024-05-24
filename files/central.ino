#include <ArduinoBLE.h>

BLEService dial("19B10000-E8F2-537E-4F6C-D104768A1214");  //19B10000-E8F2-537E-4F6C-D104768A1214
BLEByteCharacteristic encoder("19B10001-E8F2-537E-4F6C-D104768A1214", BLERead | BLEWrite);


int sensorPin[] = { A0, A1, A2, A3, A4, A5 };
int sensorValue = 0;

int position = 0;
int lastPosition = 0;

unsigned long t0 = 0;
unsigned long t1 = 0;
unsigned long dt = 5000;

void setup() {
  Serial.begin(9600);

  if (!BLE.begin()) {
    Serial.println("starting Bluetooth® Low Energy module failed!");

    while (1)
      ;
  }

  BLE.setLocalName("central");
  BLE.setAdvertisedService(dial);
  dial.addCharacteristic(encoder);
  BLE.addService(dial);
  encoder.writeValue(0);
  BLE.advertise();
  Serial.println("BLE central");
}

void loop() {
  BLEDevice central = BLE.central();

  if (central) {
    Serial.print("Connected to central: ");
    Serial.println(central.address());

    while (central.connected()) {
      t1 = millis();
      dt = t1 - t0;
      if (encoder.written()) {
        if (dt < 5000) {
          dt = 0;
          t0 = millis();
          if (encoder.value() == 1) {
            Serial.println("button1");
          }
          if (encoder.value() == 0) {
            Serial.println("button0");
          }
          if (encoder.value() == 2) {
            Serial.println("dir0");
          }
          if (encoder.value() == 3) {
            Serial.println("dir1");
          }
        } else {
          Serial.print("pos");
          Serial.println(position);
          dt = 0;
          t0 = millis();
        }
      }
      for (int i = 0; i < 5; i++) {
        sensorValue = analogRead(sensorPin[i]);
        if (sensorValue > 400) {
          position = i;
        }
        //Serial.print(sensorValue[i]);
        //Serial.print(" | ");
      }
      if (lastPosition != position) {
        Serial.print("pos");
        Serial.println(position);
        dt = 0;
        t0 = millis();
      }
      lastPosition = position;

      if (dt >= 5000) {
        Serial.println("home");
      }
    }

    Serial.print(F("Disconnected from central: "));
    Serial.println(central.address());
  }
}
