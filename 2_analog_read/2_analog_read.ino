// Lectura del voltaje en los pines de entrada analogicos

int readPin=A3;
float realVoltage;
int aux=0; // valor entre 0 y 1024
int delayTime=0;

void setup() {
  pinMode(readPin, INPUT);
  Serial.begin(9600); // bits/s para la transmision de datos en serie. Debe coincidir con el bit rate de la pestaña Serial Monitor
}

void loop() {
  aux=analogRead(readPin); // lee el voltaje de entrada en el pin indicado como un valor entero entre 0 y 1023 (0 = 0V, 1023 = 5V)
  realVoltage = (5. / 1023.) * v2; // se calcula el valor del voltaje en voltios
  Serial.println(realVoltage); // se imprime el valor en Serial Monitor
  delay(delayTime);
}
