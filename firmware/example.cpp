const int hallPin = 2;
const int ledPin = 13;
void setup() {
  pinMode(hallPin, INPUT_PULLUP);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  bool near = (digitalRead(hallPin) == LOW);
  if (near) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }
}
