//
// Created by torup on 12/29/2025.
//

#ifndef PARABOX_SCENE_H
#define PARABOX_SCENE_H
#include "GameObject/GameObject.h"


class Scene {

public:
    Scene();
    // ~Scene();
    std::vector<GameObject> a_gameObjects;
    void render();
    void addGameObject(GameObject &gameObject);
private:
    bool removeGameObject(unsigned int id);
    void update();

};


#endif //PARABOX_SCENE_H