
int semaforo1[3];
int semaforoped1[2];

void setup()
{
  
  semaforo1[0] = 13;
  semaforo1[1] = 12;
  semaforo1[2] = 11;
  
  semaforoped1[0] = 9;
  semaforoped1[1] = 8;
  
 
  pinMode(semaforo1[0], OUTPUT);
  pinMode(semaforo1[1], OUTPUT);
  pinMode(semaforo1[2], OUTPUT);
  
  pinMode(semaforoped1[0], OUTPUT);
  pinMode(semaforoped1[1], OUTPUT);
}

void loop()
{
  digitalWrite(semaforo1[0], HIGH);
  digitalWrite(semaforo1[1], LOW);  
  digitalWrite(semaforo1[2], LOW);
  digitalWrite(semaforoped1[0],LOW);
  digitalWrite(semaforoped1[1],HIGH);  
  
  delay(1000);
  
  digitalWrite(semaforo1[0], HIGH);
  digitalWrite(semaforo1[1], LOW);  
  digitalWrite(semaforo1[2], LOW);
  digitalWrite(semaforoped1[0],HIGH);
  digitalWrite(semaforoped1[1],LOW);  
  
  delay(300);
  
  digitalWrite(semaforo1[0], HIGH);
  digitalWrite(semaforo1[1], LOW);  
  digitalWrite(semaforo1[2], LOW);
  digitalWrite(semaforoped1[0],HIGH);
  digitalWrite(semaforoped1[0],LOW);  
  
  delay(300);
  
   digitalWrite(semaforo1[0], HIGH);
  digitalWrite(semaforo1[1], LOW);  
  digitalWrite(semaforo1[2], LOW);
  digitalWrite(semaforoped1[0],HIGH);
  digitalWrite(semaforoped1[1],LOW); 
  
  delay(300);
  
  digitalWrite(semaforo1[0], LOW);
  digitalWrite(semaforo1[1], LOW);
  digitalWrite(semaforo1[2], HIGH);
  digitalWrite(semaforoped1[0],HIGH);
  digitalWrite(semaforoped1[1],LOW);
    
  delay(1000);
  digitalWrite(semaforo1[0], LOW);
  digitalWrite(semaforo1[1], HIGH);
  digitalWrite(semaforo1[2], LOW);
  digitalWrite(semaforoped1[0],HIGH);
  digitalWrite(semaforoped1[1],LOW);  

  delay(1000);
  
}
