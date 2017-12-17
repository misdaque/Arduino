 int switchPin=8;
 int ledPin=13;
 boolean lastButton = LOW;
 boolean ledOn= LOW;
 
 
 
 void setup() {
  
  // put your setup code here, to run once:
  pinMode(switchPin, INPUT);
  pinMode(ledPin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(switchPin)== HIGH && ledOn==LOW)
  {
    ledOn = HIGH;
 
  }
  else if(digitalRead(switchPin)==HIGH && ledOn==HIGH)
  {
    ledOn = LOW;
 
    }
    digitalWrite(ledPin, ledOn);

}
