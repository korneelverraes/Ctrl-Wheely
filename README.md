# Ctrl-Wheely
*Optimalisatie van autodashboard-interactie door middel van een fysieke verplaatsbare knop op het touchscreen.* 

*Projectteam: Korneel Verraes; Warre Robbe*

24/01/2024

## Samenvatting
De nieuwe generatie auto's worden steeds meer uitgerust met slimme dashboards die een breed scala aan functies en flexibele interacties bieden. Het ideale schoolvoorbeeld van deze trend is de Tesla, met één groot touchscreen en slechts twee knoppen op het stuur. Hoewel dit ontwerp er heel fancy uitziet, stelt zich de vraag of dit allemaal nog veilig en wenselijk is. Worden we door dergelijke minimalistische interfaces te veel afgeleid? Of, op welke (gebruiksvriendelijke) manier kunnen we de functies in het dashboard bedienen zonder onze focus op de weg te verliezen?

Uit enkele *contextual inquiries* is gebleken dat het niet het touchscreen zelf is die voor de afleiding zorgt, maar het feit dat je geen tactiele feedback krijgt bij het bedienen van een functie. Verschillende artikels en wetenschappelijke onderzoeken bevestigen dat.

Onze oplossing is gebaseerd op de magnetische *Surface Dial* van Microsoft. Zo'n *dial* is een fysieke verplaatsbare knop die je op het touchscreen kan plaatsen. Elke plaats op het scherm representeert een bedienbare functie. Ook de combinatie met een *head-up-display* (HUD) is interessant omdat hierbij de ogen niet van de baan afwijken. 

In tegenstelling tot de standaard fysieke knoppen kun je met zo'n *dial* toch een breed scala aan functies gaan bedienen, met behoud van de tactiele feedback. Ook het touchscreen is er nog steeds voor wanneer men stilstaat of voor de passagier.

<p>
  <img src="/images/concept render zij.png" width="49%"/>
  <img src="/images/concept render close-up.png" width="49%"/>
</p>

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
> Uit de discoveryfase halen we onze eerste *design requirements*.
>  - Het interface moet personaliseerbaar zijn.
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
>  Uit de twee conceptesten vullen we de _design requirements_ aan met zaken die volgens de gebruiker absoluut noodzakelijk zijn.
> - De _dial_ moet een conische vorm hebben.
> - De _dial_ moet goed in de hand liggen.
> - De _dial_ moet ook naast het scherm bedienbaar zijn.
> - Het touchscreen moet ook toegankelijk zijn voor kleinere mensen.
> - Er dienen zes belangrijke functies veilig bedienbaar te worden tijdens het rijden.
> - Het interface moet goed leesbaar zijn, ook voor oudere mensen.
> - Het interface moet modern ogen.

## Develop 1: Human Body

### Doelstellingen
De theoretisch onderzochte ergonomische afmetingen gaan testen in de praktijk.
- Bekomen van definitieve afmetingen van het touchscreen tot aan de gebruiker.
- Bevestigen of verwerpen of de _dial_ overal en in elke situatie aangenaam te besturen is.
- Interface ergonomisch gaan bijstellen.

### Materiaal & methoden
Voor deze testen gingen we verder met de uit de vorige test gehaalde _interface_. Deze werd op een dibondplaat gemonteerd en er werden _snapping points_ geprototyped. Dit werd gedaan aan de hand van een sterke magneet te plaatsen in de 3D-geprinte dial en ijzeren plaatjes op de achterkant van de dibonplaat. De ijzeren plaatjes werden gemonteerd op de plaatsen waar op het interface ook functies met de dial te bedienen zijn. Zo werden er zes ijzeren platen gemonteerd, voor elke functie één.
Om de interface op de juiste afstand te plaatsen werd dik karton gebruikt om het interface verder te plaatsen ten opzichte van het huidige scherm in de wagen. Er werd een elektrische wagen gebruikt om de testomgeving zo realistisch mogelijk te maken.


### Resultaten

### Conclusies & implicaties

> [!IMPORTANT]
> Design Requirements

## Develop 2: Human Mind

### Doelstellingen

### Materiaal & methoden

### Resultaten

### Conclusies & implicaties

> [!IMPORTANT]
> Design Requirements

## Develop 3: Human Senses

### Doelstellingen

### Materiaal & methoden

### Resultaten

### Conclusies & implicaties

> [!IMPORTANT]
> Design Requirements
## Bill of materials
- touchscreen (oude tablet)
- werkende interface
- *rotary encoder*
- rond lcd-schermpje inclusief RPI (HyperPixel 2.1 Round)
- haptische motor
- HUD
- 3D-printmateriaal
- ...

## Kritische reflectie
We hebben heel wat bijgeleerd tijdens de ontdekkings- en definitiefase dit semester. We zijn reeds gestart met de eerste prototypes en hebben dankzij onze gebruikerstesten al een concreet beeld over hoe we een fysieke interactie tot stand gaan brengen tussen het scherm, de *dial* en een HUD. Onze testgebruikers waren alvast enthousiast over het concept, ze zien duidelijk het potentieel erin en ook het achterliggende probleem is duidelijk.

We blikken terug op een periode met een effectieve en vlotte samenwerking en kijken ernaar uit om in het tweede semester te werken aan de ontwikkelings- en eindfase. Moesten we de definitiefase opnieuw kunnen doen, zouden we tussen de testen met de *dials* en de interfaces iets meer tijd voorzien hebben. Zo zouden we een uitgebreidere interface kunnen gaan ontwerpen om een tweede maal met een iets realistischer prototype naar de gebruiker te trekken. We hadden graag in deze fase nog getest hoe gebruikers het liefst tactiele feedback ontvangen van de *dial*. Hoe intens en hoe snel moet de vibratie zijn bij het bedienen van de *dial*? 
Een ander kritisch punt dat we willen aankaarten is de validiteit van onze testen. Naast het feit dat we meer tijd moesten voorzien tussen de twee testen, hadden we best ook gekeken om de testen te doen plaatsvinden in een meer realistische omgeving. Nu waren de testen gewoon in een woonkamer, beter zou zijn dat de testpersonen zich meer konden inleven in de situatie en dat de interfacetest in een echte auto kon plaatsvinden. Dan zou het interface gepositioneerd kunnen worden op de plaats waar in die auto het huidige infotainmentsysteem zich bevindt. De testen die we nu hebben uitgevoerd droegen misschien niet genoeg bij aan de uiteindelijke conceptkeuzes die we maakten. De focus van dit project ligt meer op de interactie die we nu juist minder hebben getest. 
In de volgende fases gaan we ons alvast meer richten op de totaalervaring in reëele contexten. De validiteit moet beter en we willen vooral gaan kijken in welke mate ons product effectief zorgt voor minder afleiding.

Voor de materiaalkeuze van de *dial* trokken we naar enkele gebruikers met een houten plaat met daarop 6 verschillende materialen. We wilden een diverse keuze aan materialen voorstellen, maar hierop baseerden we ons op gevonden materialen. Graag hadden we wat meer tijd gehad om bijvoorbeeld verschillende 3D-printmaterialen erbij te plaatsen zoals poederprints. Of hadden we opzoek kunnen gaan naar speciale en duurzame metalen. In het tweede semester zullen we een definitieve *dial* (poeder)printen (zachter materiaal) om nog eens bij onze doelgroep te polsen welke materialen zij prefereren.

Als we kijken naar het prototypen van een HUD, dan zit daar misschien nog de grootste uitdaging. We moeten op zoek naar een eenvoudig HUD dat toch een breed scala aan informatie kan weergeven en vooral uiterst vloeiend samenwerkt met de dial en het touchscreen. De uitdaging zit hem in het vinden van een optimale weergavebalans. Een tekort aan informatie zorgt ervoor dat de bestuurder terug naar het touchscreen moet kijken, maar een teveel aan informatie zorgt evenwel voor afleiding. Om het HUD praktisch te gaan realiseren hebben we oog op verschillende methodes. Zo bestaan er heel wat simpele methodes om aan de hand van een scherm en twee spiegels de informatie te gaan projecteren op een raam. Hiervoor kunnen we eventueel samenwerken met andere studenten.

Eenmaal alle afzonderlijke aspecten ontworpen en geoptimaliseerd zijn, is het tijd voor de volgende stap: het samenvoegen tot een mooi en realistisch geheel waarmee we naar de eindgebruiker kunnen trekken. Een gehele ervaring in een natuurlijke context leidt tot nieuwe inzichten en gevoelens, die we dan kunnen impliceren in een finaal prototype: Ctrl-Wheely.

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
  - [protocol]()
  - [report]()
- Develop 2
  - [protocol]()
  - [report]()
- Develop 3
  - [protocol]()
  - [report]()

## Bronnen
[^1]: Beeckman, H. (2021, 11 maart). *Aanraakschermen in je auto bedienen drie keer gevaarlijker dan rijden onder invloed: “Europese regels nodig”.* VRTNWS. https://www.vrt.be/vrtnws/nl/2021/03/11/aanraakschermen-in-je-auto-bedienen-drie-keer-gevaarlijker-dan-r/
[^2]: TRL (2019, 15 april). *Distracted Driving Evidence Has Fallen Behind the Latest Technological Changes.* TRL. https://www.trl.co.uk/news/distracted-driving-evidence-has-fallen-behind-the-latest-technological-changes
