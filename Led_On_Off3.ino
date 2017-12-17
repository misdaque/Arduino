
int delayON;
int delayOFF;


void setup() {
  Serial.begin(9600);
  
  
  for(int i=2; i<=5; i++){
   pinMode (i,OUTPUT); 
  }
  

  Serial.println("Put the amount of time LED should be ON in Seconds ");
  while(Serial.available()==0){}
  delayON = Serial.parseInt();
  delayON=delayON*1000;

    Serial.println("Put the amount of time LED should be OFF on Second ");
  while(Serial.available()==0){}
  delayOFF = Serial.parseInt();
  delayOFF = delayOFF*1000;
  
  // put your setup code here, to run once:

}

void loop() {
  Serial.println("This is led train ");
  for(int i=2; i<=5; i++){
    Serial.println(i);
    digitalWrite(i, HIGH);
    delay(delayON);
    digitalWrite(i,LOW);
    delay(delayOFF);
  }
  Serial.println(" ");
  // put your main code here, to run repeatedly:

}
