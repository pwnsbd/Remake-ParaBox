//
// Created by torup on 12/20/2025.
//

#ifndef PARABOX_GAME_H
#define PARABOX_GAME_H

#include "Shader.h"
#include "CreateWindow.h"
#include "Input.h"

class Game {
public:
    Game();
    ~Game();
    void run();

private:
    void init();
    void fixedUpdate(float FIXED_DT);
    void update();
    void render();

    CreateWindow m_window;
    Shader m_shader;
    Input m_input;

    unsigned int m_vao;
    unsigned int m_vbo;

};


#endif //PARABOX_GAME_H