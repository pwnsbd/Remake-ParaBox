//
// Created by jxmwa on 12/20/2025.
//

#include "Engine.h"

Engine::Engine() : m_window(600, 600, "modified"), m_render("assets/shaders/vShader.vert", "assets/shaders/fShader.frag") {

}

void Engine::mainLoop() const {
    while (!glfwWindowShouldClose(m_window.getWindow())) {
        glfwPollEvents();
        glfwSwapBuffers(m_window.getWindow());
    }
}

void Engine::render(const std::vector<float> &vertices)  {
    unsigned int vao = m_render.draw(vertices);
    m_render.use();
    glBindVertexArray(vao);
    glDrawArrays(GL_TRIANGLES, 0, 3);
}

