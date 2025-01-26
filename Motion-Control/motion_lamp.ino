int cal=0;
void setup()
{
  pinMode(2, INPUT);
  pinMode(13, OUTPUT);
  Serial.begin(57600);
  /*Serial.println("Calibrating PIR sensor...");
  for(int i=0;i<100;i++)
  {
  	cal+=digitalRead(2);
    delay(30);
  }
  Serial.println("Calibration complete. Baseline: ");
  Serial.print(cal/100);*/
}
void loop()
{
  if (digitalRead(2)==1){
    Serial.println("Motion detected! Turning on the light.");
    digitalWrite(13,1);
    delay(5000);
    digitalWrite(13,0);
  } else {
    digitalWrite(13,0);
  }
  delay(1000);
}
