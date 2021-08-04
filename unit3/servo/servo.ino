#include <Servo.h>
int const PotPin=A0;
int valPot = 0;
Servo servo1;
int pwmOutput=4;
void setup() {
  servo1.attach(pwmOutput);
  servo1.write(0);
}

void loop() {
  valPot = analogRead(PotPin);
  int rangeDegrees = map(valPot, 1024, 0,180,1);
  servo1.write(rangeDegrees);
  
  //for(int deg =0; deg<180; deg++){
  //servo1.write(deg);
  //delay(500);
  // }
}
