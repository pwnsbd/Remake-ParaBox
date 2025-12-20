//
// Created by torup on 12/20/2025.
//

#ifndef PARABOX_INPUT_H
#define PARABOX_INPUT_H

#include <GLFW/glfw3.h>

class Input {
public:
    Input ();
    void update(GLFWwindow* window);
    bool pressed(int key) const;
    bool released(int key) const;
    bool held(int key) const;
private:
    static constexpr int MAX_KEYS = GLFW_KEY_LAST + 1;

    bool m_current[MAX_KEYS];
    bool m_previous[MAX_KEYS];
};


#endif //PARABOX_INPUT_H