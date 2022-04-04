#define freqmin 1000
#define freqmax 100
#define pasos 1000

double sum = 0;
double angulo;

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

  /*
  digitalWrite(13, HIGH); // sets the digital pin 13 on
  delay(angulo);            // waits for a second
  digitalWrite(13, LOW);  // sets the digital pin 13 off
  delay(angulo);            // waits for a second
  Serial.print(sumA);
  Serial.print("\n");
  */
  
  if (ledState == HIGH){
    ledState = LOW;
    delay(10);
  }
  if (currentMillis - previousMillis >= frec) {
    // save the last time you blinked the LED
    previousMillis = currentMillis;

    // if the LED is off turn it on and vice-versa:
    if (ledState == LOW) {
      ledState = HIGH;
    }

    // set the LED with the ledState of the variable:
    digitalWrite(ledPin, ledState);
  }
  
}
