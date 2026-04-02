// Copyright 2026 Andreas Åkerberg
// This code is licensed under MIT license (see LICENSE for details)

int main(int argc, char *argv[])
{
    using namespace ForradiaEngine;

    std::unordered_map<std::string, std::string> scenesData;

    std::string introSceneJSON = R"(
        {
            "entities":
            [
                { 
                    "name": "Background",
                    "components":
                    { 
                        "image": { "imageName": "DefaultSceneBackground"},
                        "destination":
                        {
                            "x": 0.0,
                            "y": 0.0,
                            "width": 1.0,
                            "height": 1.0
                        }
                    }
                }
            ]
        }
    )";

    scenesData.insert({"IntroScene", introSceneJSON});

    std::string startSceneName{"IntroScene"};

    Game game("Forradia Engine Simple Game", scenesData, startSceneName);
    game.Start();

    return EXIT_SUCCESS;
}
