/*
 * Timeout
 * Prints the distance read by an ultrasonic sensor in
 * centimeters and change the default timeout. They are
 * supported to four pins ultrasound sensors (liek HC-SC04)
 * and three pins (like PING))) and Seeed Studio sesores).
 *
 * The circuit:
 * * Module HR-SC04 (four pins) or PING))) (and other with
 *   three pins), attached to digital pins as follows:
 * ---------------------    --------------------
 * | HC-SC04 | Arduino |    | 3 pins | Arduino |
 * ---------------------    --------------------
 * |   Vcc   |   5V    |    |   Vcc  |   5V    |
 * |   Trig  |   12    | OR |   SIG  |   13    |
 * |   Echo  |   13    |    |   Gnd  |   GND   |
 * |   Gnd   |   GND   |    --------------------
 * ---------------------
 * Note: You do not obligatorily need to use the pins defined above
 * 
 * By default, the distance returned by the read()
 * method is in centimeters, to get the distance in inches,
 * pass INC as a parameter.
 * Example: ultrasonic.read(INC)
 *
 * created 3 Apr 2014
 * by Erick Simões (github: @ErickSimoes | twitter: @AloErickSimoes)
 * modified 23 Jan 2017
 * by Erick Simões (github: @ErickSimoes | twitter: @AloErickSimoes)
 * modified 03 Mar 2017
 * by Erick Simões (github: @ErickSimoes | twitter: @AloErickSimoes)
 * modified 11 Jun 2018
 * by Erick Simões (github: @ErickSimoes | twitter: @AloErickSimoes)
 *
 * This example code is released into the MIT License.
 */

 #include <Ultrasonic.h>

/**
 * Is possible set the timeout in the constructor, like:
 * Ultrasonic ultrasonic(12, 13, 20000UL);
 */
Ultrasonic ultrasonic(12, 13);

void setup() {
  Serial.begin(9600);
  ultrasonic.setTimeout(40000UL);

}

void loop() {
  Serial.print("Distance in CM: ");
  Serial.println(ultrasonic.read());
  delay(1000);
}
