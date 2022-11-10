#include "Ultrasonic.h"
Ultrasonic ultrasonic(6,2);
int distance; void setup()
{
Serial.begin(9600);
}
void loop() {
distance = ultrasonic.read(CM);
Serial.print("Distance in CM: ");
Serial.println(distance); if
(distance < 100)
Serial.print("alert");
Serial.println();
delay(3000);
}
