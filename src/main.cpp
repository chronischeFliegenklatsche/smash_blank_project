
#include <GameRuntime.hpp>

int main()
{
    // Construct game runtime
    GameRuntime gameRuntime;

    // Provide default engine loop
    _SMASH_ENGINE_LOOP(gameRuntime);
}