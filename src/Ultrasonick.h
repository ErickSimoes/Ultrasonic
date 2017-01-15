/*
  Ultrasonick.h - Library for HC-SR04 Ultrasonic Ranging Module in a minimalist way.
  Created by EricK Simoes (@AloErickSimoes), April 3, 2014.
  Released into the Creative Commons Attribution-ShareAlike 4.0 International.
*/

#ifndef Ultrasonick_h
#define Ultrasonick_h

#define CM 1
#define INC 0

/**
* TODO: Remove the underscore of the private variables name
* and use static keyword
*/
class Ultrasonick {
  public:
    Ultrasonick(uint8_t trigPin, uint8_t echoPin);
    int distanceRead(uint8_t und);
    int distanceRead();

  private:
    uint8_t _trigPin;
    uint8_t _echoPin;
    int timing();
};

#endif // Ultrasonic_h
