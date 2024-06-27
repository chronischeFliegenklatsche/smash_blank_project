
#include <GameRuntime.hpp>

void _SMASH_ENGINE_LIFETIME()
{
    // Construct game runtime
    GameRuntime gameRuntime;

    // Provide default engine loop
    _SMASH_ENGINE_LOOP(gameRuntime);
}

#ifdef _WIN32
int main()
{
    _SMASH_ENGINE_LIFETIME();
}
#endif

#ifdef ARDUINO
void setup()
{
    _SMASH_ENGINE_LIFETIME();
}

void loop()
{
    exit(0);
}
#endif