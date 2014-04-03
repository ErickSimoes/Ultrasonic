/*
  Ultrasonick.h - Library for HR-SC04 Ultrasonic Ranging Module in a minimalist way.
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

class Ultrasonick {
  public:
    Ultrasonick(int TP, int EP);
    long Timing();
    long Ranging(int und);

  private:
    int Trig_pin;
    int Echo_pin;
};

#endif // Ultrasonic_h