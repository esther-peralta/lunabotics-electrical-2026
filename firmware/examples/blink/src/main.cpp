// Temple Lunabotics Electrical Team
// Example: Built-in LED Blink
//

// This program turns the built-in LED on and off every second.
//

#include <Arduino.h>

#ifndef LED_BUILTIN
#define LED_BUILTIN 2
#endif

const int LED_PIN = LED_BUILTIN;

void setup() {

  // configure the built-in LED pin as an output
  //
  pinMode(LED_PIN, OUTPUT);
}

void loop() {

  // turn the LED on
  //
  digitalWrite(LED_PIN, HIGH);
  delay(1000);

  // turn the LED off
  //
  digitalWrite(LED_PIN, LOW);
  delay(1000);
}
