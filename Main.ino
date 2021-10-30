int x =0;
int y =0;
void setup() {
pinMode(12,1);
pinMode(10,1);
pinMode(11,1);
pinMode(9,1);
pinMode(A1,0);
pinMode(A0,0);
Serial.begin(9600);
}

void loop() {
x=analogRead(A0);
y=analogRead(A1);
Serial.print(x);
Serial.print('\t');
Serial.println (y);

if((315<x<345)&&(315<y<345))
{
digitalWrite(12,0);
digitalWrite(10,0);
digitalWrite(11,0);
digitalWrite(9,0);
}

if(y>360)
{
digitalWrite(12,0);
digitalWrite(10,1);
digitalWrite(11,0);
digitalWrite(9,1);
}

if(y<305)
{
digitalWrite(12,1);
digitalWrite(10,0);
digitalWrite(11,1);
digitalWrite(9,0);
}

if(x>360)
{
digitalWrite(12,0);
digitalWrite(10,0);
digitalWrite(11,1);
digitalWrite(9,0 );
}

if(x<305)
{
digitalWrite(12,1);
digitalWrite(10,0);
digitalWrite(11,0);
digitalWrite(9,0);
} 
}
