const int ledPin = 6; // PWM pin

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Turn the LED on (full brightness)
  analogWrite(ledPin, 255);
  delay(500); // Wait for 500 milliseconds (0.5 seconds)

  // Turn the LED off (0 brightness)
  analogWrite(ledPin, 0);
  delay(500); // Wait for 500 milliseconds (0.5 seconds)
}
