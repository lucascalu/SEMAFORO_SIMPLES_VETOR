int SEM1[3];
int PED1[2];

int SEM2[3];
int PED2[2];

void setup()
{
  
  SEM1[0] = 13;
  SEM1[1] = 12;
  SEM1[2] = 11;

 PED1[0] = 9;
 PED1[1] = 8;


  SEM2[0] = 5;
  SEM2[1] = 4;
  SEM2[2] = 3;

PED2[0] = 1;
PED2[1] = 0;
  

  pinMode(SEM1[0], OUTPUT);
  pinMode(SEM1[1], OUTPUT);
  pinMode(SEM1[2], OUTPUT);

  pinMode(PED1[0], OUTPUT);
  pinMode(PED1[1], OUTPUT);

  pinMode(SEM2[0], OUTPUT);
  pinMode(SEM2[1], OUTPUT);
  pinMode(SEM2[2], OUTPUT);

  pinMode(PED2[0], OUTPUT);
  pinMode(PED2[1], OUTPUT);

  

}


void loop()
{
    
  

  
  digitalWrite(SEM1[0], HIGH);
  digitalWrite(SEM1[1], LOW);  
  digitalWrite(SEM1[2], LOW);
  
  digitalWrite(PED1[0],LOW);
  digitalWrite(PED1[1],HIGH);
  
  digitalWrite(SEM2[0], LOW);
  digitalWrite(SEM2[1], LOW);  
  digitalWrite(SEM2[2], HIGH);
  
  digitalWrite(PED2[0],HIGH);
  digitalWrite(PED2[1],LOW);
  
delay(1000);
  
  
  digitalWrite(SEM1[0], HIGH);
  digitalWrite(SEM1[1], LOW);  
  digitalWrite(SEM1[2], LOW);
  
  digitalWrite(PED1[0],LOW);
  digitalWrite(PED1[1],HIGH);
  
  digitalWrite(SEM2[0], LOW);
  digitalWrite(SEM2[1], HIGH);  
  digitalWrite(SEM2[2], LOW);
  
  digitalWrite(PED2[0],HIGH);
  digitalWrite(PED2[1],LOW);
  
delay(1000);
  
  digitalWrite(SEM1[0], LOW);
  digitalWrite(SEM1[1], LOW);  
  digitalWrite(SEM1[2], HIGH);
  
  digitalWrite(PED1[0],HIGH);
  digitalWrite(PED1[1],LOW);
  
  digitalWrite(SEM2[0], HIGH);
  digitalWrite(SEM2[1], LOW);  
  digitalWrite(SEM2[2], LOW);
  
  digitalWrite(PED2[0],LOW);
  digitalWrite(PED2[1],HIGH);
  
delay(1000);
  
  digitalWrite(SEM1[0], LOW);
  digitalWrite(SEM1[1], HIGH);  
  digitalWrite(SEM1[2], LOW);
  
  digitalWrite(PED1[0],HIGH);
  digitalWrite(PED1[1],LOW);
  
  digitalWrite(SEM2[0], HIGH);
  digitalWrite(SEM2[1], LOW);  
  digitalWrite(SEM2[2], LOW);
  
  digitalWrite(PED2[0],LOW);
  digitalWrite(PED2[1],HIGH);
  
delay(1000);
  
}
