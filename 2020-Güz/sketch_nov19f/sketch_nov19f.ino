int led1=7;
int led2=8;
int led3=9;
int led4=10;
int led5=11;
int bekleme=50;


void setup() {
  // put your setup code here, to run once:

  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  pinMode(led5,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  for (int i=8;i<13;i++) {
    digitalWrite(i,HIGH);
    delay(bekleme);
    digitalWrite(i,LOW);
    delay(bekleme);
  }

  for (int i=13;i>8;i--) {
    digitalWrite(i,HIGH);
    delay(bekleme);
    digitalWrite(i,LOW);
    delay(bekleme);
  }

}
