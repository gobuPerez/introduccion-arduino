// Parpadeo de un LED introduciendo por teclado el numero de parpadeos
int myNumber;
String msg="Introduce un numero: ";
String msg2="El numero que has introducido es: ";
int pinLed=10;
int blinks;

void setup() {
  pinMode(pinLed, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  Serial.println(msg);
  while (Serial.available() == 0) { }
  blinks=Serial.parseInt();

  for(int i = 0; i < blinks; i++) {
    digitalWrite(pinLed, HIGH);
    delay(500);
    digitalWrite(pinLed, LOW);
    delay(500);
  }
}
