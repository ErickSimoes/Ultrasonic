/*
 * Ultrasonic.cpp
 *
 * Library for Ultrasonic Ranging Module in a minimalist way
 *
 * created 3 Apr 2014
 * by Erick Simões (github: @ErickSimoes | twitter: @AloErickSimoes)
 * modified 23 Jan 2017
 * by Erick Simões (github: @ErickSimoes | twitter: @AloErickSimoes)
 * modified 04 Mar 2017
 * by Erick Simões (github: @ErickSimoes | twitter: @AloErickSimoes)
 *
 * Released into the MIT License.
 */

#include <Arduino.h>
#include "Ultrasonic.h"

Ultrasonic::Ultrasonic(uint8_t sigPin) {
  trig = sigPin;
  echo = sigPin;
  threePins = true;
}

Ultrasonic::Ultrasonic(uint8_t trigPin, uint8_t echoPin) {
  trig = trigPin;
  echo = echoPin;
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
}

unsigned int Ultrasonic::timing() {
  if (threePins)
    pinMode(trig, OUTPUT);

  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);

  if (threePins)
    pinMode(trig, INPUT);

  return pulseIn(echo, HIGH); // duration
}

unsigned int Ultrasonic::distanceRead() {
  /*
   * If the unit of measure is not passed as a parameter,
   * by default, it will return the distance in centimeters.
   * To change the default, replace CM by INC.
   */
  return distanceRead(CM);
}

unsigned int Ultrasonic::distanceRead(uint8_t und) {
  return timing() / und / 2;  //distance by divisor
}
