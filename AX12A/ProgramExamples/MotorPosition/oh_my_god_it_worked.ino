#include <ax12.h>
#include <BioloidController.h>

void setup ()
{
  SetPosition(0,0);
}

void loop() 
{
SetPosition(0,0);
delay(2000);
SetPosition(0,-500);
delay(2000);
SetPosition(0,600);
delay(2000);
SetPosition(0,700);
delay(2000);
SetPosition(0,800);
delay(2000);
SetPosition(0,1023);
delay(2000);

}

