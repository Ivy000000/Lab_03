float Analogin = 0;
void setup() {
   Serial.begin(9600);
   pinMode(A0,INPUT);
}

void loop() {
    int i;
    float Vin;
    for (i=0;i<=5;i++)
      Analogin = 0.7* Analogin + 0.3* analogRead(A0);
    
    Vin = Analogin * 5 / 1024 ;
    Serial.println(Vin);
    delay(1000);
    //Use Serial.print to Diaplay Vin;
    //Sleep 0.5 sec
 }
