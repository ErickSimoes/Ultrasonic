/*
 * Ultrasonic Simple
 * Print the distance read for the
 * HR-SC04 Ultrasonic Sensor in centimeters.
 *
 * The circuit:
 * * Module HR-SC04 attached to digital pins as follows:
 * ---------------------
 * | HC-SC04 | Arduino |
 * ---------------------
 * |   Vcc   |   5V    |
 * |   Trig  |   12    |
 * |   Echo  |   13    |
 * |   Gnd   |   GND   |
 * ---------------------
 * Note: It is not mandatory to use pins 12 and 13 of the Arduino
 * 
 * By default, the distance returned by the distanceRead() method is
 * in centimeters, to get the distance in inches, pass INC as a parameter.
 * Example: Ultrasonic.distanceRead(INC)
 *
 * created 3 Apr 2014
 * by Erick Simões (github: @ErickSimoes | twitter: @AloErickSimoes)
 * modified 23 Jan 2017
 * by Erick Simões (github: @ErickSimoes | twitter: @AloErickSimoes)
 *
 * This example code is released into the MIT License.
 */

#include <Ultrasonic.h>

Ultrasonic Ultrasonic(12, 13);

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.print("Distance in CM: ");
  // Pass INC as a parameter to get the distance in inches
  Serial.println(Ultrasonic.distanceRead());
  delay(1000);
}
