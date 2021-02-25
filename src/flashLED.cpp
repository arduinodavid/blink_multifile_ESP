#include "functions.h"

//void flashLED(byte flashCount, int delayMS) {
void flashLED(int8_t flashCount, int delayMS) {
    if (!flashCount) 
        return;

    for (int8_t x = 0; x < flashCount; x++) {
        digitalWrite(pinLED, HIGH);
      //  digitalWrite(uint8_t pin, uint8_t val)
        delay(delayMS);
        digitalWrite(pinLED, LOW);
        delay(delayMS);
    }
}