void setup() {
  // put your setup code here, to run once:
 pinMode(3,INPUT);
 pinMode(4,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(4,digitalRead(3));
delay(20);
}
