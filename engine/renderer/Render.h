#ifndef RENDER_H
#define RENDER_H

#include <glad/glad.h>
#include <string>
#include "vector"

class Render {
public:
    Render(const std::string& vert, const std::string& frag);
    unsigned int draw(const std::vector<float> &vertices);
    void use() const;
    void setBool(const std::string& name, bool value) const;
    void setInt(const std::string& name, int value) const;
    void setFloat(const std::string& name, float value) const;

private:
    GLuint programID;
    void checkCompileErrors(unsigned int shader, std::string type);
};

#endif // RENDER_H
