/*
  Ultrasonick.h - Library for HC-SR04 Ultrasonic Ranging Module in a minimalist way.
  Created by EricK Simoes (@AloErickSimoes), April 3, 2014.
  Released into the Creative Commons Attribution-ShareAlike 4.0 International.
*/

/**
* TODO: Consider removing compatibility for the old Arduino API
*/
#if (ARDUINO >= 100)
  #include "Arduino.h"
#else
  #include "WProgram.h"
#endif

#include "Ultrasonick.h"

Ultrasonick::Ultrasonick(uint8_t trigPin, uint8_t echoPin) {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  _trigPin = trigPin;
  _echoPin = echoPin;
}

int Ultrasonick::timing() {
  digitalWrite(_trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(_trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(_trigPin, LOW);
  return pulseIn(_echoPin, HIGH); // duration
}

/**
* TODO: Enable the change of sound velocity constants
*/
int Ultrasonick::distanceRead(uint8_t und) {
  if (und)
    return timing() / 28 / 2 ; //distance in CM
  else
    return timing() / 71 / 2; //distance in INC
}

int Ultrasonick::distanceRead() {
  /*
  If the unit of measure is not passed as a parameter,
  by default, it will return the distance in centimeters.
  To change the default, replace CM by INC.
  */
  return distanceRead(CM);
}
