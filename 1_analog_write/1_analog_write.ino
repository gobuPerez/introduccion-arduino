// Aumento del brillo de un LED de forma gradual con analogWrite

void setup() {
  pinMode(11, OUTPUT);
}

void loop() {
  // analogWrite:
  // El segundo parametro de la funcion es un valor entre 0 y 255(0 = 0V, 255 = 5V)
  // A diferencia de digitalWrite, permite establecer cualquier voltaje entre 0V y 5V
  analogWrite(11, 5); 
  delay(500);
  analogWrite(11, 50);
  delay(500);
  analogWrite(11, 150);
  delay(500);
  analogWrite(11, 255);
}
