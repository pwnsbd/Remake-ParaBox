#include <iostream>
#include <glad/glad.h>

//#include "Game.h"
#include "Engine.h"



using namespace std;

int main() {
    cout << "Main cpp has been triggered;" << endl;
    Engine game;

    vector<float> vertices = {
        // Triangle 1 (center-top)
        -0.5f, -0.5f, 0.0f,
         0.5f, -0.5f, 0.0f,
         0.0f,  0.5f, 0.0f,

        // Triangle 2 (bottom-left)
        -0.8f, -0.8f, 0.0f,
        -0.2f, -0.8f, 0.0f,
        -0.5f, -0.2f, 0.0f,

        // Triangle 3 (bottom-right)
         0.2f, -0.8f, 0.0f,
         0.8f, -0.8f, 0.0f,
         0.5f, -0.2f, 0.0f
    };



    game.setVertices(vertices);


    std::cout << "main Key pressed" << std::endl;
    game.m_input.registerInput(); // binds the escape

    game.mainLoop();

    return 0;
}