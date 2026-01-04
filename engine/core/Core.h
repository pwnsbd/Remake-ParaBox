//
// Created by jxmwa on 12/20/2025.
//

#ifndef CORE_H
#define CORE_H
#include "Scene.h"
#include "../renderer/Render.h"

class Core {
public:
    Core();
    // ~Core();
    void run();
    Scene m_scene;
    GameObject m_gameObject;
    void render(const Render &ren);
private:
    void fixedUpdate(float FIXED_DT);
    void update();

};



#endif //CORE_H

