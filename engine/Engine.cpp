//
// Created by jxmwa on 12/20/2025.
//

#include "Engine.h"

Engine::Engine() :
    m_input(&m_window),
    m_core(),
    m_window(600, 600, "modified"), m_render("assets/shaders/vShader.vert", "assets/shaders/fShader.frag") {
}

void Engine::mainLoop(){
    while (!glfwWindowShouldClose(m_window.getWindow())) {
        render();

        glfwPollEvents();
        glfwSwapBuffers(m_window.getWindow());
    }
}

void Engine::render() {

    for (auto& go : m_core.m_scene.a_gameObjects) {
        m_render.setVertices(go.getVertices());
        m_render.draw();
        m_render.use();
        glDrawArrays(GL_TRIANGLES, 0, 3);
    }
    // m_core.render(m_render);

    // m_render.draw();
    // m_render.use();
}

// void Engine::setVertices(const std::vector<float> &vertices) {
//     // m_render.setVertices(vertices);
//     m_core.m_gameObject.setNoOfVertices(vertices);
// }



