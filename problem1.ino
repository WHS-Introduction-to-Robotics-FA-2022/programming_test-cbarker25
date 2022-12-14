/*

*/

void setup() {
    pinMode(3,HIGH);
    pinMode(10,HIGH);
    digitalWrite(3,HIGH);
    digitalWrite(10,HIGH);
    delay(1000);
    digitalWrite(3,LOW);
    digitalWrite(10,LOW);
   
  
}

void loop() {
   digitalWrite(3,HIGH);
   delay(200);
   digitalWrite(3,LOW);
   digitalWrite(10,HIGH);
   delay(200);
   digitalWrite(10,LOW);
   
    
}
