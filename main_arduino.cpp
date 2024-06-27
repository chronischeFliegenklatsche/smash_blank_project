#ifdef ARDUINO
#include <Arduino.h>
#include <GameRuntime.hpp>

void setup()
{
    _SMASH_GAME_LIFETIME();
}

void loop()
{
    exit(0);
}
#endif