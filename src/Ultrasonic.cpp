/*
 * Ultrasonic.h
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
#include "Ultrasonic.h"

#define CM_DIVISOR  28
#define INC_DIVISOR 71

Ultrasonic::Ultrasonic(uint8_t trigPin, uint8_t echoPin) {
  trig = trigPin;
  echo = echoPin;
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
}

int Ultrasonic::timing() {
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
  return pulseIn(echo, HIGH); // duration
}

int Ultrasonic::distanceRead(uint8_t und) {
  if (und)
    return timing() / CM_DIVISOR / 2;  //distance in CM
  else
    return timing() / INC_DIVISOR / 2; //distance in INC
}

int Ultrasonic::distanceRead() {
  /*
   * If the unit of measure is not passed as a parameter,
   * by default, it will return the distance in centimeters.
   * To change the default, replace CM by INC.
   */
  return distanceRead(CM);
}
