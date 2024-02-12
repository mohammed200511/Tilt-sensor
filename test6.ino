void setup()
{pinMode(3,INPUT);
 pinMode(4,OUTPUT);}
void loop()
{digitalWrite(4,digitalRead(3));}