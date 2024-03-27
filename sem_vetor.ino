
int semaforo1[3];

void setup()
{
  
  semaforo1[0] = 13;
  semaforo1[1] = 12;
  semaforo1[2] = 11;
  
 
  pinMode(semaforo1[0], OUTPUT);
  pinMode(semaforo1[1], OUTPUT);
  pinMode(semaforo1[2], OUTPUT);
}

void loop()
{
  digitalWrite(semaforo1[0], HIGH);
  digitalWrite(semaforo1[1], LOW);  
  digitalWrite(semaforo1[2], LOW);
  delay(1000);
  digitalWrite(semaforo1[0], LOW);
  digitalWrite(semaforo1[1], LOW);
  digitalWrite(semaforo1[2], HIGH);
  delay(1000);
  digitalWrite(semaforo1[0], LOW);
  digitalWrite(semaforo1[1], HIGH);
  digitalWrite(semaforo1[2], LOW);
  delay(1000);
  
}
