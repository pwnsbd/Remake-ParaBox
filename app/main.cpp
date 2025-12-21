#include <iostream>
#include <glad/glad.h>

#include "Game.h"
#include "../engine/Core/CreateWindow.h"
#include "../engine/renderer/Render.h"


using namespace std;

int main() {
    cout << "Main cpp has been triggered;" << endl;
    Engine game;
    game.run();
    return 0;
}