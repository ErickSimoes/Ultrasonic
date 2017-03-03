/*
 * Miltiple Ultrasonic Sensors
 * Prints the distance read by many ultrasonic sensors in
 * centimeters and inches. They are supported to four pins
 * ultrasound sensors (liek HC-SC04) and three pins
 * (like PING))) and Seeed Studio sesores).
 *
 * The circuit:
 * * In this circuit there is an ultrasonic module HC-SC04,
 *   PING))) and a Seeed Studio (4 pins, 3 pins, 3 pins,
 *   respectively), attached to digital pins as follows:
 * ---------------------     ---------------------     ---------------------
 * | HC-SC04 | Arduino |     | PING))) | Arduino |     |  Seeed  | Arduino |
 * ---------------------     ---------------------     ---------------------
 * |   Vcc   |   5V    |     |   Vcc   |   5V    |     |   Vcc   |   5V    |
 * |   Trig  |   12    | AND |   SIG   |   10    | AND |   SIG   |    8    |
 * |   Echo  |   13    |     |   Gnd   |   GND   |     |   Gnd   |   GND   |
 * |   Gnd   |   GND   |     ---------------------     ---------------------
 * ---------------------
 * Note: You need not obligatorily use the pins defined above
 * 
 * By default, the distance returned by the distanceRead()
 * method is in centimeters, to get the distance in inches,
 * pass INC as a parameter.
 * Example: ultrasonic.distanceRead(INC)
 *
 * created 3 Mar 2017
 * by Erick Simões (github: @ErickSimoes | twitter: @AloErickSimoes)
 *
 * This example code is released into the MIT License.
 */

#include <Ultrasonic.h>

Ultrasonic ultrasonic1(12, 13);	// An ultrasonic sensor HC-04
Ultrasonic ultrasonic2(10);		// An ultrasonic sensor PING)))
Ultrasonic ultrasonic3(8);		// An Seeed Studio ultrasonic sensor


void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.print("Sensor 01: ");
  Serial.print(ultrasonic1.distanceRead()); // Prints the distance on the default unit (centimeters)
  Serial.println("cm");

  Serial.print("Sensor 02: ");
  Serial.print(ultrasonic2.distanceRead(CM)); // Prints the distance making the unit explicit
  Serial.println("cm");

  Serial.print("Sensor 03: ");
  Serial.print(ultrasonic3.distanceRead(INC)); // Prints the distance in inches
  Serial.println("inc");

  delay(1000);
}
