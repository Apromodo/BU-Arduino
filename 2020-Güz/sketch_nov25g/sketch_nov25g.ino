int ledler[]={3,5,6,9,10};
int girisPin=A5;
int bekleme=50;

void setup() {
  // put your setup code here, to run once:

  pinMode(girisPin,INPUT);

  
  for(int i=0;i<5;i++) {
    pinMode(ledler[i],OUTPUT);
  }

}

void loop() {
  // put your main code here, to run repeatedly:

  int okunan=analogRead(girisPin);

  if(okunan<512)
  {
    for (int i=0;i<5;i++) {
    analogWrite(ledler[i],HIGH);      //255---> (digitaldeki HIGH)
    delay(bekleme);
    analogWrite(ledler[i],LOW);        //0---> (digitaldeki LOW)
    delay(bekleme);
  }

  for (int i=3;i>0;i--) {
    analogWrite(ledler[i],HIGH);
    delay(bekleme);
    analogWrite(ledler[i],LOW);
    delay(bekleme);
  }
  
  }
  else {
    for(int i=0;i<5;i++) {
      digitalWrite(ledler[i],LOW);
      delay(bekleme);
    }
  }
}
