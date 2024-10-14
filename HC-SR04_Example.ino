// ALL PINS AND SPECIFICATIONS ARE FOR ARDUINO NANO ATmega328p (CHINESE BOOTLEG) 
// defining pins
const int trig = 11;
const int echo = 12;


  // HC-SR04 calculation variables
  long time;
  int distance;

void setup() {
  // put your setup code here, to run once:
  //Assigning HC-SR04 pins
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);

  // (REQUIRED) Start serial communication
  // With Arduino devices, they usual have a default baud rate of 9600
  Serial.begin(9600); 

}

void loop() {
  // put your main code here, to run repeatedly:
  // Clear the trigger pin
  digitalWrite(trig, LOW);
  delayMicroseconds(2);

  // set the trigger pin to HIGH state for 10µs
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);

  // make echo pin return echo distance
  time = pulseIn(echo, HIGH);

  // calculate the distance in cm
  distance = time*0.034/2; 

  // print the distance measured
  Serial.print("Distance: ");
  Serial.println(distance);

}