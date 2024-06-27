#ifndef _GAME_RUNTIME_HPP
#define _GAME_RUNTIME_HPP
#include <smash.h>

class GameRuntime : public smash::Runtime {
public:
    GameRuntime();
    void pipe() const override;
    ~GameRuntime() override;
};

void _SMASH_GAME_LIFETIME()
{
    // Construct game runtime
    GameRuntime gameRuntime;

    // Provide default engine loop
    _SMASH_ENGINE_LOOP(gameRuntime);
}
#endif