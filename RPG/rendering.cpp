//********************************************************************
//
// File: rendering.cpp
// Author: Callum Stewart
// Date: 22/7/2016
//
// Purpose: A library of rendering functions to be used by the screen class.
//
//********************************************************************
#include "rendering.h"
#include "stdafx.h"

void idle(){
   glutPostRedisplay();
}

void resize(int width, int height){
	glViewport(0, 0, width, height);

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(60.0f, (GLfloat)width / (GLfloat)height, 1.0f, 5000.0f);

	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

	glEnable(GL_DEPTH_TEST);
	glDepthFunc(GL_LEQUAL);

	glEnable(GL_CULL_FACE);
}

void applyKeyIO(int keys[2]){
   
}

void display(){
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glLoadIdentity();

		glTranslatef(0.0f, 0.0f, -5.0f);
		glScalef(1.0f, 1.0f, 1.0f);
		glRotatef(0.0f, 1.0f, 0.0f, 0.0f);
		glRotatef(0.0f, 0.0f, 1.0f, 0.0f);



	//pyramid sides without face
	glBegin(GL_TRIANGLE_FAN);

	glVertex3f(0.0, 1.0, -1.0);//dunno

							   //front face
	glVertex3f(-1.0, 0.0, 0.0);
	glColor3f(0.0f, 1.0f, 0.0f);

	glVertex3f(1.0f, 0.0f, 0.0f);//dunno

								 //right face
	glColor3f(1.0f, 0.5f, 0.0f);
	glVertex3f(1.0f, 0.0f, -2.0f);

	//back face
	glColor3f(0.7f, 0.1f, 0.4f);
	glVertex3f(-1.0f, 0.0f, -2.0f);

	//left face
	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex3f(-1.0, 0.0, 0.0);

	glEnd();

	//base
	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 1.0f);
	glVertex3f(1.0f, 0.0f, -2.0f);
	glVertex3f(1.0f, 0.0f, 0.0f);
	glVertex3f(-1.0f, 0.0f, 0.0f);
	glVertex3f(-1.0f, 0.0f, -2.0f);

	glEnd();

	glBegin(GL_LINES);

	glColor3f(1.0f, 0.0f, 0.0f);

	glVertex3f(-1.5f, 3.0f, -1.0f);
	glVertex3f(-1.5f, 1.0f, -1.0f);

	glVertex3f(-1.5f, 2.0f, -1.0f);
	glVertex3f(-0.5f, 2.0f, -1.0f);

	glVertex3f(-0.5f, 3.0f, -1.0f);
	glVertex3f(-0.5f, 1.0f, -1.0f);

	glVertex3f(0.0f, 2.75f, -1.0f);
	glVertex3f(0.0f, 1.0f, -1.0f);

	glVertex3f(0.0f, 2.85f, -1.0f);
	glVertex3f(0.0f, 3.0f, -1.0f);

	glEnd();

	glutSwapBuffers();
}
