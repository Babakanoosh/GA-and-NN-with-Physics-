//********************************************************************
//
// File: screen.h
// Author: Callum Stewart
// Date: 22/7/2016
//
// Purpose: Screen class interface.
//
//********************************************************************
#ifndef SCREEN_H
#define SCREEN_H
#include "stdafx.h"


struct sAtr { //screen attributes
   std::string name = "UnNamed";
   GLfloat xrot = 0, yrot = 0, zrot = 0; //axis rotation for world
   GLfloat xscl = 1, yscl = 1, zscl = 1; //axis scale for world
   GLfloat zoom = -5.0; //world zoom
};


class Screen {
	public:
		void start();
		Screen(int argc, char *argv[]);
		~Screen();
      
      int* getWorldKeys();
      int* getCameraKeys();
   
   protected:
   
      GLfloat getXRot();
      GLfloat getYRot();
      GLfloat getZRot();
      GLfloat getXScl();
      GLfloat getYScl();
      GLfloat getZScl();
      GLfloat getZoom();
      
      
	private:
      
		sAtr primaryAtr;
      
		//The two arrays below are 2-wide to support two keys presses as the same time for 8-directional movement logic.
		int worldKeyMSG[2] = {0,0}; //numpad keys pressed 
		int cameraKeyMSG[2] = {0,0};//WASD keys pressed  
      
		int scanKeys();
      
		int setXRot(GLfloat xRot);
		int setYRot(GLfloat yRot);
		int setZRot(GLfloat zRot);
		int setXScl(GLfloat xScl);
		int setYScl(GLfloat yScl);
		int setZScl(GLfloat zScl);
		int setZoom(GLfloat zoom);
      
		void glMain();
};

#endif // !SCREEN_H

