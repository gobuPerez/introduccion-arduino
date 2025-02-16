// Encendido de tres LEDs de forma condicional usando un potenciometro
 
int readPin = A0;
int blueLED = 12;
int yellowLED = 11;
int redLED = 10;
int readVoltage;
float realVoltage;
int delayTime = 100;

void setup() {
  pinMode(readPin, INPUT);
  pinMode(blueLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
  pinMode(redLED, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  readVoltage = analogRead(readPin);
  realVoltage = (5./1023.) * readVoltage;
  Serial.println(realVoltage);

  if (realVoltage < 2) {
    digitalWrite(yellowLED, LOW);
    digitalWrite(redLED, LOW);
    digitalWrite(blueLED, HIGH);
    // Se usa 2.05 en vez de 5 porque cuando el potenciometro da una lectura de 2, el voltaje esta oscilando alrededor de los 2V, por encima y por debajo, y los 
    // leds azul y amarillo se encendían de forma alterna. Con el pequeño margen de 0,05V se evita ese comportamiento. 
  } else if (realVoltage > 2.05 && realVoltage < 4) {  
    digitalWrite(blueLED, LOW);
    digitalWrite(redLED, LOW);
    digitalWrite(yellowLED, HIGH);
  } else if (realVoltage >= 4) {
    digitalWrite(blueLED, LOW);
    digitalWrite(yellowLED, LOW);
    digitalWrite(redLED, HIGH);
  }

  delay(delayTime);
}
