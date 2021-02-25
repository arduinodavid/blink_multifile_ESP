// #include <stdint.h>

// void setup();
// void loop();
// void setupPins();
// //void flashLED(byte flashCount, int delayMS);
// void flashLED(int8_t flashCount, int delayMS)
#include "functions.h"

void setup() {
  setupPins();
  flashLED(4, 125);
}
