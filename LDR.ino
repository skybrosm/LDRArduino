#define PIN_LDR A1

int maximo = 0;
int minimo = 1023;

void setup() {
  Serial.begin(9600);
}

void loop() 
{
  int sensorValue = analogRead(PIN_LDR);
  maximo = max(maximo,sensorValue);
  minimo = max(minimo,sensorValue);
  Serial.print(sensorValue);
  Serial.print(",");
  Serial.print(maximo);
  Serial.print(",");
  Serial.println(minimo);
  if(sensorValue>=778&&sensorValue<=810){
  Serial.println("ROJO");
  }
  if(sensorValue>=650&&sensorValue<=700){
  Serial.println("AZUL");
  }
  if(sensorValue>=720&&sensorValue<=770){
  Serial.println("VERDE");
  }
  delay(500);
}
