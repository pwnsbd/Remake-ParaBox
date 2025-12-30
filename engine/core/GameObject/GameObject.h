//
// Created by torup on 12/27/2025.
//

#ifndef PARABOX_GAMEOBJECT_H
#define PARABOX_GAMEOBJECT_H
#include <vector>


class GameObject {
public:
    GameObject();
    int getNoOfVertices();
    void setNoOfVertices(const std::vector<float> &vertices);
    std::vector<float> getVertices();
protected:
    int numOfVertices;
    std::vector<float> vertices;
};


#endif //PARABOX_GAMEOBJECT_H