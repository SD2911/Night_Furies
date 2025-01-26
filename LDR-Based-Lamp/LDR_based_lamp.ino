int thresholdHigh = 530;
int thresholdLow = 490;

void setup() {
  pinMode(3, OUTPUT);
}
void loop() {
	if (analogRead(A0) < thresholdLow) {
  digitalWrite(3,1); 
	} 
	else if (analogRead(A0) > thresholdHigh) {
  digitalWrite(3,0); 
	}

  else{
    digitalWrite(3,0);
  }
  delay(1000);
}
