int girisPin=A0;
int ledPin=6;
void setup() {
  // put your setup code here, to run once:

  pinMode (girisPin,INPUT);

  pinMode(girisPin,OUTPUT);
  
  Serial.begin(9600); //seri haberleşme başlat

}

void loop() {
  // put your main code here, to run repeatedly:
  
  int okunan = analogRead(girisPin);
  double gerilim=okunan*(5/1023.0);

  int yenimap=map(okunan,0,1023,0,255);
  analogWrite(ledPin,yenimap);

}
