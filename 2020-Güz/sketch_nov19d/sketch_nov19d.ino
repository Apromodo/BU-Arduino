int girisPin=8;
int ledPin=7;
int durum;

void setup() {
  // put your setup code here, to run once:

  pinMode(girisPin,INPUT);
  pinMode(ledPin,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

  durum=digitalRead(girisPin);
  Serial.println(durum);
  if(durum==HIGH)
   digitalWrite(ledPin,LOW);
   else
    digitalWrite(ledPin,HIGH);
  delay(100);

}
