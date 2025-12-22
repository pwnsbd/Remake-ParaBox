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
    Window* getWindow() const;
    void render(const std::vector<float>  &vertices) ;
    void mainLoop() const;

private:
    // Core m_core;
    Window m_window;
    Render m_render;
    // Input m_input;

};


#endif //ENGINE_H
