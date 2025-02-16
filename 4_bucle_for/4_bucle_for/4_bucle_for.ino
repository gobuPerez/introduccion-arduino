// Parpadeo de dos LEDs usando bucles for
int blueLED = 11;
int whiteLED = 10;
int counter;
int delayTime = 500;

void setup() {
  pinMode(blueLED, OUTPUT);
  pinMode(whiteLED, OUTPUT);
}

void loop() {
  // Encendido del primer LED
  for(counter = 1; counter <= 3; counter++) {
    digitalWrite(blueLED, HIGH);
    delay(delayTime);
    digitalWrite(blueLED, LOW);
    delay(delayTime);
  }
  // Encendido del segundo LED
  for(counter = 1; counter <= 5; counter++) {
    digitalWrite(whiteLED, HIGH);
    delay(delayTime);
    digitalWrite(whiteLED, LOW);
    delay(delayTime);
  }
}
