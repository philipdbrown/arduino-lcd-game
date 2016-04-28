#include <Arduino.h>

static byte graphics[] = {
    // Run position 1
    B00000, 
    B00000,
    B00100,
    B01010,
    B10101,
    B00100,
    B01010,
    B10001,
    // Run position 2
    B00000,
    B00000,
    B00100,
    B01010,
    B10101,
    B00100,
    B00100,
    B01010,
    // Jump
    B00000,
    B00100,
    B01010,
    B00100,
    B01010,
    B10001,
    B00000,
    B00000,
    // Jump lower
    B00000,
    B00100,
    B01010,
    B10101,
    B01010,
    B10001,
    B00000,
    B00000,
    // Ground
    B00000,
    B00000,
    B00100,
    B01010,
    B10101,
    B00100,
    B01010,
    B10001,
    // Ground right
    B00000,
    B00000,
    B00100,
    B01010,
    B10101,
    B00100,
    B01100,
    B10100,
    //Ground left
    B00000,
    B00000,
    B00100,
    B01010,
    B00100,
    B00100,
    B01100,
    B10100
  };
