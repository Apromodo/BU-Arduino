int girisPin=A0;
int eskiDegeri=240;

int ledPin=6;

void setup() {
  // put your setup code here, to run once:

  pinMode(girisPin,INPUT);
  Serial.begin(9600);
  pinMode(ledPin,OUTPUT);


}

void loop() {
  // put your main code here, to run repeatedly:

  int okunan=analogRead(girisPin);
  Serial.println(okunan);
  delay(10);
  if(okunan>eskiDegeri)
   digitalWrite(ledPin,HIGH);
  else
   digitalWrite(ledPin,LOW);

  
}
