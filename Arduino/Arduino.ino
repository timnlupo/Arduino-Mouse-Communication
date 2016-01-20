/*
USB Pinout (Left to Right, USB symbol up)
4: GND
3: Clk
2: Data
1: Vcc
*/

#include "ps2.h"

PS2 leftmouse(6, 5);
PS2 rightmouse(4, 3);

void setup(){
  Serial.begin(9600);
  while(!Serial);
  Serial.println("Setup");
  leftmouse.mouse_init();
  Serial.println("Left Mouse Ready");
  rightmouse.mouse_init();
  Serial.println("Right Mouse Ready");
}

void loop(){
  char stat1,x1,y1;
  char stat2,x2,y2;
  leftmouse.mouse_pos(stat1,x1,y1);
  rightmouse.mouse_pos(stat2,x2,y2);
  
  Serial.print(-y1, DEC);
  Serial.print(",");
  Serial.println(y2, DEC);
  
  delay(10);
}
