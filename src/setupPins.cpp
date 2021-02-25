#include "functions.h"
#define LED_BUILTIN 13

int pinLED = 26;

void setupPins() {
    pinMode(pinLED, OUTPUT);
}