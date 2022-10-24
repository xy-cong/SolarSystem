
#include <GL/glut.h>
#include "GLparameters.hpp"
#include "GLsolarsystem.hpp"
#include <iostream>
using namespace std;

#define _CenterX_ 0
#define _CenterY_ 0
#define _CenterZ_ 0
#define _upX_ 0
#define _upY_ 0
#define _upZ_ 1

GLsolarsystem My_SolarSystem(_CenterX_, _CenterY_, _CenterZ_, _upX_, _upY_, _upZ_);

void My_SolarSystem_Display()
{
    My_SolarSystem.GLsolarsystem_Display();
}

void My_SolarSystem_Update()
{
    My_SolarSystem.GLsolarsystem_Update();
}

void My_SolarSystem_Update_Keyboard(unsigned char key,int x,int y)
{
    My_SolarSystem.GLsolarsystem_Keyboard(key, x, y);
}

void MY_SolarSystem_Mouse_Hit(int button, int state, int x, int y)
{
    My_SolarSystem.GLsolarsystem_Mousehit(button, state, x, y);
}

void MY_SolarSystem_Mouse_Move(int x, int y)
{
    My_SolarSystem.GLsolarsystem_Mousemove(x, y);
}

int main(int argc, char*  argv[]) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGBA | GLUT_DOUBLE);
    glutInitWindowPosition(WINDOW_POS_X, WINDOW_POS_Y);
    glutInitWindowSize(WIDTH, HEIGHT);
    glutCreateWindow("SolarSystem created by XiaoyanCong");
    glutDisplayFunc(My_SolarSystem_Display);
    glutIdleFunc(My_SolarSystem_Update);
    glutKeyboardFunc(My_SolarSystem_Update_Keyboard);
	glutMouseFunc(MY_SolarSystem_Mouse_Hit);
	glutMotionFunc(MY_SolarSystem_Mouse_Move);
    glutMainLoop();
    return 0;
}
