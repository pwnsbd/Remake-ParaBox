//
// Created by jxmwa on 12/20/2025.
//

#ifndef INPUT_H
#define INPUT_H
#include "Window.h"

class Input {
public:
    Input(Window* window) {
        m_window = window;
    }
    void registerInput();

    void processInput();
    bool keyPressed (int key);
private:
    Window* m_window;
};


#endif //INPUT_H