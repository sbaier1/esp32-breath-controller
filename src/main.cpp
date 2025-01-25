#include <Arduino.h>

void setup()
{
  Serial.begin(115200);
  // monitor wait
  delay(5000);
  analogSetAttenuation(ADC_11db);
}

void loop()
{
  Serial.println("Reading value");
  // Read ADC value from GPIO2
  int adcValue = analogRead(2);

  // Print the detected value
  Serial.println(adcValue);

  // Delay 100ms between readings
  delay(100);
}
