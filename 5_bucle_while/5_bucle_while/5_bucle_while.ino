// Encendido de un LED usando un potenciometro y un bucle while
int readPin = A0;
int LEDPin = 11;
int readVoltage;

void setup() {
  pinMode(A0, INPUT);
  pinMode(LEDPin, OUTPUT);
}

void loop() {
  readVoltage = analogRead(readPin); // 0 - 1023

  while(readVoltage > 500) {
    digitalWrite(LEDPin, HIGH);
    readVoltage = analogRead(readPin);
  }

  digitalWrite(LEDPin, LOW);
}
