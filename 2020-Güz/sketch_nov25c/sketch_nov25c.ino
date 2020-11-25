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

  for (int i=0;i<5;i++) {
    analogWrite(ledler[i],128);      //255---> (digitaldeki HIGH)
    delay(bekleme);
    analogWrite(ledler[i],0);        //0---> (digitaldeki LOW)
    delay(bekleme);
  }

  for (int i=3;i>0;i--) {
    analogWrite(ledler[i],128);
    delay(bekleme);
    analogWrite(ledler[i],0);
    delay(bekleme);
  }

}
