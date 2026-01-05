//
// Created by jxmwa on 12/20/2025.
//

#ifndef INPUT_H
#define INPUT_H
#include <bitset>
#include <vector>

#include "Window.h"

class Input {
public:
    static constexpr size_t Key_Count = 256;
    inline static std::bitset<Key_Count> keyState;

    Input(Window* window) {
        m_window = window;
    }

    void registerInput();
    void processInput();
    bool keyPressed (int key);
    static void keyCallback(GLFWwindow* window,
                            int key,
                            int scancode,
                            int action,
                            int mods);

private:
    Window* m_window;
};


#endif //INPUT_H