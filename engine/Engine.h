//
// Created by jxmwa on 12/20/2025.
// The Interface for engine
//

#ifndef ENGINE_H
#define ENGINE_H

#include <vector>
#include "Window.h"
#include "Render.h"
#include "Core.h"
#include "Input.h"

class Engine {
public:
    Engine();
    // ~Engine();
    Input m_input;

    void render();
    void mainLoop();
    void setVertices(const std::vector<float>  &vertices);
    Core m_core;

private:

    Window m_window;
    Render m_render;


};


#endif //ENGINE_H
