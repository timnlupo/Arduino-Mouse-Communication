# Arduino-Mouse Communication
Optical mouse raw data in Arduino (works with most mice)
Because documentation is difficult to find, I improved the code sourced from http://www.instructables.com/id/Optical-Mouse-Odometer-for-Arduino-Robot for easy integration with most computer mice circuits.  It gives you access to optical encoder X/Y velocity and click.

#Setup
1. Find an old computer optical mouse to tear apart
2. Cut the USB connection and strip the wires
3. You can disregard all cables except the red, black, green, and white wires
4. Red cable is for Vcc, black cable is for GND, green cable is for clock, white cable is for signal
5. Plug in wires to their corresponding parts on Arduino (more information in Arduino.ino file)
6. Run the program
7. Profit

#Understanding output
-The "x" variable is the velocity in coordinate x per clock tick, negative x implies negative x coordinate
-The "y" variable is the velocity in coordinate y per clock tick, negative y implies negative y coordinate
-The "stat" is click information (00 is no click, 01 is left click, 02 is right click, and 03 is middle click)

# License
Copyright (c) 2016 Tim Lupo

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
