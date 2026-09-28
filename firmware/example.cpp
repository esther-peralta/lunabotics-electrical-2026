// hope i'm doing this right
// (- isabella)

// set the values for the h=pins that the hall sensor and
// LED are connected to
const int hallPin = 2;
const int ledPin = 13;

// configure the hall sensor pin to take input and the LED pin to
// take output
void setup() {
  pinMode(hallPin, INPUT_PULLUP);
  pinMode(ledPin, OUTPUT);
}

// then assign "near" the value "true" if the hall sensor is near
// and, if it is, turn on the LED
void loop() {
  bool near = (digitalRead(hallPin) == LOW);
  if (near) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }
}
