//
// Created by jxmwa on 12/20/2025.
// The Interface for engine
//

#ifndef PARABOX_ENGINE_H
#define PARABOX_ENGINE_H
#include "Render.h"

class Engine {
public:
    Engine();
    ~Engine();


private:
    Core m_core;
    Render m_render;
    Input m_input;
    Scene m_scene;
};


#endif //PARABOX_ENGINE_H
