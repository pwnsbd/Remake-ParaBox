//
// Created by jxmwa on 12/20/2025.
//

#include "Engine.h"

Engine::Engine() :
    m_window(600, 600, "modified"),
    m_render("assets/shaders/vShader.vert", "assets/shaders/fShader.frag"),
    m_input(&m_window) {
}

void Engine::mainLoop() const {
    while (!glfwWindowShouldClose(m_window.getWindow())) {
        render();
        glfwPollEvents();
        glfwSwapBuffers(m_window.getWindow());
    }
}

void Engine::render() const {
    m_render.draw();
    m_render.use();

    glDrawArrays(GL_TRIANGLES, 0, 9);
}

void Engine::setVertices(const std::vector<float> &vertices) {
    m_render.setVertices(vertices);
}

