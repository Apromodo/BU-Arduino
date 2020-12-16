int a=4,b=5,c=6,d=7,e=8,f=9,g=10;
int bekleme=1000;


void setup() {
  // put your setup code here, to run once:
  pinMode(a,OUTPUT);
  pinMode(b,OUTPUT);
  pinMode(c,OUTPUT);
  pinMode(d,OUTPUT);
  pinMode(e,OUTPUT);
  pinMode(f,OUTPUT);
  pinMode(g,OUTPUT);
  

}

void loop() {
  // put your main code here, to run repeatedly

  bir();
  iki();
  uc();
  
}

void bir() {
  digitalWrite(a,LOW);
  digitalWrite(e,LOW);
  delay(bekleme);
  temizle();
}

void iki(){
  digitalWrite(a,LOW);
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(f,LOW);
  digitalWrite(g,LOW);
  delay(bekleme);
  temizle();
}

void uc(){
  digitalWrite(a,LOW);
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,LOW);
  delay(bekleme);
  temizle();
}

void temizle(){
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);
}
