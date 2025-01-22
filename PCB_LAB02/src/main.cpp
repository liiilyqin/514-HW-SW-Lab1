#include <Arduino.h>

// put function declarations here:
const int analogPin = A0;
const float referenceVoltage = 5.0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  int analogValue = analogRead(analogPin);
  //analogReadResolution(12);
  float voltage = (analogValue * referenceVoltage / 4096.0);

  Serial.print("Analog Value: ");
  Serial.print(analogValue);
  Serial.print(", Voltage: ");
  Serial.print(voltage, 3);
  Serial.println(" V");

  delay(1000);
}

