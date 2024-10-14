# ARDUINO-HC-SR04
THIS CODE WILL PROVIDE A DEMO USE OF THE HC-SR04 CONNECTED TO AN ARDUINO NANO (ATmega328p)

THINGS YOU NEED FOR THIS DEMO:
1.) Install Arduino IDE
2.) Install CH340 Driver (Google how to install CH340 Driver for Arduino Nano)
3.) Have USB 2.0 Type A to Mini B to upload code onto Arduino
4.) Have jumper wires (male to female)
5.) Breadboard(Preferable) or PCB(Not recommended)
6.) 9 volt battery (optional)
_____________________________________________________________________________________
PIN CONECTIONS FROM THE ARDUINO NANO to HC-SR04:
Arduino NANO             HC-SR04
      5V    --------->    VCC
      GND   --------->    GND
Digital Pin 11 ------>    TRIG
Digital Pin 12 ------>    ECHO
______________________________________________________________________________________
HOW TO POWER ARDUINO:
       METHODS
1.) POWER VIA USB CONNECTION
2.) POWER VIA 9 VOLT BATTERY (RISK METHOD), if you connect the wrong polarity on the VIN and GND pin, you risk permanently damaging the Arduino
______________________________________________________________________________________
HOW TO UPLOAD CODE:
1.) Connect USB cable to your computer's USB port
2.) Connect the mini b part of the cable to the Arduino
3.) Open up the Arduino code on the Arduino IDE
4.) Choose your Arduino board and port on the IDE
5.) Click verify then click upload
6.) click on serial monitor
7.) Observer the HC-SR04 readings
