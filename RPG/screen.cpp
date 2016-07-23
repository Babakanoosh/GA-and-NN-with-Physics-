//********************************************************************
//
// File: screen.cpp
// Author: Callum Stewart
// Date: 22/7/2016
//
// Purpose: A class that encapsulates the openGL window.
//
//********************************************************************
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
	glutCreateWindow("July 22 2016");

	start();
}

Screen::~Screen()
{
}

void Screen::glMain(){
   
   
}

int* Screen::getWorldKeys(){
	int tempArr[2];
	tempArr[0] = worldKeyMSG[0];
	tempArr[1] = worldKeyMSG[1];
   
   return tempArr;
}

int* Screen::getCameraKeys(){
	int tempArr[2];
	tempArr[0] = cameraKeyMSG[0];
	tempArr[1] = cameraKeyMSG[1];

	return tempArr;
}



GLfloat Screen::getXRot(){
   return primaryAtr.xrot;
}
GLfloat Screen::getYRot(){
   return primaryAtr.yrot;
}
GLfloat Screen::getZRot(){
   return primaryAtr.zrot;
}
GLfloat Screen::getXScl(){
   return primaryAtr.xscl;
}
GLfloat Screen::getYScl(){
   return primaryAtr.yscl;
}
GLfloat Screen::getZScl(){
   return primaryAtr.zscl;
}
GLfloat Screen::getZoom(){
   return primaryAtr.zoom;
}


int Screen::scanKeys(){
   
   glutPostRedisplay();
   return 0;
}


int Screen::setXRot(GLfloat xRot){
	return 0;
}
int Screen::setYRot(GLfloat yRot){
	return 0;
}
int Screen::setZRot(GLfloat zRot){
	return 0;
}
int Screen::setXScl(GLfloat xScl){
	return 0;
}
int Screen::setYScl(GLfloat yScl){
	return 0;
}
int Screen::setZScl(GLfloat zScl){
	return 0;
}
int Screen::setZoom(GLfloat zoom){
	return 0;
}
