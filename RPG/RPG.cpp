#include "stdafx.h"
#include "rendering.h"
#include "file.h"
#include "screen.h"

using namespace std;

int main(int argc, char *argv[])
{
	
	cout<<"Rotate:"<<endl
		  <<"  8: Forward"<<endl
		  <<"  5: Backward"<<endl
		  <<"  4: Left"<<endl
		  <<"  6: Right"<<endl
		<<"Scale:"<<endl
		  <<"  7: -1"<<endl
		  <<"  9: +1"<<endl
		<<"Z Position:"<<endl
		  <<"  1: -1"<<endl
		  <<"  3: +1"<<endl
		<<"Other:"<<endl
		  <<"  2: Reset"<<endl;


	Screen s(argc, argv);

}












/*
GLfloat xrot, yrot, zrot;
GLfloat xscl = 1, yscl = 1, zscl = 1;
GLfloat zoomMSG = -5.0;
int keyMSG = 0;


void displayz()
{
glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
glLoadIdentity();


if (keyMSG == 1) {
glTranslatef(0.0f, 0.0f, zoomMSG);
glScalef(xscl, yscl, zscl);
glRotatef(xrot, 1.0f, 0.0f, 0.0f);
glRotatef(yrot, 0.0f, 1.0f, 0.0f);
xrot -= 1.6f;
keyMSG = 0;

}
else if (keyMSG == 2) {
glTranslatef(0.0f, 0.0f, zoomMSG);
glScalef(xscl, yscl, zscl);
glRotatef(xrot, 1.0f, 0.0f, 0.0f);
glRotatef(yrot, 0.0f, 1.0f, 0.0f);
yrot -= 1.6f;
keyMSG = 0;

}
else if (keyMSG == 3) {
glTranslatef(0.0f, 0.0f, zoomMSG);
glScalef(xscl, yscl, zscl);
glRotatef(xrot, 1.0f, 0.0f, 0.0f);
glRotatef(yrot, 0.0f, 1.0f, 0.0f);
xrot += 1.6f;
keyMSG = 0;

}
else if (keyMSG == 4) {
glTranslatef(0.0f, 0.0f, zoomMSG);
glScalef(xscl, yscl, zscl);
glRotatef(xrot, 1.0f, 0.0f, 0.0f);
glRotatef(yrot, 0.0f, 1.0f, 0.0f);
yrot += 1.6f;
keyMSG = 0;

}
else if (keyMSG == 5) {
if (xscl > 1 || yscl > 1 || zscl > 1) {
xscl /= 1.5;
yscl /= 1.5;
zscl /= 1.5;
}
else {
xscl /= 1.5;
yscl /= 1.5;
zscl /= 1.5;
}

glTranslatef(0.0f, 0.0f, zoomMSG);
glScalef(xscl, yscl, zscl);
glRotatef(xrot, 1.0f, 0.0f, 0.0f);
glRotatef(yrot, 0.0f, 1.0f, 0.0f);
keyMSG = 0;

}
else if (keyMSG == 6) {
if (xscl > 1 || yscl > 1 || zscl > 1) {
xscl *= 1.5;
yscl *= 1.5;
zscl *= 1.5;
}
else {
xscl *= 1.5;
yscl *= 1.5;
zscl *= 1.5;
}

glTranslatef(0.0f, 0.0f, zoomMSG);
glScalef(xscl, yscl, zscl);
glRotatef(xrot, 1.0f, 0.0f, 0.0f);
glRotatef(yrot, 0.0f, 1.0f, 0.0f);
keyMSG = 0;

}
else if (keyMSG == 7) {
zoomMSG += -1;

glTranslatef(0.0f, 0.0f, zoomMSG);
glScalef(xscl, yscl, zscl);
glRotatef(xrot, 1.0f, 0.0f, 0.0f);
glRotatef(yrot, 0.0f, 1.0f, 0.0f);
keyMSG = 0;
}
else if (keyMSG == 8) {
zoomMSG += 1;

glTranslatef(0.0f, 0.0f, zoomMSG);
glScalef(xscl, yscl, zscl);
glRotatef(xrot, 1.0f, 0.0f, 0.0f);
glRotatef(yrot, 0.0f, 1.0f, 0.0f);
keyMSG = 0;

}
else if (keyMSG == 9) {
xscl = 1;
yscl = 1;
zscl = 1;
xrot = 0;
yrot = 0;
zrot = 0;
zoomMSG = -5.0;

glTranslatef(0.0f, 0.0f, zoomMSG);
glScalef(xscl, yscl, zscl);
glRotatef(xrot, 1.0f, 0.0f, 0.0f);
glRotatef(yrot, 0.0f, 1.0f, 0.0f);

keyMSG = 0;

}
else {
glTranslatef(0.0f, 0.0f, zoomMSG);
glScalef(xscl, yscl, zscl);
glRotatef(xrot, 1.0f, 0.0f, 0.0f);
glRotatef(yrot, 0.0f, 1.0f, 0.0f);

}

}

void key1(unsigned char key, int x, int y)
{
switch (key)
{
case 27 :
exit(0);
break;

case 56 :
//8
keyMSG = 1;
break;
case 52 :
//4
keyMSG = 2;
break;
case 53 :
//5
keyMSG = 3;
break;

case 54:
//6
keyMSG = 4;
break;

case 55 :
//7
keyMSG = 5;
break;
case 57 :
//9
keyMSG = 6;
break;

case 49 :
//1
keyMSG = 7;
break;

case 51 :
//3
keyMSG = 8;
break;

case 50 :
//2
keyMSG = 9;
break;

default:
break;
}
glutPostRedisplay();
}

*/




//glutKeyboardUpFunc for more than one key press

/*
int  glutCreateWindow(const char * title );
int  glutCreateSubWindow(int window, int x, int y, int width, int height);
void glutDestroyWindow(int window);
void glutSetWindow(int window);
int  glutGetWindow(void);
void glutSetWindowTitle(const char* title);
void glutSetIconTitle(const char* title);
void glutReshapeWindow(int width, int height);
void glutPositionWindow(int x, int y);


POINT cursorPos;
        GetCursorPos(&cursorPos);
        float x = 0;
        x = cursorPos.x; 
        float y = 0;
        y = cursorPos.y;

        char msg[50];

        sprintf(msg, "x: %.2f\n"
            "y : %.2f\n", x, y);

        MessageBox(0, msg, "Mouse Position", 0);

Cheers!


*/
