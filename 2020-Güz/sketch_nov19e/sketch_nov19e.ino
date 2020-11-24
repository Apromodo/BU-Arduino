int kirmiziLed=8;
int yesilLed=7;
int maviLed=9;
int bekleme=100;

void setup() {
  // put your setup code here, to run once:

  pinMode(kirmiziLed,OUTPUT);
  pinMode(yesilLed,OUTPUT);
  pinMode(maviLed,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(kirmiziLed,HIGH);
  delay(bekleme);
  digitalWrite(kirmiziLed,LOW);
  delay(bekleme);

  digitalWrite(yesilLed,HIGH);
  delay(bekleme);
  digitalWrite(yesilLed,LOW);
  delay(bekleme);

  digitalWrite(maviLed,HIGH);
  delay(bekleme);
  digitalWrite(maviLed,LOW);
  delay(bekleme);

}
