int cikisPin=9;

void setup() {
  // put your setup code here, to run once:

pinMode (cikisPin,OUTPUT);  //9. pini çikis pini yap


}

void loop() {
  // put your main code here, to run repeatedly:
  //digitalWrite(pinNumarası, HIGH ya da LOW);
  //delay ms cinsinden bekleme süresi
  

digitalWrite(cikisPin,HIGH);
delay(1000);
digitalWrite(cikisPin,LOW);
delay(1000);

}
