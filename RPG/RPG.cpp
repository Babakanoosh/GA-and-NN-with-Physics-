#include "stdafx.h"
#include "rendering.h"
#include "file.h"
#include "screen.h"
#include "hud.h"
#include <thread>


//for switch (msg) and getCmd readability
#define INVALID   -1  // -1 standard # for invalid
#define QUIT       0  //  0 standard for quit
#define HELP       1


using namespace std;
int getCmd();
int asdf(int argc, char *argv[]);

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



	std::thread first(asdf, argc, argv);
	std::thread second(&Screen::start, Screen(argc, argv));
	

	return 0;

}





int asdf(int argc, char *argv[]) {

	//below here is not executed. i will experiment with multithreading to see if this can run adjacent to the openGL window.
	bool displayScreen = false;
	for (int i = 1; i<argc; i++) {
		if (!(strcmp(argv[i], "-s")) || !(strcmp(argv[i], "-screen"))) {
			cout << i;
			displayScreen = true;
		}
	}
	int msg = 0;

	if (argc <= 1) {//if no command-line arguments are given resort to displaying help menu
		screen(3);

	}
	else if (displayScreen) {//if "-s" "-screen" is in command arguments then display interactive screen and handle other arguments (if any)
		screen(3);

		do {
			msg = getCmd(); //gets case for switch
			screen(2);

			switch (msg)//calls the different board class functions
			{
			case INVALID:
				screen(-1);
				break;

			case QUIT:
				screen(1);
				return 0;//end program

			case HELP:
				screen(3);
				break;

			default:
				std::cout << "Command-switch case error!"; //incase something odd happens
			}
		} while (msg != 0);

	}
	else {//if command-line arguments are given process them
		for (int i = 1; i < argc; i++) {
			printf("   =%s=\n", argv[i]);
		}
	}
}


int getCmd() {
	string temp = "";
	cin >> temp;

	if (temp == "quit" || temp == "q") {
		return QUIT;
	}
	else if (temp == "help" || temp == "h") {
		return HELP;
	}
	else {
		return INVALID;
	}
	//cout << "ass";
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
