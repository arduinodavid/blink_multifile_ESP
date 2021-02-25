#include "functions.h"
#define LED_BUILTIN 13

int pinLED = 18;

void setupPins() {
    pinMode(pinLED, OUTPUT);
}