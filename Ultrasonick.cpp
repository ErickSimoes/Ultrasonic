/*
  Ultrasonick.h - Library for HR-SC04 Ultrasonic Ranging Module in a minimalist way.
  Created by EricK Simoes (@AloErickSimoes), April 3, 2014.
  Released into the Creative Commons Attribution-ShareAlike 4.0 International.
*/

#if (ARDUINO >= 100)
  #include "Arduino.h"
#else
  #include "WProgram.h"
#endif

#include "Ultrasonick.h"

Ultrasonick::Ultrasonick(int trigPin, int echoPin) {
   pinMode(trigPin, OUTPUT);
   pinMode(echoPin, INPUT);
   _trigPin=trigPin;
   _echoPin=echoPin;
}

int Ultrasonick::timing() {
  digitalWrite(_trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(_trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(_trigPin, LOW);
  return pulseIn(_echoPin, HIGH); // duration
}

int Ultrasonick::distanceRead(int und) {
  if (und)
    return timing() / 29 / 2 ; //distance in CM
  else
    return timing() / 74 / 2; //distance in INC
}

int Ultrasonick::distanceRead() {
  /*
  If the unit of measure is not passed as a parameter,
  by default, it will return the distance in centimeters
  */
  distanceRead(CM);
}