/*
  Ultrasonick.h - Library for HC-SR04 Ultrasonic Ranging Module in a minimalist way.
  Created by EricK Simoes (@AloErickSimoes), April 3, 2014.
  Released into the Creative Commons Attribution-ShareAlike 4.0 International.
*/

#ifndef Ultrasonick_h
#define Ultrasonick_h

#if (ARDUINO >= 100)
  #include "Arduino.h"
#else
  #include "WProgram.h"
#endif

#define CM 1
#define INC 0

/**
* TODO: Consider discontinuing use of classes and using structures
* TODO: Remove the underscore of the private variables name
* and use static keyword
*/
class Ultrasonick {
  public:
    Ultrasonick(int trigPin, int echoPin);
    int distanceRead(int und);
    int distanceRead();

  private:
    int _trigPin;
    int _echoPin;
    int timing();
};

#endif // Ultrasonic_h
