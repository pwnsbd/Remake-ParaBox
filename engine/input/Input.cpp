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
    glfwSetKeyCallback(m_window->getWindow(), m_window->terminate);
}