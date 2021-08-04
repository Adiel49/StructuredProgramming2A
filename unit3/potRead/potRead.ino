int PotentiometerPin = A0;
int led1 = 1;
int led2 = 2;
int led3 = 3;
int inputPot = 0;
#define MAXCMP 1023

void ledsRange(int inputPot){
  if(inputPot<MAXCMP/3){
    digitalWrite(led1, 1);
    digitalWrite(led2, 0);
    digitalWrite(led3, 0);
  }else if(inputPot>MAXCMP/3){
      digitalWrite(led1, 1);
      digitalWrite(led2, 1);
      digitalWrite(led3, 0);
   }else if(inputPot==MAXCMP-100){
    digitalWrite(led1, 1);
    digitalWrite(led2, 1);
    digitalWrite(led3, 1);
   }
}
void setup() {
  Serial.begin(9600);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  //digitalWrite(led1, 1);
  //digitalWrite(led2, 1);
  //digitalWrite(led3, 1);
  
  
}

void loop() {
  inputPot = analogRead(potenliometerPin);
  ledsRange(inputPot);
  Serial.println(inputPot);
  delay(500);
}
