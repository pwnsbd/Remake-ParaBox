//
// Created by torup on 12/17/2025.
//

#ifndef CREATEWINDOW_H
#define CREATEWINDOW_H

#include <iostream>
#include <glad/glad.h>
#include <GLFW/glfw3.h>

using namespace std;

class CreateWindow {

public:
     CreateWindow(int width, int height, const char* appName);
     ~CreateWindow();
     void processInput();
     GLFWwindow* getWindow() const;
     static void error_callback(int error, const char* description);
     static void framebuffer_size_callback(GLFWwindow* window, int width, int height);

private:
     GLFWwindow* window;

};


#endif //CREATEWINDOW_H