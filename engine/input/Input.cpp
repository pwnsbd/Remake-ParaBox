//
// Created by jxmwa on 12/20/2025.
//

#include "Input.h"
#include <GLFW/glfw3.h>


// void Input::processInput(Window* window) {
//     if (glfwGetKey(this->window, GLFW_KEY_ESCAPE) == GLFW_PRESS) {
//         glfwSetWindowShouldClose(this->window, GLFW_TRUE);
//     }
// }

void Input::registerInput() {
    // glfwSetKeyCallback(m_window->getWindow(), m_window->terminate);
    glfwSetKeyCallback(m_window->getWindow(), keyCallback);
}


void Input::keyCallback(GLFWwindow *window, int key, int scancode, int action, int mods) {

    if (key == GLFW_KEY_ESCAPE && action == GLFW_PRESS) {
        glfwSetWindowShouldClose(window, GLFW_TRUE);
        std::cout << "Escape key pressed" << std::endl;
    }
    if (key == GLFW_KEY_W && action == GLFW_PRESS) {
        std::cout << "W key pressed in callback" << std::endl;
        keyState[87] = true;
    }
    if (key == GLFW_KEY_S && action == GLFW_PRESS) {
        std::cout << "S key pressed in callback" << std::endl;
    }
}


bool Input::keyPressed(int key) {
    int keyInt = glfwGetKey(m_window->getWindow(), key);
    std::cout << "Key pressed" << keyInt << std::endl;
    return keyInt == GLFW_PRESS;
}
