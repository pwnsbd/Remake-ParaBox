#include <iostream>
#include <glad/glad.h>

//#include "Game.h"
#include "Engine.h"



using namespace std;

int main() {
    cout << "Main cpp has been triggered;" << endl;
    Engine game;

    vector<float> vertices = {
            -0.5f, -0.5f, 0.0f,
             0.5f, -0.5f, 0.0f,
             0.0f,  0.5f, 0.0f
        };

    game.setVertices(vertices);


    std::cout << "main Key pressed" << std::endl;
    game.m_input.registerInput();

    game.mainLoop();




    return 0;
}