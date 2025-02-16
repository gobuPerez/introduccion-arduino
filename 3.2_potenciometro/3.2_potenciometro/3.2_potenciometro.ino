// Brillo gradual de un LED usando un potenciometro
int pinLED = 11;
int readPin = A0;
int readVoltage;

void setup() {
  pinMode(readPin, INPUT);
  pinMode(pinLED, OUTPUT);
}

void loop() {
  readVoltage = analogRead(readPin);
  // analogWrite recibe un valor entre 0 y 255
  analogWrite(pinLED, readVoltage * (255.0/1023.0));
}
