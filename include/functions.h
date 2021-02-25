#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <stdint.h>
#include "Arduino.h"

void setup();
void loop();
void setupPins();
void flashLED(int8_t flashCount, int delayMS);

#endif  // FUNCTIONS_H