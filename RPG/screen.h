#ifndef SCREEN_H
#define SCREEN_H
#include "stdafx.h"


class Screen {
	public:

	protected:
		GLfloat xrot, yrot, zrot; //axis rotation
		GLfloat xscl = 1, yscl = 1, zscl = 1; //axis scale
		GLfloat zoom = -5.0;
		int keyMSG = 0; //key pressed
	private:

};

#endif // !SCREEN_H

