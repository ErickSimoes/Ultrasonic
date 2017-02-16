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

#ifndef Ultrasonic_h
#define Ultrasonic_h

#define CM 1
#define INC 0

class Ultrasonic {
  public:
    Ultrasonic(uint8_t trigPin, uint8_t echoPin);
    int distanceRead(uint8_t und);
    int distanceRead();

  private:
    uint8_t trig;
    uint8_t echo;
    int timing();
};

#endif // Ultrasonic_h
