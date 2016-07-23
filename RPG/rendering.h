//********************************************************************
//
// File: screen.h
// Author: Callum Stewart
// Date: 22/7/2016
//
// Purpose: Rendering library interface.
//
//********************************************************************
#ifndef RENDERING_H
void idle();
void resize(int width, int height);
void display();
void applyKeyIO(int keys[2]);
#endif // !RENDERING_H