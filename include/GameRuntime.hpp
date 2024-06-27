
#include <smash.h>

class GameRuntime : public smash::Runtime {
public:
    GameRuntime();
    void pipe() const override;
    ~GameRuntime() override;
};