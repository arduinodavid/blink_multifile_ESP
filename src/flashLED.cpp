// #include <stdint.h>
// #include "Arduino.h"
#include "functions.h"
#define LED_BUILTIN 13

//void flashLED(byte flashCount, int delayMS) {
void flashLED(int8_t flashCount, int delayMS) {
    if (!flashCount) 
        return;

    for (int8_t x = 0; x < flashCount; x++) {
        digitalWrite(LED_BUILTIN, HIGH);
      //  digitalWrite(uint8_t pin, uint8_t val)
        delay(delayMS);
        digitalWrite(LED_BUILTIN, LOW);
        delay(delayMS);
    }
}