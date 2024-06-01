int level;
const int analog_0=0;
int l1=6;
int l2=5;
int l3=4;
 
void setup() {
  Serial.begin(9600);
  pinMode(l1,OUTPUT);
  pinMode(l2,OUTPUT);
  pinMode(l3,OUTPUT);
  pinMode(8,OUTPUT);
}

void loop() {
level=analogRead(analog_0);
Serial.println(level);
if(level<500)
{
  digitalWrite(l1, LOW);
  digitalWrite(l2, LOW);
  digitalWrite(l3, LOW);
}
if(level>500)
{ 
  digitalWrite(l1, HIGH);
  digitalWrite(l2, LOW);
  digitalWrite(l3, LOW);
  }
if(level>600)
 {
  digitalWrite(l1, HIGH);
  digitalWrite(l2, HIGH);
  digitalWrite(l3, LOW);
  }

if(level>690)
 {
  digitalWrite(l1, HIGH);
  digitalWrite(l2, HIGH);
  digitalWrite(l3, HIGH);
  }

if(level>715)
 {
  digitalWrite(8, HIGH);
  }
else
  { 
  digitalWrite(8, LOW);
  }
}