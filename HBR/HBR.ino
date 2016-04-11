/*
This is the Arduino sketch for joystick control of the HBR joint.
Using Arduino Uno
two potentiometer inputs on Analog pins using external pull down resistors. 2.5 volts = stop (maybe needs a little tweeking?)
one "run enable" latching switch input that disables all outputs if it goes low. Pin using external pull down. And should be on interupt pin.
four PWM outputs that will drive little 222 transistors to fire the valve solenoids


That's as far as I got. :o
We'll add features as we go... like flow measurements and slow creep control.
*/

#define OUT1 2 //for solinoid drive 
#define OUT2 3 //for solinoid drive 
#define OUT3 4 //for solinoid drive 
#define OUT4 5 //for solinoid drive 

#define IN1 A0 //for solinoid drive 
#define IN2 A1  //for solinoid drive 
#define IN3 A2 //for solinoid drive 
#define IN4 A3 //for solinoid drive 

int ADC[4]; // analog value storage
int LastADC[4]; //last value storage

void setup(){
  Serial.begin(9600);
  Serial.println("HBR Start");
  pinMode(OUT1,OUTPUT);
  pinMode(OUT1,OUTPUT);
  pinMode(OUT1,OUTPUT);
  pinMode(OUT1,OUTPUT);
}

void loop(){
  ADC[0] = analogRead(IN1);
  ADC[1] = analogRead(IN2);
  ADC[2] = analogRead(IN3);
  ADC[3] = analogRead(IN4);
  
}

