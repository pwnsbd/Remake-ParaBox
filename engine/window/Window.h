//
// Created by jxmwa on 12/21/2025.
//

#ifndef WINDOW_H
#define WINDOW_H

#include <iostream>
#include <glad/glad.h>
#include <GLFW/glfw3.h>

class Window {
public:
    Window(int width, int height, const char* appName);
    ~Window();
    [[nodiscard]] GLFWwindow* getWindow() const;
    static void error_callback(int error, const char* description);
    static void framebuffer_size_callback(GLFWwindow* window, int width, int height);

private:
    GLFWwindow* window;
};


#endif //WINDOW_H