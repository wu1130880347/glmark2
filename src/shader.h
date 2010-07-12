#ifndef _SHADER_H
#define _SHADER_H

#include "oglsdl.h"

#include <fcntl.h>
#include <unistd.h>

class Shader
{
public:
    ~Shader();
    void load(const char *pVertexShaderFileName, const char *pFragmentShaderFileName);
    void unload();

    void use();
    void remove();
    
    GLuint mVertexShader;
    GLuint mFragmentShader;
    int mShaderProgram;
    struct {
        GLint ModelViewProjectionMatrix;
        GLint NormalMatrix;
        GLint LightSourcePosition;
        GLint LightSourceHalfVector;
        GLint LightSourceAmbient;
        GLint LightSourceDiffuse;
        GLint LightSourceSpecular;
        GLint MaterialAmbient;
        GLint MaterialDiffuse;
        GLint MaterialSpecular;
        GLint MaterialColor;
        GLint MaterialTexture0;
    } mLocations;

    enum {
        VertexAttribLocation = 0,
        NormalAttribLocation = 1,
        TexCoordAttribLocation = 2
    };
};

#endif