//
// Created by torup on 12/20/2025.
//

#include "Input.h"

#include <cstring>

using namespace std;

Input::Input() {
    memset(m_current, false, sizeof(m_current));
memset(m_previous, false, sizeof(m_current));
}

void Input::update(GLFWwindow *window) {
    for (int i =0; i < MAX_KEYS; i++) {
        m_previous[i] = m_current[i];
        m_current[i] = glfwGetKey(window, i) == GLFW_PRESS;
    }
}

bool Input::pressed(int key) const {
    return m_current[key] && !m_previous[key];
}

bool Input::held(int key) const {
    return m_current[key];
}

bool Input::released(int key) const {
    return !m_current[key] && m_previous[key];
}
