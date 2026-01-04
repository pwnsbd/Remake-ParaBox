#include <iostream>
#include <glad/glad.h>

//#include "Game.h"
#include "Engine.h"

#include "../engine/core/GameObject/GameObject.h"

using namespace std;

int main() {
    cout << "Main cpp has been triggered;" << endl;
    Engine game;

    GameObject newGameObject;

    vector<float> vertices = {
        // Triangle 1 (center-top)
        -0.5f, -0.5f, 0.0f,
         0.5f, -0.5f, 0.0f,
         0.0f,  0.5f, 0.0f,
        //
        // // Triangle 2 (bottom-left)
        // -0.8f, -0.8f, 0.0f,
        // -0.2f, -0.8f, 0.0f,
        // -0.5f, -0.2f, 0.0f,
        //
        // // Triangle 3 (bottom-right)
        //  0.2f, -0.8f, 0.0f,
        //  0.8f, -0.8f, 0.0f,
        //  0.5f, -0.2f, 0.0f
    };

    newGameObject.setVertices(vertices);
    game.m_core.m_scene.addGameObject(newGameObject);


    std::cout << "main Key pressed" << std::endl;
    game.m_input.registerInput(); // binds the escape

    game.mainLoop();

    return 0;
}