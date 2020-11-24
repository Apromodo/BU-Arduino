int girisPin=4;
int cikisPin=8;
int durum;

void setup() {
  // put your setup code here, to run once:

  pinMode(girisPin,INPUT);
  pinMode(cikisPin,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

  durum=digitalRead(girisPin);

  if(durum==HIGH)
  digitalWrite(cikisPin,HIGH);
  else
  digitalWrite(cikisPin,LOW);


  
  Serial.println(durum);
  delay(100);

}
