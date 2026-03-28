const int audioPin = A0;

void setup() {}

void loop() {
  analogWrite(audioPin, 255);
  delayMicroseconds(500);
  analogWrite(audioPin, 0);
  delayMicroseconds(500);
}



