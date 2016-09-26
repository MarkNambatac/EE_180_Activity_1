/*Assignment in ee180
  Created: 23 Sep 2016 4:43;51
  Author: Makoy
 Char HAHAHAHAHA    */
 
 
int potentio = 0;
int val = 0;
int LED = 2;
 
void setup()
{
  Serial.begin (9600);
  pinMode( LED, OUTPUT);
}
 
void loop()
{
  val = analogRead(0);
  float resistance = val * (10000.0/1023.0);
  if (resistance >= 4000.0 && resistance <= 7000.0)
 {
  digitalWrite(LED,HIGH);
 }
 else
 {
   digitalWrite(LED,LOW);
 }
  Serial.println(resistance);
}
