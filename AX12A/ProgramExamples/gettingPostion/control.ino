#include <ax12.h>
#include <BioloidController.h>

void setup()
{
  Serial.begin(9600);
}

void loop ()
{
  while (Serial.available() ==0){
  }
  int motorPosition = Serial.parseInt();
  SetPosition(10,motorPosition);
  delay(500);
  int p = GetPosition(10);
  Serial.print(p);
  Serial.print("\n");
}
