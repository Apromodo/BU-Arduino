int trigPin=7;
int echoPin=8;

int kirmiziPin=10;
int yesilPin=11;
int sariPin=12;

double sure;
double hiz=0.0344;
double uzaklik;

void setup() {
  // put your setup code here, to run once:

  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
  Serial.begin(9600);
  

}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(trigPin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(2);
  digitalWrite(trigPin,LOW);

  sure=pulseIn(echoPin,HIGH);
  uzaklik=(0.0344*sure)/2;

  if (uzaklik > 20) {
    digitalWrite(yesilPin,HIGH);
    digitalWrite(kirmiziPin,LOW);
    digitalWrite(sariPin,LOW);
  }
    else if(uzaklik  >= 10 || uzaklik <= 20  ) {
      digitalWrite(yesilPin,LOW);
      digitalWrite(sariPin,HIGH);
      digitalWrite(kirmiziPin,LOW);
    }
    
    else if(uzaklik < 10 ) {
    digitalWrite(sariPin,LOW);
    digitalWrite(yesilPin,LOW);
    digitalWrite(kirmiziPin,HIGH);
  } 

  Serial.println(uzaklik);
  Serial.println("cm ");
  delay(50);
}
