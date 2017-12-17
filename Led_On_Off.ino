/* This is my first program in Arduino 
for turning led ON or OFF
*/


int ledPin = 13;

void setup()
{
  pinMode(ledPin, OUTPUT);

 
}

void loop()
{


  digitalWrite(ledPin, HIGH);
  delay(500);
  digitalWrite(ledPin, LOW);
  delay(500);
}
