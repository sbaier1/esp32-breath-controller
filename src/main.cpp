#include <Arduino.h>

void setup() {
  Serial.begin(115200);
  analogReadResolution(ADC_BITS, ADC_MAX_VALUE);
}

void loop() {}
