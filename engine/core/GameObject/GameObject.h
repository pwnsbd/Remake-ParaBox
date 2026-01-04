//
// Created by torup on 12/27/2025.
//

#ifndef PARABOX_GAMEOBJECT_H
#define PARABOX_GAMEOBJECT_H
#include <string>
#include <vector>


class GameObject {
public:
    GameObject();
    int getNoOfVertices();
    void setVertices(const std::vector<float> &vertices);
    std::vector<float> getVertices();
    void render();

protected:
    unsigned int m_id;
    std::string m_name;

    int numOfVertices;
    std::vector<float> vertices;

};


#endif //PARABOX_GAMEOBJECT_H