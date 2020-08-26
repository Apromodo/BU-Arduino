
int giris=A0;
int cikis1=8;
int cikis2=9;
int cikis3=10;
int cikis4=11;

void setup() {

pinMode(giris,INPUT);
pinMode(cikis1,OUTPUT);
pinMode(cikis2,OUTPUT);
pinMode(cikis3,OUTPUT); 
pinMode(cikis4,OUTPUT);

Serial.begin(9600);
}


void loop() {
  
     int okunan=analogRead(giris);
//   double voltaj=5.0*okunan/1023.0;
     double voltaj=map(okunan,0.0,1023.0,0.0,5.0);
     Serial.println(voltaj);


     if(voltaj<1) //okunan<=256
     {
        digitalWrite(cikis1,LOW);
        digitalWrite(cikis2,LOW);
        digitalWrite(cikis3,LOW);
        digitalWrite(cikis4,LOW);
     }
     else if(voltaj<2)   //okunan<=510
     {
        digitalWrite(cikis1,HIGH);
        digitalWrite(cikis2,LOW);
        digitalWrite(cikis3,LOW);
        digitalWrite(cikis4,LOW);
     }
     else if(voltaj<3)
     {
        digitalWrite(cikis2,HIGH);
        digitalWrite(cikis3,LOW);
        digitalWrite(cikis4,LOW);
     }
     else if(voltaj<4)
     {
        digitalWrite(cikis3,HIGH);
        digitalWrite(cikis4,LOW);
        
     }
     else
        digitalWrite(cikis4,HIGH);
     






     
}
