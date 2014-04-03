/*
  UltrassonickSimple
  Print in the Serial Monitor the distance read for the HR-SC04 Ultrasonic Sensor in centimeters.

  The circuit:
  * Module HR-SC04 attached to digital pins as follows:
  ** Trig - pin 12
  ** Echo - pin 13

  created in April 3, 2014
  by EricK Simoes (@AloErickSimoes)

  http://ericksimoes.com.br/ultrasonick/

  This example code is in the public domain.
 */

#include <Ultrasonick.h>

Ultrasonick ultrasonick(12, 13);

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.print("Distance in CM: ");
  Serial.println(ultrasonick.distanceRead()); // By default the distance is returned in centimeters
  delay(1000);
}
