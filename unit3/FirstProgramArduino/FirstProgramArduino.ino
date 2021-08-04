int myVar = 3;
int secondVar = 4;
int td= 1000;

int led = 4;
void setup() {
  
      Serial.begin(9600);
      pinMode,(led,OUTPUT); // Definir como salida para un led;
   
}

void loop() {
  digitalWrite(led, HIGH);
  delay(td);
  digitalWrite(led, LOW);
  delay(td);
  Serial.println("Hello World");
  Serial.println(secondVar);
  Serial.println("UPY");
}
