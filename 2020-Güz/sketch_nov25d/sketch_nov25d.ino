int ledler[]={3,5,6,9,10};
int bekleme=50;

void setup() {
  // put your setup code here, to run once:

  for(int i=0;i<5;i++) {
    pinMode(ledler[i],OUTPUT);
  }

}

void loop() {
  // put your main code here, to run repeatedly:

  for(int parlaklik=0;parlaklik<=255;parlaklik=parlaklik+5) {
    analogWrite(ledler[0],parlaklik);
    delay(bekleme);
  }

  for(int parlaklik=255;parlaklik>0;parlaklik=parlaklik-5) {
    analogWrite(ledler[0],parlaklik);
    delay(bekleme);
  }

  

}
