int girisPin=A0;
int cikislar[]={2,5,7,8};

void setup() {
  // put your setup code here, to run once:

  pinMode (girisPin,INPUT);

  for(int i=0;i<4;i++)
   pinMode(cikislar[i],OUTPUT);
  
  Serial.begin(9600); //seri haberleşme başlat
  

}

void loop() {
  // put your main code here, to run repeatedly:

  int okunan = analogRead(girisPin); //okunan değer 0,1023 tam sayı
  double gerilim=okunan*(5/1023.0);

  int yeni=map(okunan,0,1023,0,4);                    //okunan değerleri 0,1,2,3,4 değerlerinden birine dönüştür
  
  Serial.println(yeni);
  delay(10);

  if(yeni==0) {
    digitalWrite(cikislar[0],LOW);
    digitalWrite(cikislar[1],LOW);
    digitalWrite(cikislar[2],LOW);
    digitalWrite(cikislar[3],LOW);
  }
  else if(yeni==1){
    digitalWrite(cikislar[0],HIGH);
    digitalWrite(cikislar[1],LOW);
    digitalWrite(cikislar[2],LOW);
    digitalWrite(cikislar[3],LOW);
  }
  else if(yeni==2){
    digitalWrite(cikislar[0],LOW);
    digitalWrite(cikislar[1],HIGH);
    digitalWrite(cikislar[2],LOW);
    digitalWrite(cikislar[3],LOW);
  }
  else if(yeni==3){
    digitalWrite(cikislar[0],LOW);
    digitalWrite(cikislar[1],LOW);
    digitalWrite(cikislar[2],HIGH);
    digitalWrite(cikislar[3],LOW);
  }
  else{
    digitalWrite(cikislar[0],LOW);
    digitalWrite(cikislar[1],LOW);
    digitalWrite(cikislar[2],LOW);
    digitalWrite(cikislar[3],HIGH);
  }
 
  

}
