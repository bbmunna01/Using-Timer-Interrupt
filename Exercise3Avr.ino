#include <TimerOne.h>  // Library for Timer1 interrupt

const int ledPin = 13;  // Built-in LED

void setup() {
  pinMode(ledPin, OUTPUT);  // Set LED pin as output

  // Initialize Timer1: period = 1 second (1,000,000 microseconds)
  Timer1.initialize(1000000);  

  // Attach interrupt service routine to Timer1
  Timer1.attachInterrupt(toggleLED);
}

void loop() {
  // Nothing here — LED toggling is handled by Timer1 ISR
}

void toggleLED() {
  digitalWrite(ledPin, !digitalRead(ledPin));  // Toggle LED
}
