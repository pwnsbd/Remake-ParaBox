//
// Created by torup on 12/29/2025.
//

#include "Scene.h"
#include <iostream>

Scene::Scene() {
}

void Scene::addGameObject(GameObject &gameObject) {
    a_gameObjects.push_back(gameObject);
    std::cout << "added the gameObject" << std::endl;
    std::cout << a_gameObjects.size() << std::endl;
}