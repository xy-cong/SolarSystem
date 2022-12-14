#ifndef __GLsolarsystem__
#define __GLsolarsystem__

#include "GLstars.hpp"
#include "GLcamera.hpp"
#define Stars_N 10
enum {Sun, Mercury, Venus, Earth, Moon,
    Mars, Jupiter, Saturn, Uranus, Neptune
};

class GLsolarsystem{
public:
    GLsolarsystem();
    GLsolarsystem(GLfloat centerX, GLfloat centerY, GLfloat centerZ, GLfloat upX, GLfloat upY, GLfloat upZ);
    void GLsolarsystem_Update();
    void GLsolarsystem_Display();
    void GLsolarsystem_Keyboard(unsigned char key,int x,int y);
    void GLsolarsystem_Mousehit(int button, int state, int x, int y);
    void GLsolarsystem_Mousemove(int x, int y);
    ~GLsolarsystem();


    GLstars* Stars[Stars_N];
    GLcamera Camera;

    GLfloat centerX, centerY, centerZ, upX, upY, upZ;
};

#endif