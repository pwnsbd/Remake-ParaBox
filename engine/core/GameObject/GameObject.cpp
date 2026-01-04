//
// Created by torup on 12/27/2025.
//

#include "GameObject.h"
#include "../../renderer/Render.h"

GameObject::GameObject() {
}

void GameObject::setVertices(const std::vector<float> &vertices) {
    this->vertices = vertices;
}

int GameObject::getNoOfVertices() {
    return numOfVertices;
}

std::vector<float> GameObject::getVertices() {
    return vertices;
}

