const byte LED = 13;

void setup() {

     Serial.begin(9600);
     Serial.println("Hello,World!");
     
}

void loop(){
     
     int val = digitalRead(13);
     if (Serial.available()) 
     {
       val = Serial.read();
      
       switch(val)
       {
          
          case '0':
          digitalWrite(LED,LOW);
          Serial.println("LED OFF");
          delay(1000);
          break;
        
                
          case '1':
          digitalWrite(LED,HIGH);
          Serial.println("LED ON");
          delay(1000);
          break;
          
       }
     }
}
