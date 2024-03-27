// vetores

//int led1;
//int led2;

int led[5];//DEFINIR QUANTOS LEDS TERA O CONJUNTO

void setup()
{
  //led1=13;
  //led2=12;
  led[0] = 13;//LED Sinaleiro 1 vermelho
  led[1] = 11;//LED Sinaleiro 1 amarelo
  led[2] = 9; //LED Sinaleiro 1 verde

  led[3] = 8;//LED Pedestre vermelho
  led[4] = 7;//LED Pedestre verde
  

  
  //pinMode(led1, OUTPUT);
  //pinMode(led2, OUTPUT);
  pinMode(led[0], OUTPUT);//DEFINO COMO O LED VAI SE COMPORTAR
  pinMode(led[1], OUTPUT);
  pinMode(led[2], OUTPUT);
  pinMode(led[3], OUTPUT);
  pinMode(led[4], OUTPUT);
}

void loop()
{
  //digitalWrite(led1, HIGH);
  
  digitalWrite(led[0], HIGH);//REALIZO AÇÃO DO LED
  digitalWrite(led[1], LOW);
  digitalWrite(led[2], LOW);
  digitalWrite(led[3], LOW);
  digitalWrite(led[4], HIGH);
  delay(5000);

  digitalWrite(led[0], LOW);//REALIZO AÇÃO DO LED
  digitalWrite(led[1], LOW);
  digitalWrite(led[2], LOW);
  for (int x = 1; x < 5; x = x+1) {
    digitalWrite(led[3], HIGH);
    delay(100);
    digitalWrite(led[3], LOW);
    delay(100);
  };
  digitalWrite(led[1], LOW);
  digitalWrite(led[2], HIGH);
  digitalWrite(led[3], HIGH);
  digitalWrite(led[4], LOW);
  
  delay(5000);

  digitalWrite(led[0], LOW);
  digitalWrite(led[1], HIGH);
  digitalWrite(led[2], LOW);
  digitalWrite(led[3], HIGH);
  digitalWrite(led[4], LOW);
  delay(5000);
  
}
