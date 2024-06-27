
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
    std::shared_ptr<smash::InputAPI> inputAPI;
#ifdef ARDUINO
    inputAPI = std::make_shared<smash::ArduinoInputAPI>();
#endif
#ifdef _WIN32
    inputAPI = std::make_shared<smash::GLInputAPI>();
#endif
    if (inputAPI)
    {
        smash::InputDetection::setInputAPI(inputAPI);
    }

    // Set up rendering API
    std::shared_ptr<smash::RenderingAPI> renderingAPI;
#ifdef ARDUINO
    renderingAPI = std::make_shared<smash::RgbMatrixRenderingAPI>();
#endif
#ifdef _WIN32
    renderingAPI = std::make_shared<smash::GLRenderingAPI>();
#endif
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