# Ctrl-Wheely
*Optimalisatie van autodashboard-interactie door middel van een fysieke verplaatsbare knop in de middenconsole.* 

*Projectteam: Korneel Verraes; Warre Robbe*

24/01/2024

## Samenvatting
De nieuwe generatie auto's worden steeds meer uitgerust met slimme dashboards die een breed scala aan functies en flexibele interacties bieden. Het ideale schoolvoorbeeld van deze trend is de Tesla, met één groot touchscreen en slechts twee knoppen op het stuur. Hoewel dit ontwerp er heel fancy uitziet, stelt zich de vraag of dit allemaal nog veilig en wenselijk is. Worden we door dergelijke minimalistische interfaces te veel afgeleid? Of, op welke (gebruiksvriendelijke) manier kunnen we de functies in het dashboard bedienen zonder onze focus op de weg te verliezen?

Uit enkele *contextual inquiries* is gebleken dat het niet het touchscreen zelf is die voor de afleiding zorgt, maar het feit dat je geen tactiele feedback krijgt bij het bedienen van een functie. Verschillende artikels en wetenschappelijke onderzoeken bevestigen dat.

AANVULLENAANVULLENAANVULLENAANVULLEN

## Introductie

In de hedendaagse auto's zijn touchscreens de standaard geworden, waarbij bestuurders verschillende functies bedienen, variërend van navigatie tot entertainment. Echter, het toenemende gebruik van touchscreens in auto's heeft zorgen gewekt over de veiligheid, met name de visuele afleiding die het met zich meebrengt. Een artikel van de VRT[^1] benadrukt dit probleem en stelt dat het bedienen van touchscreens in de auto drie keer gevaarlijker kan zijn dan rijden onder invloed. Het vermindert aanzienlijk de reactietijd van bestuurders en het risico op ongevallen vergroot.

> "Alternatieven zijn de bediening via knoppen op je stuur of schermen die synthetische feedback leveren, zoals een trilfunctie op je smartphone, als bevestiging dat je opdracht is uitgevoerd zodat visuele verificatie niet meer nodig is."

In 2020 voerde het gerenommeerde Britse instituut, *Transport Research Laboratory (TRL)*, een onderzoek[^2] uit naar de impact van het gebruik van aanraakschermen, Apple CarPlay en Android Auto op het rijgedrag van automobilisten. TRL heeft zijn onderzoeksresultaten getoetst aan de richtlijnen van de Amerikaanse *National Highway Traffic Safety Administration (NHTSA)* met betrekking tot afleiding door elektronische apparaten in voertuigen. Uit deze analyse blijkt dat het handmatig bedienen van touchscreens tijdens het rijden als potentieel onveilig wordt beschouwd. Bediening via spraakherkenning wordt volgens deze richtlijnen net als veilig beschouwd.

Granstudio, een gereputeerd mobiliteitsonderzoek- en ontwerpstudio challenged ons om het autodashboard van de toekomst te ontwerpen. Welke informatie moet weergegeven worden en hoe kan dat veilig gedaan worden?

**Op welke (gebruiksvriendelijke) manier kunnen we de functies in het dashboard bedienen zonder onze focus op de weg te verliezen?**

Randvoorwaarden:
- veilig
- gebruiksvriendelijk
- intuïtief
- interactief

> [!NOTE]
> Volledige protocollen en reports zijn te vinden onder de bijlagen.

## Methodologie
Tijdlijn (klikken om te vergroten):
<img src="/images/methodologie tijdlijn.jpg"/>

Elk ontwerpproces start vanuit de exploratie van de opdracht. Wat is de opdracht? Is het gestelde probleem ook daadwerkelijk een probleem, en vooral kunnen we dit probleem gaan onderbouwen of weerleggen met bestaande en nieuwe onderzoeken? Onze opdracht startte met een ontmoeting van de opdrachtgevers van dit project. We gingen in gesprek met Granstudio en kregen te horen wat van ons verwacht werd. We konden aan de slag met het onderzoek in de probleemruimte. 

Wat vinden gebruikers, die zich al langere tijd in de probleemruimte bevinden, van het gestelde probleem en welke oplossingen hebben zij in gedachten? Het probleem werd alvast sterk bevestigd uit enkele *contextual inquiries* en ook uit een focusgroep kwamen al enkele interessante opmerkingen. Door te kijken naar wat vandaag de dag al op de markt is (benchmarking) en te gaan overleggen met medestudenten konden we in de oplossingsruimte al het een en ander gaan ontdekken. Dit eerste onderzoek leidde tot de uitwerking van een concept die later geoptimaliseerd en nog extra onderzocht kon worden. Na de voorstelling van het concept werden we verenigd in een team en konden we ideeën en bedenkingen uitwisselen. We strandden in een boeiende brainstorm vol ideeën die we in de definitiefase verder zouden kunnen gaan uitwerken. Hiermee werd de ontdekkingsfase afgerond.

We startten met het ontwerp van enkele prototypes van *interfaces* en *dials*. We kregen ook de kans om ons concept te gaan voorstellen aan ingenieursstudenten uit Gent die met enkele maatschappelijke bedenkingen kwamen. We optimaliseerden onze prototypes en gingen ook aan de slag met digitale interfaces. Er volgden twee belangrijke gebruikerstesten die leidden tot nieuwe inzichten. Dankzij uitgebreid onderzoek, feedbackmomenten en gebruikerstesten konden we een concreet, visueel concept uitwerken: Ctrl-Wheely.

## Discovery
Tijdens de ontdekkingsfase streven we ernaar om een helder beeld te krijgen van de probleemruimte en op zoek te gaan naar opportuniteiten. Deze opportuniteiten ontstaan zowel uit gebruikersinzichten, als uit een analyse van de markt. Het probleem waarop we focussen wordt met andere woorden scherpgesteld en onderzocht.
### Doelstellingen
Een helder geformuleerde "how might we" bekomen.
### Materiaal & methoden
- contextual inquiries
- focus group
- benchmarking
### Resultaten
#### Contextual inquiries (N=3)
Door middel van contextual inquiries kunnen we huidige gebruikspatronen in hun natuurlijke context begrijpen, pijnpunten definiëren en een beter begrip krijgen van de contextuele randvoorwaarden voor ideeën en opportuniteiten.

Om dit te realiseren trokken we de baan op met verschillende autobestuurders. We startten met een introductie om een beter beeld te krijgen van de deelnemer. Daarna werd hem/haar gevraagd verschillende dingen te doen; zijn/haar favoriete liedje opleggen, volume verhogen, verwarming verlagen, navigeren met de gps... We hebben alles geobserveerd en een tabel opgesteld met de verschillende functies en hoe ze bediend worden.

<p>
  <img src="/images/contextual inquiries Warre.jpg" width="49%"/>
  <img src="/images/contextual inquiries Jan.jpg" width="49%"/>
</p>

||Buttons on steering wheel|Physical buttons|Touchscreen|Voice commands|
|---:|:---:|:---:|:---:|:---:|
|Volume|X|X - X|
|Air conditioning||X|X - X - X|
|Seat heating||X|X - X - X|
|Steering wheel heating|||X - X|
|Navigation|||X - X|X - X|
|Music|||X - X - X|X - X|
|Answering calls|||X - X - X|
|Start calls|||X - X|X|

#### Focus Group (N=8)
Voor we als team verder gingen had Warre ook al een focusgroep georganiseerd. Die focusgroep ging ook over de veiligheid en afleiding in wagens, specifiek  toegepast op het interieur van elektrische auto’s. Ook uit die focusgroep kwamen enkele interessante topics. Aan acht mensen werd de opdracht gegeven om hun droomdashboard samen te stellen met allerlei verschillende interieuronderdelen. Zes van de acht gebruikers plaatsten een draaiknop in hun interieur en twee mensen plaatsten er zelf meerdere waaronder ook op het stuur. Dat ze geliefd zijn bij een grote groep mensen is dus alvast zeker. Zes mensen kozen ook om een HUD te plaatsen in de voorruit.
> "Ik ben enthousiast over de minimalistisch interface van een Tesla-interieur, maar anderzijds stel ik mij toch wel vragen bij de functionaliteit en veiligheid van één groot touchscreen zonder fysieke knoppen."

Een ander interessant aspect dat aangehaald werd was het veilig versturen van sms’en achter het stuur. Een alternatief op spraakbediening wanneer deze niet optimaal zou werken is het kiezen tussen vaste berichten die je via ons concept zou kunnen lezen op het HUD. Scrollen en selecteren gebeurt dan met de *dial*.

<p>
<img width="60%" src="/images/focus group.png">
<img width="38%" src="/images/focus group tafel.jpg">
</p>

#### Benchmarking (N=10)
Om de markt te analyseren maken we gebruik van benchmarking, heel wat designkeuzes zijn vaak al succesvol opgelost door anderen. Je hoeft niet alles opnieuw te onderzoeken, maar door bestaande oplossingen aandachtig te bestuderen kunnen we focussen op meer belangrijke onbekende factoren.

Het probleem werd opgesplitst in twee fundamentele deelproblemen. Hoe kunnen we informatie weergeven en hoe kunnen we bepaalde functies bedienen? Voor beide werden de voor- en nadelen op een rijtje gezet. Daarna werd alles samengegoten in een overzichtelijke *problem-solution* matrix.

<p>
  <img src="/images/benchmarking visualisation.jpg" width="49%"/>
  <img src="/images/benchmarking controls.jpg" width="49%"/>
</p>

<img src="/images/benchmarking problem solution matrix.jpg"/>

### Conclusies & implicaties
De afleiding tijdens het rijden wordt niet veroorzaakt door het touchscreen zelf maar door het gebrek aan tactiele feedback bij het bedienen van het scherm. Je moet visueel verifiëren wat je gedaan hebt en of je het juist gedaan hebt. Verder genieten knoppen op het stuur en bediening via het touchscreen de voorkeur van gebruikers, gevolgd door fysieke knoppen en stembediening.

HUD's die in de voorruit of op de onderste zwarte band van de ruit geplaatst worden tonen informatie zonder dat de bestuurder zijn ogen van de baan hoeft te halen, wat de veiligheid bevordert. Deze displays kunnen echter moeilijk zichtbaar zijn bij zonnig weer. 3D-schermen en hologrammen bieden een goede ervaring en een grote aanpasbaarheid, maar zijn over het algemeen kostbaarder en complexer. Augmented reality-schermen combineren digitale informatie met de echte wereld, wat de navigatie- en veiligheidskenmerken verbetert, hoewel ze mogelijk een leercurve vereisen voor bestuurders. Traditionele schermen kunnen ondanks dat ze kosteneffectief en vertrouwd zijn de aandacht van de weg brengen. Fysieke knoppen en knoppen op het stuur geven prioriteit aan tastbare feedback en minimale afleiding, terwijl aanraakschermen en spraakbesturing veelzijdigheid bieden, maar mogelijk ten koste gaan van de veiligheid. Context, compatibiliteit en de leercurve zijn ook belangrijke factoren om in overweging te nemen.

**Hoe kunnen we een *dial* en een HUD gebruiken om afgeleide bestuurders gefocust te houden op de weg terwijl ze interageren met het dashboard?**

> [!IMPORTANT]
> Design Requirements:
> - De interface moet personaliseerbaar zijn.
> - Alle belangrijke functies moeten bedienbaar zijn zonder dat de ogen van de baan dienen af te wijken.
> - Er is haptische feedback bij het bedienen van functies.

## Definition
In de definitiefase geven we vorm aan de oplossingen die we dit jaar zullen uitwerken. Gebruikmakend van het eerder gedefinieerde probleem, onderzoeken we mogelijke oplossingen om zo een weloverwogen conceptkeuze te maken. Dit concept dient dan als basis voor verdere ontwikkeling in het tweede semester.
### Doelstellingen
Tot een conceptueel ontwerp komen.
- thematische schets
- storyboard
- *quick-and-dirty* prototype
### Materiaal & methoden
- *sensorial boards*
- kartonnen prototypes
- digitaal ontworpen interfaces
- gebruikersinterviews
- gebruikerstesten
### Resultaten
#### Dial (N=6)
Door het uitvoeren van concepttesten kunnen we ons concept evalueren met echte gebruikers. Hierdoor kunnen we ook het gedrag van de gebruiker tijdens de interactie observeren en analyseren.

Het doel van deze concepttest is een conceptueel ontwerp te hebben voor onze *dial*. Welke grootte? Welke vorm? Welk materiaal? Na een korte introductie gaven we elke deelnemer een stuk klei/plasticine. We gaven hen de opdracht om hun ideale *dial* te ontwerpen en hierbij te variëren in vorm, grootte, afwerking... Hierbij moest de focus op het praktische aspect liggen, minder op het esthetische. Nadat elke deelnemer zijn of haar ideale *dial* gemaakt had gingen we over naar het tweede deel van de test. We ontwikkelden drie *sensorial boards*: 6 verschillende groottes, 9 vormvarianten en 6 verschillende materialen. Elke deelnemer kreeg de kans elk bord te exploreren door aan de verschillende modellen te voelen. Per bord moesten de deelnemers hun voorkeur weergeven in een top 3. Alle ruwe data van deze testen werd verzameld door middel van gebruikersformulieren.

<p>
  <img src="/images/user test dial plasticine.png" width="49%"/>
  <img src="/images/user test dial schets.png" width="49%"/>
</p>

<p>
  <img src="/images/user test dial bord sizes.jpg" width="32%"/>
  <img src="/images/user test dial bord shapes.jpg" width="32%"/>
  <img src="/images/user test dial bord materials.jpg" width="32%"/>
</p>

<p>
  <img src="/images/user test dial foto 1.jpg" width="24.5%"/>
  <img src="/images/user test dial foto 2.jpg" width="24.5%"/>
  <img src="/images/user test dial foto 3.jpg" width="24.5%"/>
  <img src="/images/user test dial foto 4.jpg" width="24.5%"/>
</p>

Na de test werden alle formulieren verzameld en geanalyseerd. De resultaten van de opgestelde top 3's werden samengegoten in een scoringsmatrix. Prototypes op plaats 1 kregen een score +3, prototypes op plaats 2 kregen een score +2 en prototypes op plaats 3 kregen een score +1. Prototypes waar deelnemers eerder een afkeur voor hadden, kregen een -1. Door de scores voor elk model van alle deelnemers bij elkaar op te tellen, hebben we een eindscore afgeleid. Een hogere eindscore duidde op een gunstigere ervaring.

<p>
  <img src="/images/user test dial matrix sizes.png" width="32%"/>
  <img src="/images/user test dial matrix shapes.png" width="32%"/>
  <img src="/images/user test dial matrix materials.png" width="32%"/>
</p>

#### User interface (N=5)
Uit de eindscores van de eerste gebruikerstesten konden we met de meest ideale dialvorm opnieuw naar de gebruiker trekken. Deze keer werd bewust gekozen voor nieuwe testpersonen. Door het kiezen van nieuwe testpersonen kunnen er nieuwe visies ontstaan en kunnen we al dan niet bevestigd krijgen of de gebruiker ons concept begrijpt.
Met deze test richten we ons op de conceptuele interactie van de dialfuncties en een interface. In het tweede semester zetten we deze resultaten om in een functioneel en interactief ontwerp.
We trokken naar de gebruiker met drie schermgroottes gevisualiseerd op dibond (een glad aluminium-kunststofplaat), zes verschillende interfaces geprint op papier, een werkende interactie-interface - gemaakt in Figma - en natuurlijk de *dial*.
Na een korte toelichting volgden er al enkele positieve reacties op het concept en kwamen er enkele interessante opmerkingen. Daarna mocht iedereen kiezen tussen drie schermgroottes, wel met de functie van de *dial* in hun achterhoofd.
Ze kregen ook zes interfaces voorgeschoteld waarvan ze een top drie mochten maken en eventueel een interface als onbruikbaar voor het concept markeren.
<p>
  <img src="/images/user test interface layout 1.png" width="32%"/>
  <img src="/images/user test interface layout 2.png" width="32%"/>
  <img src="/images/user test interface layout 3.png" width="32%"/>
</p>

<p>
  <img src="/images/user test interface layout 4.png" width="32%"/>
  <img src="/images/user test interface layout 5.png" width="32%"/>
  <img src="/images/user test interface layout 6.png" width="32%"/>
</p>

### Conclusies & implicaties
Uit de klei-test blijkt dat gebruikers een voorkeur hadden voor kleinere knoppen, echter vermelden een aantal deelnemers dat hun voorkeur gaat naar een knop met voldoende volume en grip. De groottes variëren niet zo heel veel, maar de vormen wel, gaande van klassieke cilinders tot schuivers en bolvormige knoppen.
> "Eventueel kan de knop conisch gemaakt worden. Dit zorgt niet enkel voor meer grip maar geeft mij ook het signaal dat de knop verplaatst kan worden."

Uit de scoringsmatrix blijkt dat een knop met een diameter van 60 mm en een hoogte van 20 mm het meest geschikt is, ook de licht hogere *dial* werd positief bevonden. Daarnaast gaat de voorkeur qua vorm naar een gegolfde contour. Op vlak van materiaal prefereren de deelnemers een licht indrukbaar materiaal, maar ook de ruwere materialen vallen in de smaak.

Samengevat:
- dubbele conische vorm
- diameter 55 mm
- hoogte 30 mm
- geribbelde contour
- rubberachtig materiaal (nog te exploreren via 3D-printen)

Uit de interfacetest blijkt dat onderstaand interface als het meest aangenaam, modern, intuïtief en gebruiksvriendelijk aanvoelt. De interactie met de *dial* moet niet noodzakelijk visueel verduidelijkt worden. Volgens de gebruikers is het slechts een gewoontekwestie om de interactie met de *dial* en het scherm te begrijpen.
Gebruikers beschouwen de mediummaat (350 x 215 mm) van het touchscreen als meest ideaal. Het is noodzakelijk dat die niet te klein is om gemakkelijk met de *dial* te kunnen interageren op verschillende plaatsen op het scherm. De belangrijkste functies zijn vooral de standaardfuncties zoals temperatuurregeling, muziek, volume en navigatie. Met zes mogelijke posities op ons scherm, en dus zes bedienbare functies tijdens het rijden, zitten we goed.
> "Net zoals in mijn BMW zou ik het handig vinden dat de *dial* ook naast het scherm bedienbaar is zodat ik niet telkens met mijn hele arm tot het scherm hoef te reiken."

Het is belangrijk rekening te houden met verschillende armlengtes. Het scherm mag niet te ver zijn en is best gericht naar de bestuurder. Dit zet ons aan het denken om een kantelbaar scherm te integreren waarbij beperkingen opgelegd worden aan de hand van de richting van het scherm (bestuurder vs passagier)...

<p>
  <img src="/images/user test interface foto.png" width="47%"/>
  <img src="/images/user test interface uitkomst.png" width="52%"/>
</p>

> [!IMPORTANT]
>  Design Requirements:
> - De _dial_ moet een conische vorm hebben.
> - De _dial_ moet goed in de hand liggen.
> - De _dial_ moet ook naast het scherm bedienbaar zijn.
> - Het touchscreen moet ook toegankelijk zijn voor kleinere mensen.
> - Er dienen zes belangrijke functies veilig bedienbaar te worden tijdens het rijden.
> - De interface moet goed leesbaar zijn, ook voor oudere mensen.
> - De interface moet modern ogen.

## Prototype
In onderstaande renders is te zien hoe het concept er op dit moment uitzag. Een fysieke verplaatsbare knop die je op het touchscreen kan plaatsen. Elke plaats op het scherm representeert een bedienbare functie. Ook de combinatie met een head-up-display (HUD) is interessant omdat hierbij de ogen niet van de baan afwijken. In tegenstelling tot de standaard fysieke knoppen kun je met zo'n *dial* toch een breed scala aan functies gaan bedienen, met behoud van de tactiele feedback. Ook het touchscreen is er nog steeds voor wanneer men stilstaat of voor de passagier.

<p>
  <img src="/images/concept render zij.png" width="49%"/>
  <img src="/images/concept render close-up.png" width="49%"/>
</p>

Tot nu toe werd er nog niet zoveel aandacht besteed aan een prototype. Alvorens de volgende gebruikerstesten te starten was daar wel nood aan. Zo'n prototype is van groot belang om de validiteit van een test te vergroten. Het concept dat op dit moment in ons hoofd speelt is, heel simpel, een touchscreen met daarop een knop. 

Het gebruik van een reëel touchscreen is in deze fase van het proces nog niet aan de orde. Bovendien zijn de grootte, functionaliteiten, vorm... nog niet beslist. De uitgewerkte interface (Figma) printten we af en kleefden we op een dibondplaat. De eerstvolgende test heeft betrekking tot de ergonomische afmetingen. Hiervoor was het noodzakelijk dat het touchscreen op verschillende posities in de auto gemonteerd kon worden. We gebruikten kartonnen tussenstukken en papierplakband om dit snel te realiseren. De knop, nu nog zonder draai- en klikfunctionaliteit, werd gemaakt met de 3D-printer.

Om toch al enige vorm van interactie te bieden tijdens de test werden er een magneet in de knop en metalen plaatjes achter het touchscreen geïntegreerd. Dit zorgde al voor het gevoel van de snapping points om de juiste functie blindelings te kunnen selecteren.

<p>
  <img src="/images/prototype ergonomie.jpg" width="37%"/>
  <img src="/images/prototype ergonomie snapping points.jpg" width="40%"/>
  <img src="/images/prototype ergonomie dial.jpg" width="21%"/>
</p>

## Develop 1: Human Body (N=5)
Het eindpunt van deze eerste ontwikkelingsfase is een geoptimaliseerd ontwerp, waarvan we aan de hand van een antropometrische analyse en gebruikerstest kunnen aantonen welke optimalisaties we hebben aangebracht op het vlak van fysieke ergonomie.

### Doelstellingen
- De theoretisch onderzochte ergonomische afmetingen praktisch verifiëren.
- Bekomen van definitieve afmetingen van het touchscreen tot aan de gebruiker.
- Al dan niet bevestigen of de _dial_ overal en in elke situatie aangenaam te besturen is.
- Interface bijstellen voor een optimale ergonomie.

### Materiaal & methoden
Bij de antropometrische berekeningen baseren we ons op de DINBelg database[^3]. De afstand die we wensen te bepalen is de afstand van de rugleuning tot de uiterste positie op het touchscreen. Dit komt overeen met de reikdiepte (17). We willen de positie van ons scherm optimaliseren voor 95% van de gebruikers. Omdat het scherm op de dichtste afstand ook bedienbaar is door de grootste mensen maken we hier de keuze voor de designstrategie: _design for the small_.  Bijgevolg berekenen we P5 van de populatie.

- Uit de database:
  - µ = 767 mm
  - σ = 50 mm
- Berekening:
  - 5% → z = -1,645  
  - P5 = µ+z∙σ = 767-1,645∙50 = 685 mm 

Als de stoel van de bestuurder zo staat dat die ideaal is voor de 5% kleinste gebruikers, dan bedraagt de afstand tussen de rugleuning en de uiterste positie op het touchscreen maximaal 685 mm. Grotere bestuurders zullen de stoel meer naar achter verplaatsen waardoor ook de voorgenoemde afstand mee zal vergroten. 

De testpersonen kregen allen de opdracht hun zetel zo te positioneren zoals ze dat gewoonlijk zouden doen, ongeacht de afstand tot het touchscreen. Daarna vroegen we hen na te gaan of de uiterste positie van het scherm voor hen goed bereikbaar was met de _dial_. Op de interface mochten ze ook vooraf bepalen waar ze welke functie zouden plaatsen en waarom. Met die vooraf bepaalde functies mochten ze een toer rijden met de wagen en de _dial_ bedienen. Hierbij kregen ze van ons de opdracht om verschillende dingen te bedienen zoals bijvoorbeeld het verlagen van de temperatuur of het doorspoelen naar een volgend nummer. Zo konden we controleren hoe rap de plaats van de functies went en of de bestuurder het nodig acht om de ogen van de weg te halen om te zien wat ze aan het bedienen waren. We begeleidden hen door te zeggen wat ze aan het bedienen waren.

Er werd een elektrische wagen gebruikt om de testomgeving zo realistisch mogelijk te maken.
    
### Resultaten
We maakten gebruik van grotere en kleinere testpersonen. Dit was vooral interessant om onze eerdere theoretische berekeningen te controleren. Het eerste deel van de test bewees dat een dichter touchscreen (_design for the small_) niet zorgt voor problemen bij grotere mensen doordat zij ook hun zetel nog naar achter zetten en zo weer verder van het touchscreen komen te zitten. We maten telkens de lichaamslengte en de afstand vanaf de uiterste positie van het touchscreen tot de zetel. Dat laatste staat gelijk aan de uitgestrekte lengte van de arm zonder dat de testpersoon naar voor hoeft te komen. Onderstaande resultaten kwamen uit die metingen.

|Lichaamslengtes (cm)|Uitgestrekte armlengtes (scherm - rugleuning) (cm)|
|:---|:---|
|165|71|
|168|72|
|178|78|
|184|79|
|201|83|

Elke positie lijkt voor de gebruikers goed bereikbaar met de _dial_. Grote gebruikers zaten soms wel met hun knieën tegen het touchscreen, als we het touchscreen een beetje naar rechts schoven (zoals we ook voor de andere gebruikers daarna deden) was dit probleem grotendeels van de baan. Toch blijkt dat de uiterst linkse positie besturen met de dial onaangenaam en niet makkelijk aanvoelt. Dit werd door meerdere testpersonen aangehaald en het overgrote deel van de testpersonen had ook de wens om het muziekvak rechts te plaatsen omdat dit makkelijker te besturen is dan wanneer het links staat. De functie die het makkelijkst te bedienen is vanuit de bestuurderszetel is unaniem de meest rechtse. Als we de testpersonen vroegen tijdens het rijden het volume te veranderen, merkten we dat ze vaak naar de muziekfunctie grepen om het volume aan te passen. Als er gevraagd werd om de muziek te verzetten hadden de gebruikers de neiging om dit met hun vinger (touchbediening) te doen.

Tijdens het rijden werd snel duidelijk dat iedereen dankzij de snapping points perfect wist waar welke functie zat, zonder te hoeven kijken. Ze gaven allen aan dat het maximaal één dag kost om gewoon te worden waar welke functie zit, zeker als dit personaliseerbaar is. Alle gebruikers gaven ook aan dat de dial bedienen geen problemen veroorzaakte tijdens het rijden. Het belangrijkste uit dit deel van de test was ook dat de bestuurders het moeilijk hadden om het volume en het veranderen van nummer/radiozender uit elkaar te houden.

<p>
  <img src="/images/dev1 seppe.jpg" width="38.4%">
  <img src="/images/dev1 quinten knie.jpg" width="38.4%">
  <img src="/images/dev1 quinten.jpg" width="21.6%">
</p>

### Conclusies & implicaties
We zijn tevreden dat de theoretisch bepaalde afstand tot het scherm in de praktijk ook goed werkt. Een dichter touchscreen zorgt voor een betere en veiligere bereikbaarheid voor kleinere mensen en heeft geen negatief effect op grotere mensen.

De volumefunctie nemen we weg van het touchscreen, deze wordt bediend door een aparte knop. Hierdoor komt er een positie vrij. We schuiven alles op zodat er uiterst links niets meer bediend hoeft te worden, want die plaats was voor veel personen moeilijk bereikbaar. We werkten ondertussen een nieuw interface uit die rekening hield met deze ondervindingen.

<p>
  <img src="/images/user test interface uitkomst.png" width="49%">
  <img src="/images/dev1 main screen.png" width="49%">
</p>

We kijken terug naar een interessante test. Ons concept wordt nog steeds goed onthaald en alles blijkt snel te wennen. Ook tijdens het rijden ontstaan geen noemenswaardige afleidingen door het touchscreen. Ons doel nu is het HUD verder te gaan uitwerken zodat we ons verder kunnen concentreren op de interactie met de _dial_.

> [!IMPORTANT]
> Design Requirements:
> - De functies links op de interface dienen niet aangepast te worden tijdens het rijden.
> - Functies op de interface mogen niet de intentie geven om met touch bediend te kunnen worden.
> - Het volume dient aangepast te kunnen worden met een aparte knop.

## Prototype
De volgende stap in de ontwikkeling van het prototype was de interactie. Tot nu toe was ons prototype vrij statisch. We wilden graag wat dynamiek toevoegen om de validiteit van de gebruikerstesten te verhogen. Hiervoor maakten we een functionerende _dial_ en een interface voor het HUD. De losstaande volumeknop wordt voorgesteld door een houten cilindertje die op de middenconsole is geplakt.

Om alle interacties te realiseren maakten we gebruik van Arduino's, een encoder, een magneet, magneetsensoren & ProtoPie. Een Arduino in de _dial_ communiceert via bluetooth de rotaties en indrukkingen van de encoder naar een centrale Arduino. Deze centrale Arduino stuurt via seriële communicatie (USB) de data door naar ProtoPie Connect, die de data op zijn beurt doorstuurt (USB) naar de ProtoPie Player op een smartphone (HUD) in de voorruit. Via een magneet in de _dial_ detecteren magneetsensoren achter het touchscreen waar de _dial_ zich bevindt. De data van deze sensoren wordt ook ingelezen en doorgestuurd door een centrale Arduino. Onderstaand schema geeft een visuele representatie van deze communicatie.

<img src="images/prototype communicatieschema.jpg">

### Dial
Het vormelijk ontwerp (grootte, vorm & materiaal) van de dial bleef ongewijzigd, in deze fase werd ze enkel functioneerbaar gemaakt. De dial is hol en bestaat uit twee losneembare delen: een onderkant waar de magneet zit en een bovenkant waar de elektronische componenten gemonteerd zijn. Deze elektronische componenten zijn een incrementele _rotary encoder_, een Arduino Nano 33 IOT en batterijen (2x CR2032). De dial zelf werd gemaakt met de 3D-printer.

Bij de eerste testen met de dial merkten we dat de batterijen voor problemen zorgden. Ze liepen zeer snel leeg en gaven niet voldoende spanning. Hierdoor werden we genoodzaakt de batterijen te vervangen door een externe spanningsbron, de auto zelf (via USB).

<p>
  <img src="/images/prototype usability test dial bovenkant.jpg" width="32%">
  <img src="/images/prototype usability test dial onderkant.jpg" width="32%">
  <img src="/images/prototype usability test dial.jpg" width="32%">
</p>

De dial moet het klikken & draaien registreren en via bluetooth doorsturen naar de centrale Arduino. Onderstaande code werd geprogrammeerd in de Arduino IDE om deze functionaliteiten te realiseren.

```py
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


void setup() {
  Serial.begin(9600);
  pinMode(buttonPin, INPUT);
  pinMode(encoderAPin, INPUT);
  pinMode(encoderBPin, INPUT);
  BLE.begin();
  Serial.println("Bluetooth® Low Energy Central - dial");
  BLE.scanForUuid("19b10000-e8f2-537e-4f6c-d104768a1214");
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
    ButtonLastState = buttonState;

    if (encoderState != encoderLastState) {
      if (digitalRead(encoderBPin) != encoderState) {
        direction = 0;
        if (direction == 0 && lastDirection == 0) {
          Serial.println("dir0");
          central.writeValue((byte)0x02);
          direction = 1;
        }
        lastDirection = direction;
      } else {
        direction = 1;
        if (direction == 1 && lastDirection == 1) {
          Serial.println("dir1");
          central.writeValue((byte)0x03);
          direction = 0;
        }
        lastDirection = direction;
      }
    }
    encoderLastState = encoderState;
  }
  Serial.println("Peripheral disconnected");
}
```

### Touchscreen
De interface op het touchscreen bleef ongewijzigd. Enkel werden ook hier de functionaliteiten toegevoegd. De metalen plaatjes langs de achterkant werden vervangen door rosse munten omwille van hun ronde vorm en hun sterk magnetische aantrekkingskracht. Op elk van die munten bevestigden we een magneetsensor om de positie van de dial op het touchscreen te detecteren. We monteerden dit fictieve touchscreen in de auto door middel van enkele haken die we met de lasercutter maakten. Deze zorgden ook voor de juiste tussenafstand, bepaald tijdens de vorige gebruikerstest.

<p>
  <img src="/images/prototype touchscreen achterkant.jpg" width="49%">
  <img src="/images/prototype touchscreen voorkant.jpg" width="49%">
</p>

Achter dit touchscreen bevindt zich ook de centrale Arduino Nano 33 IOT. Deze moet de data van de magneetsensoren & de Arduino in de dial inlezen, en doorsturen naar ProtoPie Connect door middel van seriële communicatie (USB). Onderstaande code werd geprogrammeerd in de Arduino IDE om deze functionaliteiten te realiseren.

```py
#include <ArduinoBLE.h>

BLEService dial("19B10000-E8F2-537E-4F6C-D104768A1214");
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
```

### HUD
Alles wat wordt bediend met de dial wordt weergegeven in een HUD. De integratie van een echt werkend HUD is buiten de scope van deze opdracht. Daarom werd deze vervangen door een smartphone in de voorruit. In de realiteit zal het HUD de grootte van een standaardlaptopscherm hebben en de helderheid zich automatisch aanpassen aan de omgeving.

<p>
  <img src="/images/prototype HUD smartphone.jpg" width="49%">
  <img src="/images/prototype HUD smartphone klem.jpg" width="49%">
</p>

Om een interface te ontwerpen maakten we gebruik van ProtoPie. We begonnen met het kiezen van een lay-out:
- links: tijd, temperatuur & navigatie
- centraal: knipperlichten, toegelaten snelheid, huidige snelheid, auto voor jou, _line assist_ & rijbereik
- rechts: weergave van de functionaliteiten die je met de dial aan het bedienen bent

Alles wat donkergrijs is in de interface, is in principe transparant bij een echt HUD. De blauwe lijnen stellen de _line assist_ voor. De auto in het midden is een fictieve auto voor jou. De rechtse weergave (functionaliteiten) verdwijnt indien er 5 seconden niets wordt aangepast.

<p>
  <img src="/images/prototype HUD V2 home.png" width="32%">
  <img src="/images/prototype HUD V2 navigation.png" width="32%">
  <img src="/images/prototype HUD V2 phone.png" width="32%">
  <img src="/images/prototype HUD V2 music.png" width="32%">
  <img src="/images/prototype HUD V2 airco left.png" width="32%">
  <img src="/images/prototype HUD V2 airco right.png" width="32%">
</p>

Elk van de 5 functies kan bediend worden door zowel te draaien en/of te klikken met de dial. Onderstaande tabel en gif geven een overzicht van de interacties.

||Navigation|Contacts|Music|Climate Control Driver|Climate Control Passenger|
|---:|:---:|:---:|:---:|:---:|:---:|
|draaien|bestemming selecteren|contact selecteren|nummer selecteren|temperatuur instellen|temperatuur instellen|
|klikken|bestemming bevestigen|bellen / ophangen|spelen / pauzeren|stand zetelverwarming wijzigen|stand zetelverwarming wijzigen|

<img src="/images/prototype HUD V2.gif">

Alle bovengenoemde onderdelen vormden samen een uitgebreid en interactief prototype waarmee we de testen in een reële context konden afnemen. Opdat de focus volledig naar het product zou kunnen gaan, testten we in een elektrische auto waarmee we de baan optrokken. Dit alles zorgde ervoor dat we de validiteit van onze gebruikerstesten konden verhogen.

## Develop 2: Human Mind
Het eindpunt van deze tweede ontwikkelingsfase is een geoptimaliseerd ontwerp, waarvan we aan de hand van een _expert review_ en usability testen kunnen aantonen welke optimalisaties we hebben aangebracht.

### Doelstellingen
- Bekomen van een definitief ontwerp van het interactief prototype.
- Een efficiënte interface hebben.
-	Een effectieve interface hebben.
-	Een veilige interface hebben.
-	Een nuttige interface hebben.
-	Een eenvoudige interface hebben.
-	Een onthoudbare interactie hebben.

### Materiaal & methoden
Voor de _expert review_ stelden we ons interactief prototype op in een leslokaal. Na een korte briefing over het project en de verwachtingen werkten de experts eerst apart om elkaar niet te beïnvloeden. In een eerste ronde maakten ze kennis met het prototype om zich in te leven. In de tweede ronde richtten ze zich op specifieke features volgens de _heuristic evaluation sheet_. Na afloop bespraken we samen de pijnpunten.

Voor de _usability test_ startten we opnieuw met een korte introductie van het project om de testpersonen context te geven. De test bestond uit verschillende fases: eerste kennismaking met het prototype, daarna bediening van de functies, en vervolgens een rit. Om een zo goed mogelijke ecologische validiteit te behalen, namen we de gebruiker mee in een verhaal. Tijdens de rit moesten gebruikers specifieke acties uitvoeren. Na de rit volgde een nabespreking en de introductie van ons nieuw concept, een losstaand controlepaneel (zie verder), om naar hun gevoel en bedenkingen daarrond te peilen. Alle inzichten en opmerkingen werden vastgelegd in een _participant form_.

### Resultaten

#### Expert review (N=2)
Uit de expert review bleek dat ons concept, vooral het HUD, nog niet duidelijk genoeg is. Er was verwarring over de grootte, helderheid, transparantie en icoontjes. De analyse gebeurt volgens de 7 vooropgestelde heuristieken:
- Minimalistisch ontwerp: Elementen zoals contacten waren moeilijk leesbaar. De auto op het HUD was te prominent aanwezig.
- Duidelijke visuele hiërarchie: De auto stond te prominent in beeld.
- Directe feedback: Het scrollen door de muziek was niet intuïtief. Een expert miste auditieve feedback.
- Gebruik van contrast en leesbaarheid: De bruikbaarheid van het HUD bij verschillende lichtomstandigheden werd betwijfeld. Echter, ervaring met echte HUD's leert dat dit geen probleem zou moeten zijn.
- Focus op gebruiksgemak: De niet-intuïtieve draairichting van de muziek werd opnieuw genoemd. Een expert stelde voor dit instelbaar te maken. Verder waren er geen opmerkingen.
- Contextuele feedback en instructies: Er ontbreekt audio- of trilmelding als feedback. Een expert vond dat de verwarming beter bekeken moet worden. Momenteel kan alleen de temperatuur voor bestuurder en passagier apart geregeld worden; er zou een synchronisatiefunctie moeten zijn.
- Match tussen systeem en echte wereld: Geen opmerkingen.

<p>
  <img src="/images/dev2 expert review seppe.jpg" width="48%">
  <img src="/images/dev2 expert review sterre.jpg" width="48%">
</p>

#### Usability test (N=5)
Op basis van opnames, directe feedback en formulieren kunnen we diepgaand analyseren. Bestuurders raakten soms afgeleid omdat het een prototype was. Het is beter om vooraf te melden dat de techniek kan falen en dat wij dat tijdens de test oplossen, zodat zij zich hier niet door laten afleiden.

We begonnen met een verificatie van vorige tests over posities en functies. Sommige testpersonen wilden de temperatuur van bestuurder en passagier aan de uiterste posities zien. Eén persoon vond de navigatie storend in beeld; een L-vormige indeling zou beter zijn. Relatieve posities kunnen naar voorkeur worden aangepast (software), maar absolute posities blijven hetzelfde (hardware). Bij de eerste testrun ontdekten de meeste gebruikers de zetelverwarming niet. Een persoon vond deze functie overbodig omdat die maar een paar maanden per jaar wordt gebruikt. Een logische startpositie zou de navigatie zijn, niet de passagierstemperatuur. Eén testpersoon wilde meer voorgelezen opties, terwijl anderen de voorgelezen menu’s storend vonden.

We merkten dat het op enkele momenten lastig was om een bepaald adres, telefoonnummer, muzieknummer of temperatuur te selecteren. De dial was te gevoelig.

Bij de vraag naar afleiding vergeleken met hun huidige auto, vonden de meeste gebruikers dat het slechts een gewoontekwestie was. Na een paar ritten zou het systeem een meerwaarde zijn. De magneten werden als handig ervaren. Eén persoon wilde meer informatie in het HUD geprojecteerd zien.

De dial hoeft niet groot te zijn; een kleinere maat past bijvoorbeeld in je broekzak en kan dienen als autosleutel. Een grote dial straalt echter meer sympathie uit. De dial kan ook gebruikt worden om geluidsverdeling te regelen door verschuiving rond een magnetisch middelpunt, en om muziek te bedienen met klikken en dubbelklikken. Door de verkeerde _affordance_ (conische vorm) hadden veel gebruikers de neiging de dial op te heffen.

Het tweede concept van een losstaand controlepaneel werd positief ontvangen. Het voelde logischer aan dan een dial op het scherm, maar tijdens het rijden werd er niet aan gedacht. Testpersonen vonden dat het controlepaneel verticaal in de middenconsole geïntegreerd mag worden, maar wilden hun bekerhouders niet verliezen. Een cirkelvormige positie van de dial werd als intuïtiever ervaren. De meeste testpersonen vonden dat het scherm kleiner mag zijn, gemiddeld met een factor 2/3.

<p>
  <img src="/images/dev2 test wannes.jpeg" width="48%">
  <img src="/images/dev2 test hans.jpeg" width="48%">
</p>

### Conclusies & implicaties
Om een betere context te bieden aan de testpersoon maken we een visualisatie van het HUD in de auto. We vermelden hierbij de nodige extra uitleg. Ook moeten we vermelden welke slimme functies de auto al heeft en wat niet meer handmatig geregeld hoeft te worden.

De draairichting en de gevoeligheid bij het scrollen door de lijsten kan softwarematig worden aangepast. In de interface wordt er een blijvende pop-up geïntegreerd wanneer je aan het bellen bent en door andere menu’s aan het scrollen bent. Ook de muziek die afspeelt blijft continu weergegeven. Al deze zaken zorgen voor een vrij druk HUD. Daarom maakten we een opsplitsing van welke informatie in het HUD wordt weergegeven en welke in het dashboard achter het stuur. De onderstaande figuur illustreert dit.

<img src="/images/dev2 hud vs dashboard.jpg">

Om de afleiding - veroorzaakt door het HUD - verder te beperken, voegen we ook een stem toe die aangeeft in welk menu je je bevindt. Een haptische motor in de dial zorgt voor de nodige tactiele feedback.

Ten slotte wordt er gezocht naar een mogelijkheid om de temperatuur van bestuurder en passagier te synchroniseren.

Na het industry consult kwamen we op een punt waar we ons concept helemaal konden omgooien. Een enge stap, maar deze werd ook aangemoedigd door onze testgebruikers. In plaats van de dial op het touchscreen te plaatsen zal deze nu bediend worden op een controlepaneel die in de middenconsole verwerkt zit, met behoud van de drankenhouders. Verder zullen de posities ook niet meer lineair uitgelijnd worden. Het nieuwe controlepaneel wordt cirkelvormig gemaakt. Dit creëert een centrale positie (bijvoorbeeld de navigatie). Links en rechts worden respectievelijk de temperatuur voor de bestuurder en de passagier. Boven en onder worden ingevuld door de telefoon en de muziek. Dit is veel intuïtiever en eenvoudiger blind te bedienen. Dit nieuwe concept wordt duidelijk in het volgende deel.

Het scherm wordt terug het oorspronkelijke scherm zoals reeds in de testauto aanwezig. Daarnaast is er de mogelijkheid om de dial kleiner te maken tot een broekzakformaat. Op die manier zou de dial ook als autosleutel gebruikt kunnen worden. Door de dial / autosleutel op de centrale positie te plaatsen kan de auto gestart worden. Dit idee vloeide voort uit de usability test waarbij de dial nog op het touchscreen bediend werd. Echter weten we niet of dit ook nog van toepassing zal zijn bij ons nieuw concept, dit zal bevraagd worden in een volgende gebruikerstest.

De uitdaging op dit pivot point zit hem in het maken van een nieuw controlepaneel die toch nog steeds modern en innovatief oogt. In de laatste testen gaan we deze laatste inzichten al dan niet verifiëren bij een nieuwe groep gebruikers.

> [!IMPORTANT]
> Design Requirements:
> - Er dient auditieve feedback te zijn bij het veranderen van menu.
> - De auditieve feedback kan uitgeschakeld worden.
> - Er dient augmented reality te zijn in het HUD.
> - De draairichting van de _dial_ kan omgekeerd worden door de gebruiker.
> - Het HUD dient groter te zijn dan de afmetingen van een gemiddeld smartphonescherm (6,5 inch).
> - De muziek dient steeds zichtbaar blijven bij het veranderen van menu.
> - De beller dient steeds zichtbaar te blijven tijdens het bellen en veranderen van menu.
> - De helderheid van het HUD dient automatisch te veranderen.
> - De temperatuur van zowel passagier en bestuurder kan samen bediend worden met één handeling.
> - Bij het bedienen van de functies via een controlepaneel dient het touchscreen kleiner te zijn (kleiner dan 10 inch).
> - Het controlepaneel dient een intuïtievere positieverdeling voor de _dial_ te hebben dan een lineaire verdeling.

## Prototype
Bij dit prototype gooiden we ons hele concept om. Het touchscreen maakte plaats voor een controlepaneel in de middenconsole.

### Controlepaneel
Het controlepaneel is cirkelvormig en bevat vijf posities. Dit werd gemaakt met de lasercutter. Het principe van de snapping points door middel van magneten, rosse munten en magneetsensoren bleef hetzelfde. Er werden ook enkele tussenstukken gemaakt om dit controlepaneel in de testauto te integreren. 

<p>
  <img src="/images/prototype controlepaneel.jpeg" width="48%">
  <img src="/images/prototype controlepaneel achter.jpg" width="48%">
</p>

### Dial
De gevoeligheid van de dial werd softwarematig verminderd door een extra variabele 'grens' toe te voegen. Alleen het gedeelte dat de rotatie van de encoder uitleest, werd aangepast. Verder zijn er geen wijzigingen aangebracht aan de vorm, grootte, hardware...

```py
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
```

### HUD
De interface van het HUD werd verder geoptimaliseerd. Mede om de gevoeligheid te verkleinen, verandert de temperatuur per gehele graad in plaats van per halve graad. Ook werd een extra icoontje toegevoegd om aan te geven dat de stand van de zetelverwarming aangepast kan worden door op de dial te klikken. De prominent aanwezige auto, de tijd, de datum en het rijbereik werden verplaatst naar het dashboard achter het stuur.

<img src="/images/prototype HUD V4.png">

## Develop 3: Human Senses

### Doelstellingen
- Kwantificatie van de afleiding tijdens het rijden
### Materiaal & methoden

### Resultaten

### Conclusies & implicaties

> [!IMPORTANT]
> Design Requirements:

## Overzicht Design Requirements
|ID|Requirement|Source|Date|
|:---|:---|:---|:---|
|**Groep 1**|**Algemeen**|
|1.1|Alle belangrijke functies moeten bedienbaar zijn zonder dat de ogen van de baan dienen af te wijken.|Meeting Gransstudio|19/10/2023|
|1.2|Er dienen zes belangrijke functies veilig bedienbaar te worden tijdens het rijden.|Interface user test|02/01/2024|
|1.3|Het bedieningselement dient op elk mogelijke positie toegankelijk te zijn voor 95% van de mensen.|Human body user test|05/03/2024|
|1.4|Het volume dient aangepast te kunnen worden met een aparte knop.|Human body user test|05/03/2024|
|1.5|Er dient auditieve feedback te zijn bij het veranderen van menu.|Expert Review|22/04/2024|
|1.6|De auditieve feedback kan uitgeschakeld of aangepast worden.|Expert Review|22/04/2024|
|1.7|De temperatuur van zowel passagier en bestuurder kan samen bediend worden met één handeling.|Expert Review|22/04/2024|
|**Groep 2**|**Dial**|
|2.1|Er is haptische feedback bij het bedienen van de functies.|_dial_ user test|24/12/2023|
|2.2|De dial moet een conische vorm hebben.|_dial_ user test|24/12/2023|
|2.3|De dial dient voor 9/10 testpersonen goed in de hand te liggen (naar eigen zeggen).|_dial_ user test|24/12/2023|
|2.4|De dial moet ook naast het scherm bedienbaar zijn.|Interface user test|02/01/2023|
|2.5|De draairichting van de _dial_ kan omgekeerd worden door de gebruiker.|Expert Review|22/04/2024|
|2.6|De dial dient een afgeronde vorm naar beneden te hebben om de neiging tot opheffen te verminderen|Human mind user test|01/05/2024|
|2.7|De dial bezit meerdere functies (verschuivingen rond magnetisch middelpunt, dubbelklikken, ...)|Human mind user test|01/05/2024|
|**Groep 3**|**Interface**|
|3.1|De functieplaatsen van de _dial_ dienen personaliseerbaar te zijn.|Interface user test|02/01/2024|
|3.2|De interface moet goed leesbaar zijn, ook voor oudere mensen.|Interface user test|02/01/2024|
|3.3|De interface moet modern ogen.|Interface user test|02/01/2024|
|3.4|Functies op de interface mogen niet de intentie geven om met touch bediend te kunnen worden.|Human body user test|05/03/2024|
|3.5|De functies links (één vierde van de linkerhelft) op de interface dienen niet aangepast te worden tijdens het rijden.|Human body user test|05/03/2024|
|**Groep 4**|**_Head-up-display_**|
|4.1|Er dient een blijvend icoon te zijn bij het bellen en veranderen van menu's.|Expert Review|22/04/2024|
|4.2|Er dient een blijvend icoon te zijn van de muziek bij het veranderen van menu's.|Expert Review|22/04/2024|
|4.3|De helderheid van het HUD moet automatisch aanpassen aan de lichtintensiteit buiten.|Expert Review|22/04/2024|
|4.4|Er dient een blijvend icoon te zijn van de muziek bij het veranderen van menu's.|Expert Review|22/04/2024|
|4.5|Er dient augmented reality te zijn in het HUD.|Expert Review|22/04/2024|
|4.6|Het HUD dient groter te zijn dan de afmetingen van een gemiddeld smartphonescherm (6,5 inch).|Expert Review|22/04/2024|
|4.7|Er dient een visuele verduidelijking te zijn om de mogelijkheid tot zetelverwarming in de _climate control_ te verduidelijken.|Human mind user test|01/05/2024|
|**Groep 5**|**Controlepaneel**|
|5.1|Bij het bedienen van de functies via een controlepaneel dient het touchscreen kleiner te zijn (kleiner dan 10 inch).|Human mind user test|01/05/2024|
|5.2|Het controlepaneel dient een intuïtievere positieverdeling voor de _dial_ te hebben dan een lineaire verdeling.|Human mind user test|01/05/2024|

## Kritische reflectie
We hebben heel wat bijgeleerd tijdens de ontdekkings- en definitiefase dit semester. We zijn reeds gestart met de eerste prototypes en hebben dankzij onze gebruikerstesten al een concreet beeld over hoe we een fysieke interactie tot stand gaan brengen tussen het scherm, de *dial* en een HUD. Onze testgebruikers waren alvast enthousiast over het concept, ze zien duidelijk het potentieel erin en ook het achterliggende probleem is duidelijk.

We blikken terug op een periode met een effectieve en vlotte samenwerking en kijken ernaar uit om in het tweede semester te werken aan de ontwikkelings- en eindfase. Moesten we de definitiefase opnieuw kunnen doen, zouden we tussen de testen met de *dials* en de interfaces iets meer tijd voorzien hebben. Zo zouden we een uitgebreidere interface kunnen gaan ontwerpen om een tweede maal met een iets realistischer prototype naar de gebruiker te trekken. We hadden graag in deze fase nog getest hoe gebruikers het liefst tactiele feedback ontvangen van de *dial*. Hoe intens en hoe snel moet de vibratie zijn bij het bedienen van de *dial*? 
Een ander kritisch punt dat we willen aankaarten is de validiteit van onze testen. Naast het feit dat we meer tijd moesten voorzien tussen de twee testen, hadden we best ook gekeken om de testen te doen plaatsvinden in een meer realistische omgeving. Nu waren de testen gewoon in een woonkamer, beter zou zijn dat de testpersonen zich meer konden inleven in de situatie en dat de interfacetest in een echte auto kon plaatsvinden. Dan zou de interface gepositioneerd kunnen worden op de plaats waar in die auto het huidige infotainmentsysteem zich bevindt. De testen die we nu hebben uitgevoerd droegen misschien niet genoeg bij aan de uiteindelijke conceptkeuzes die we maakten. De focus van dit project ligt meer op de interactie die we nu juist minder hebben getest. 
In de volgende fases gaan we ons alvast meer richten op de totaalervaring in reëele contexten. De validiteit moet beter en we willen vooral gaan kijken in welke mate ons product effectief zorgt voor minder afleiding.

Voor de materiaalkeuze van de *dial* trokken we naar enkele gebruikers met een houten plaat met daarop 6 verschillende materialen. We wilden een diverse keuze aan materialen voorstellen, maar hierop baseerden we ons op gevonden materialen. Graag hadden we wat meer tijd gehad om bijvoorbeeld verschillende 3D-printmaterialen erbij te plaatsen zoals poederprints. Of hadden we opzoek kunnen gaan naar speciale en duurzame metalen. In het tweede semester zullen we een definitieve *dial* (poeder)printen (zachter materiaal) om nog eens bij onze doelgroep te polsen welke materialen zij prefereren.

Als we kijken naar het prototypen van een HUD, dan zit daar misschien nog de grootste uitdaging. We moeten op zoek naar een eenvoudig HUD dat toch een breed scala aan informatie kan weergeven en vooral uiterst vloeiend samenwerkt met de dial en het touchscreen. De uitdaging zit hem in het vinden van een optimale weergavebalans. Een tekort aan informatie zorgt ervoor dat de bestuurder terug naar het touchscreen moet kijken, maar een teveel aan informatie zorgt evenwel voor afleiding. Om het HUD praktisch te gaan realiseren hebben we oog op verschillende methodes. Zo bestaan er heel wat simpele methodes om aan de hand van een scherm en twee spiegels de informatie te gaan projecteren op een raam. Hiervoor kunnen we eventueel samenwerken met andere studenten.

Eenmaal alle afzonderlijke aspecten ontworpen en geoptimaliseerd zijn, is het tijd voor de volgende stap: het samenvoegen tot een mooi en realistisch geheel waarmee we naar de eindgebruiker kunnen trekken. Een gehele ervaring in een natuurlijke context leidt tot nieuwe inzichten en gevoelens, die we dan kunnen impliceren in een finaal prototype: Ctrl-Wheely.

NIEUWNIEUWNIEUWNIEUW

We merkten dat testen in een reële context de gebruiker op zijn gemak stelde en dat het voor ons een veel beter beeld schept over hoe ons concept in de praktijk er zal uitzien. Een nadeel aan testen tijdens het rijden is dat de gebruiker eerst nog moet wennen aan een auto die ze niet kennen. Dat vergt aandacht die op dat moment niet naar de test en in het bijzonder naar ons concept kan gaan.

<img src="/images/concept render voor.png"/>

## Bijlagen
- Discovery
  - Contextual inquiries
    - [protocol](https://ugentbe-my.sharepoint.com/:b:/g/personal/korneel_verraes_ugent_be/EbsFMVmtLS9PsmruQO7G164BsZ5_j9Fu6Rl854Qa3qWmYQ?e=QRkYSC)
    - [report](https://ugentbe-my.sharepoint.com/:b:/g/personal/korneel_verraes_ugent_be/Eas4YG_7SpxApFeq5h0TQsYBoihKIDYJINAHUwYjbGnJOA?e=orFrf5)
  - Focus groups
    - [protocol](https://ugentbe-my.sharepoint.com/:b:/g/personal/korneel_verraes_ugent_be/EWh6baFsMMRGoy3ka52hPG4BzbzurMG2UVsQyipgFQgmfw?e=gE4W8u)
    - [report](https://ugentbe-my.sharepoint.com/:b:/g/personal/korneel_verraes_ugent_be/EcaQ1q157GFNu4digImXqBoBSc3dnoYHoLg65hIQWaBKaA?e=4kcSHy)
  - Benchmarking
    - [protocol](https://ugentbe-my.sharepoint.com/:b:/g/personal/korneel_verraes_ugent_be/EXawcWpXBVpEt_lIMpMp_2ABLn8YT56Gweo287PCzCVebw?e=ohLtQk)
    - [report](https://ugentbe-my.sharepoint.com/:b:/g/personal/korneel_verraes_ugent_be/ES47CYFbTF1EnaaEx6L9F90BNoMAPfkbhsjLT51bKq1DlA?e=dMLCQ5)
- Definition
  - Dial
    - [protocol](https://ugentbe-my.sharepoint.com/:b:/g/personal/korneel_verraes_ugent_be/EXA8tLux91JJgyoZDhd7l8EBiHgo0lbct7zmwVrcxtyVpQ?e=EAw8CV)
    - [report](https://ugentbe-my.sharepoint.com/:b:/g/personal/korneel_verraes_ugent_be/ES0ZpXk9lqNEglcTKWC2yTYBzBOITMq5B5F91GWfasvyiA?e=wBfrfh)
  - User interface
    - [protocol](https://ugentbe-my.sharepoint.com/:b:/g/personal/korneel_verraes_ugent_be/EZTgPm-nd4pIsmm8usEYeBUBz1gfDapTBei-XWnFm_MZ7g?e=bN2sFI)
    - [report](https://ugentbe-my.sharepoint.com/:b:/g/personal/korneel_verraes_ugent_be/EeAsWolB5e9JmBZqcdCANsUBhkX-JtqDsruhD6Gw2MzLAQ?e=icrMtT)
- Develop 1
  - [protocol](https://ugentbe-my.sharepoint.com/:b:/g/personal/korneel_verraes_ugent_be/Ed5Cw6uYuAREtow-HiDa7TQBSTC7YIpYGRGnOxcfrB0F6w?e=EO4oEH)
  - [report](https://ugentbe-my.sharepoint.com/:b:/g/personal/korneel_verraes_ugent_be/ETyGm0r8TDZHsSQlNxfRxxwBqzdG42B0hlqhnKxVS78oCg?e=2yokI9)
- Develop 2
  - Expert review
    - [protocol](https://ugentbe-my.sharepoint.com/:b:/g/personal/korneel_verraes_ugent_be/ETqsrg_xHrBOkA1brbJ3t2IBkXsYxzCnGieAo1CWaPYekw?e=dK0oaT)
    - [report](https://ugentbe-my.sharepoint.com/:b:/g/personal/korneel_verraes_ugent_be/EfVC145y3KxDvudC-U4TsT8BUycW9wZWifMW9NHYxgdx_A?e=c0tfIG)
  - Usability test
    - [protocol](https://ugentbe-my.sharepoint.com/:b:/g/personal/korneel_verraes_ugent_be/EV5OZfwtGPBFrt3uwZXcVNcBihPvPzmzFxCDzjzQltVrZA?e=9NACFB)
    - [report](https://ugentbe-my.sharepoint.com/:b:/g/personal/korneel_verraes_ugent_be/EeRQD4A97TdJoxIuUXeTQNYBUtt4XM00AD7CwpS1mvPMRg?e=ToBzBb)
- Develop 3
  - [protocol]()
  - [report]()

## Bronnen
[^1]: Beeckman, H. (2021, 11 maart). *Aanraakschermen in je auto bedienen drie keer gevaarlijker dan rijden onder invloed: “Europese regels nodig”.* VRTNWS. https://www.vrt.be/vrtnws/nl/2021/03/11/aanraakschermen-in-je-auto-bedienen-drie-keer-gevaarlijker-dan-r/
[^2]: TRL (2019, 15 april). *Distracted Driving Evidence Has Fallen Behind the Latest Technological Changes.* TRL. https://www.trl.co.uk/news/distracted-driving-evidence-has-fallen-behind-the-latest-technological-changes
[^3]: Rotmans, M. (2005). *DINBelg 2005* [Dataset]. https://www.dinbelg.be/DINBelg%202005%20antropometrie%20tabel.PDF
