
#include <GameRuntime.hpp>

GameRuntime::GameRuntime() : smash::Runtime() {
    // Set up game data and scene management
    std::shared_ptr<smash::Scene> mainScene = nullptr; // replace nullptr with initial scene
    if (mainScene)
    {
        smash::SceneManagement::addScene(mainScene);
        smash::SceneManagement::setActiveScene(mainScene);
    }

    // Set up input API
    std::shared_ptr<smash::InputAPI> inputAPI = std::make_shared<smash::GLInputAPI>();; // replace nullptr with platform specific input API
    if (inputAPI)
    {
        smash::InputDetection::setInputAPI(inputAPI);
    }

    // Set up rendering API
    std::shared_ptr<smash::RenderingAPI> renderingAPI = std::make_shared<smash::GLRenderingAPI>(); // replace nullptr with platform specific rendering API
    if (renderingAPI)
    {
        smash::Rendering::setRenderingAPI(renderingAPI);
    }
}

void GameRuntime::pipe() const {
    // Provide default pipeline
    smash::Runtime::pipe();
}

GameRuntime::~GameRuntime() {
    // Cleanup if necessary
}