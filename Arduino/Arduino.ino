/*
Red Cable (Vcc) - Arduino 5V
Black Cable (Gnd) - Arduino Ground
Green Cable (Clock) - Arduino "clockPort" (in digital port 6)
White Cable (Signal) - Arduino "signalPort" (in digital port 5)
*/

#include "ps2.h"

int clockPort = 6;
int signalPort = 5;

PS2 mouse(clockPort, signalPort);

void setup(){
  Serial.begin(9600);
  while(!Serial);
  Serial.println("Setup");
  mouse.mouse_init();
  Serial.println("Mouse Ready");
}

void loop(){
  char stat,x,y;
  mouse.mouse_pos(stat,x,y);
  
  Serial.print(x, DEC); //x velocity
  Serial.print(",");
  Serial.print(y, DEC); //y velocity
  Serial.print(",");
  Serial.print(stat, DEC); //stat byte data
  
  delay(10);
}
