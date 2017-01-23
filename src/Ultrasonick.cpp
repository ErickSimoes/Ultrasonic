/*
 * Ultrasonick.h
 * 
 * Library for HC-SR04 Ultrasonic Ranging Module in a minimalist way
 *
 * created 3 Apr 2014
 * by Erick Simões (github: @ErickSimoes | twitter: @AloErickSimoes)
 * modified 23 Jan 2017
 * by Erick Simões (github: @ErickSimoes | twitter: @AloErickSimoes)
 * 
 * Released into the MIT License.
 */

#include <Arduino.h>
#include "Ultrasonick.h"

Ultrasonick::Ultrasonick(uint8_t trigPin, uint8_t echoPin) {
  trig = trigPin;
  echo = echoPin;
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
}

int Ultrasonick::timing() {
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
  return pulseIn(echo, HIGH); // duration
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
