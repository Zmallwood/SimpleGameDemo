// Copyright 2026 Andreas Åkerberg
// This code is licensed under MIT license (see LICENSE for details)

int main(int argc, char *argv[])
{
    using namespace ForradiaEngine;

    std::unordered_map<std::string, IScene *> scenes;

    IScene scene;
    scenes.insert({"IntroScene", &scene});

    std::string startSceneName{"IntroScene"};

    Game game("Forradia Engine Simple Game", scenes, startSceneName);
    game.Start();

    return EXIT_SUCCESS;
}
