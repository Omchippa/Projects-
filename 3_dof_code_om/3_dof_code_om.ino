const int dir3=8;//base motor 
const int pulse3=3;//base motor

const int dir4=11;//upper motor
const int pulse4=10;//upper motor

const int dir5=7;//gripper motor
const int pulse5=12;//gripper motor

int g3=-3500; //base motor left
int g4=3500; //base motor right
int g5=4000; //arm up
int g6=-4000; //arm down
int g7=1500;//gripper motor up
int g8=-1500;//gripper motor down

void base34(int );//base motor
void arm56(int );// arm motor
void gripper78(int);// gripper motor 

int i;
void setup() {
  // put your setup code here, to run once:
  pinMode(dir3,OUTPUT);
pinMode(pulse3,OUTPUT);
pinMode(dir4,OUTPUT);
pinMode(pulse4,OUTPUT);
pinMode(dir5,OUTPUT);
pinMode(pulse5,OUTPUT);

digitalWrite(dir3,LOW);
digitalWrite(pulse3,LOW);
digitalWrite(dir4,LOW);
digitalWrite(pulse4,LOW);
digitalWrite(dir5,LOW);
digitalWrite(pulse5,LOW);
Serial.begin(9600);



}

void loop() {
  // put your main code here, to run repeatedly:
  gripper56(g6);
  delay(1000);
  gripper56(g5);
  delay(1000);

gripper34(g4);
delay(1000);
 gripper34(g3);
 delay(1000); 

 gripper78(g8);
delay(1000);
 gripper78(g7);
 delay(1000);
}


void base34 (int g)
{
if (g<0){
digitalWrite(dir3,LOW);
delayMicroseconds(500);
}
else
{
digitalWrite(dir3,HIGH);
delayMicroseconds(500);
}
for(i=0;i<abs(g);i++)
{
digitalWrite(pulse3,HIGH);
delayMicroseconds(450);
digitalWrite(pulse3,LOW);
delayMicroseconds(450);
}
}
//44444444444444444 +444444444444
void arm56 (int g)//-3500
{
if (g<0){
digitalWrite(dir4,LOW);
delayMicroseconds(500);
}
else
{
digitalWrite(dir4,HIGH);
delayMicroseconds(500);
}
for(i=0;i<abs(g);i++)
{
digitalWrite(pulse4,HIGH);
delayMicroseconds(450);
digitalWrite(pulse4,LOW);
delayMicroseconds(450);
}
}
//44444444444444444 +7
void gripper78 (int g)
{
if (g<0){
digitalWrite(dir5,LOW);
delayMicroseconds(500);
}
else
{
digitalWrite(dir5,HIGH);
delayMicroseconds(500);
}
for(i=0;i<abs(g);i++)
{
digitalWrite(pulse5,HIGH);
delayMicroseconds(450);
digitalWrite(pulse5,LOW);
delayMicroseconds(450);
}
}
