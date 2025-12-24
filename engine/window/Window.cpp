//
// Created by jxmwa on 12/21/2025.
//

#define GLFW_INCLUDE_NONE


#include "Window.h"
#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <iostream>


Window::Window(int width, int height, const char* appName) {
    glfwSetErrorCallback(error_callback);

    if (!glfwInit()) {
        std::cout << "Initialization of GLFW has failed" << std::endl;
        return;
    }

    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    this->m_window = glfwCreateWindow(width, height, appName, nullptr, nullptr);
    if (!m_window) {
        glfwTerminate();
        std::cout << "Failed to initalize the window" << std::endl;
        exit(EXIT_FAILURE);
    }
    std::cout << "Window initializing" << std::endl;

    glfwMakeContextCurrent(m_window);
    if(!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)) {
        std::cout << "Failed to initialize GLAD" << std::endl;
    }

    glfwSetFramebufferSizeCallback(m_window, framebuffer_size_callback);

}

void Window::error_callback(int error, const char *description) {
    fprintf(stderr, "Error occured %s\n", description);
}

GLFWwindow* Window::getWindow() const {
    return this->m_window;
}

 void Window::terminate(GLFWwindow* window, int key, int scancode, int action, int mods) {
        if (key == GLFW_KEY_ESCAPE && action == GLFW_PRESS) {
            glfwSetWindowShouldClose(window, GLFW_TRUE);
            std::cout << "Escape key pressed" << std::endl;
        }
    }

Window::~Window() {
    glfwDestroyWindow(m_window);
    glfwTerminate();
}



void Window::framebuffer_size_callback(GLFWwindow* window, int width, int height) {
    glViewport(0, 0, width, height);
}
