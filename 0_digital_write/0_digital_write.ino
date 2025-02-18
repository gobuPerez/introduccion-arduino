// Encendido de un LED con digitalWrite
// La pata mas larga del LED se conecta al polo positivo y la mas corta a tierra (-)

void setup() {
  pinMode(13, OUTPUT); // Se configura el pin 13 como pin de salida
}

void loop() {
  digitalWrite(13, HIGH); // 5V en el pin 13
  delay(1000); // pausa de 1000 ms
  digitalWrite(13, LOW); // 0V en el pin 13
  delay(1000); 
}
