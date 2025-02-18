// En los LEDs RGB de tipo catodo, la pata mas larga va conectada a tierra
// Blue, green, ground, red

int redPin=13;
int greenPin=12;
int bluePin=11;

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop() {
  digitalWrite(redPin, HIGH);
  analogWrite(greenPin, 150);
  analogWrite(bluePin, 25);
}
