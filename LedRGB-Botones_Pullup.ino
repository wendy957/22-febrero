int LedR=13;
int LedG=12;
int LedB=11;
int bR=10;
int bG=9;
int bB=8;
bool e1;
bool e2;
bool e3;

void setup() {

pinMode(LedR,OUTPUT);
pinMode(LedG,OUTPUT);
pinMode(LedB,OUTPUT);
pinMode(bR,INPUT_PULLUP);
pinMode(bG,INPUT_PULLUP);
pinMode(bB,INPUT_PULLUP);

}

void loop() {
  
e1=digitalRead(bR);
e2=digitalRead(bG);
e3=digitalRead(bB);

if (e1 && e2 && e3)
{
  digitalWrite(LedR,LOW);
  digitalWrite(LedG,LOW);
  digitalWrite(LedB,LOW);
}

if (!e1 && e2 && e3)
{
  digitalWrite(LedR,HIGH);
  digitalWrite(LedG,LOW);
  digitalWrite(LedB,LOW);
}

if (e1 && !e2 && e3)
{
  digitalWrite(LedR,LOW);
  digitalWrite(LedG,HIGH);
  digitalWrite(LedB,LOW);
}

if (e1 && e2 && !e3)
{
  digitalWrite(LedR,LOW);
  digitalWrite(LedG,LOW);
  digitalWrite(LedB,HIGH);
}

if (!e1 && !e2 && e3)
{
  digitalWrite(LedR,HIGH);
  digitalWrite(LedG,HIGH);
  digitalWrite(LedB,LOW);
}

if (!e1 && e2 && !e3)
{
  digitalWrite(LedR,HIGH);
  digitalWrite(LedG,LOW);
  digitalWrite(LedB,HIGH);
}

if (e1 && !e2 && !e3)
{
  digitalWrite(LedR,LOW);
  digitalWrite(LedG,HIGH);
  digitalWrite(LedB,HIGH);
}

if (!e1 && !e2 && !e3)
{
  digitalWrite(LedR,HIGH);
  digitalWrite(LedG,HIGH);
  digitalWrite(LedB,HIGH);
}

}
