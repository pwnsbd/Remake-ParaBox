//
// Created by torup on 12/18/2025.
//

#ifndef PARABOX_SHADER_H
#define PARABOX_SHADER_H

#include <glad/glad.h>
#include <fstream>
#include <string>
#include <sstream>
#include <iostream>


using namespace std;

class Render {
    public:
    /*
     * vShaderFile & fShaderFile : Shader file
     * vShaderStream & fShaderStream : stores conversion from file stream to string stream
     * vertStr & fragStr : stores conversion from string stream to string
     * vShaderCode * fShaderCode : stores conversion from string to character string.
     * programID : It's the gl program id to link vertex shader and fragment shader
     *
     */
    Render(const string &vert, const string &frag) {
        ifstream vShaderFile, fShaderFile;
        stringstream vStringStream, fStringStream;
        string vertStr, fragStr;
        const char* vShaderCode, * fShaderCode;

        vShaderFile.exceptions(ifstream::failbit | ifstream::badbit);
        fShaderFile.exceptions(ifstream::failbit | ifstream::badbit);

        try {
            // read the file: vertex shader and fragment shader
            vShaderFile.open(vert);
            fShaderFile.open(frag);

            // Now, string stream the files
            vStringStream << vShaderFile.rdbuf();
            fStringStream << fShaderFile.rdbuf();

            //Also close the files
            vShaderFile.close();
            fShaderFile.close();

            // Now, create a string out of string stream
            vertStr = vStringStream.str();
            fragStr = fStringStream.str();

            vShaderCode = vertStr.c_str();
            fShaderCode = fragStr.c_str();
        }catch (ifstream::failure& e) {
            cout << "Couldn't read shader file" << endl;
        }


        // Now we need to create a shader using the string that we compiled above
        unsigned int vertex, fragment;
        vertex = glCreateShader(GL_VERTEX_SHADER);
        fragment = glCreateShader(GL_FRAGMENT_SHADER);

        // Now, we need to connect the vertex and fragment id that we created above to our shader code
        // shader <---> code
        // once they are linked, time to compile the shaders and check for compilation error

        // For vertex
        glShaderSource(vertex, 1, &vShaderCode, NULL);
        glCompileShader(vertex);
        checkCompileErrors(vertex, "VERTEX");

        // For Fragment
        glShaderSource(fragment, 1, &fShaderCode, NULL);
        glCompileShader(fragment);
        checkCompileErrors(fragment, "FRAGMENT");

        // Once the shader are compiled and read to go
        // We need to create a gl program that runs them
        programID = glCreateProgram();
        glAttachShader(programID, vertex);
        glAttachShader(programID, fragment);
        glLinkProgram(programID);
        checkCompileErrors(programID, "PROGRAM");

        // we need to delete the shader after they have been linked
        glDeleteShader(vertex);
        glDeleteShader(fragment);

    }
void use() const {
        glUseProgram(programID);
    }
    void setBool(const string &name, bool value) const {
        glUniform1i(glGetUniformLocation(programID, name.c_str()), (int)value);
    }
    void setInt(const string &name, int value) const {
        glUniform1i(glGetUniformLocation(programID, name.c_str()), value);
    }
    void setFloat(const string &name, float value) const {
        glUniform1f(glGetUniformLocation(programID, name.c_str()), value);
    }
    // void setMat4(const string &name, ) {
    //
    // }
private:

    GLuint programID;

    // utility function for checking shader compilation/linking errors.
    // (learned and copied from learnopengl.com)
    void checkCompileErrors(unsigned int shader, std::string type)
    {
        int success;
        char infoLog[1024];
        if (type != "PROGRAM")
        {
            glGetShaderiv(shader, GL_COMPILE_STATUS, &success);
            if (!success)
            {
                glGetShaderInfoLog(shader, 1024, NULL, infoLog);
                std::cout << "ERROR::SHADER_COMPILATION_ERROR of type: " << type << "\n" << infoLog << "\n -- --------------------------------------------------- -- " << std::endl;
            }
        }
        else
        {
            glGetProgramiv(shader, GL_LINK_STATUS, &success);
            if (!success)
            {
                glGetProgramInfoLog(shader, 1024, NULL, infoLog);
                std::cout << "ERROR::PROGRAM_LINKING_ERROR of type: " << type << "\n" << infoLog << "\n -- --------------------------------------------------- -- " << std::endl;
            }
        }
    }


};

#endif //PARABOX_SHADER_H