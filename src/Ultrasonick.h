/*
  Ultrasonick.h - Library for HC-SR04 Ultrasonic Ranging Module in a minimalist way.
  Created by EricK Simoes (@AloErickSimoes), April 3, 2014.
  Released into the Creative Commons Attribution-ShareAlike 4.0 International.
*/

#ifndef Ultrasonick_h
#define Ultrasonick_h

#define CM 1
#define INC 0

class Ultrasonick {
  public:
    Ultrasonick(uint8_t trigPin, uint8_t echoPin);
    int distanceRead(uint8_t und);
    int distanceRead();

  private:
    uint8_t trig;
    uint8_t echo;
    int timing();
};

#endif // Ultrasonic_h
