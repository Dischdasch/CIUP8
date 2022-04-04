#define freqmin 1000
#define freqmax 100
#define pasos 50000

double sum = 0;
double frec;
volatile byte ledState = LOW;
const byte ledPin = 13;

unsigned long previousMillis = 0;        // will store last time LED was updated

void setup() {
  pinMode(13, OUTPUT);    // sets the digital pin 13 as output
  Serial.begin(9600);
}

void loop() {
  sum += 3.14/pasos;
  double sumA = sin(sum)*100;
  frec = map(sumA,-100,100,freqmin,freqmax);

  unsigned long currentMillis = millis();
 
  if (currentMillis - previousMillis >= frec) {
    // save the last time you blinked the LED
    previousMillis = currentMillis;

    // if the LED is off turn it on and vice-versa:
    if (ledState == LOW) {
      ledState = HIGH;
    }
    else{
      ledState = LOW;
    }

    // set the LED with the ledState of the variable:
    digitalWrite(ledPin, ledState);
  }
}
