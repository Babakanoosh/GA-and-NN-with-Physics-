#include "stdafx.h"
#include "screen.h"
#include "input.h"
#include "rendering.h"

void Screen::start() {
	glShadeModel(GL_FLAT);	// Enable Smooth Shading also stops sides from being a shitty gradient
	glClearColor(1.0f, 1.0f, 0.8f, 0.0f);	//Background
	glClearDepth(1.0f);	// Depth Buffer Setup
	//glEnable(GL_DEPTH_TEST);	// Enables Depth Testing
	//glDepthFunc(GL_LEQUAL);	// The Type Of Depth Testing To Do
	//glEnable(GL_COLOR_MATERIAL);
	//glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);

	glutReshapeFunc(resize);
	glutDisplayFunc(display);
	//glutKeyboardFunc(key1);
	glutIdleFunc(idle);
	glutMainLoop();
}

Screen::Screen(int argc, char *argv[]) {
	glutInit(&argc, argv);
	glutInitWindowSize(640, 480);
	glutInitWindowPosition(100, 100);
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
	glutCreateWindow("November 14 2011 IN THE CLASS");

	start();
}

Screen::~Screen()
{
}
