//********************************************************************
//
// File: hud.h
// Author: Callum Stewart
// Date: 19/10/2015
//
// Purpose: Hud library interface.
//
//********************************************************************
#ifndef SCREENS_H
#define SCREENS_H

//for switch (msg) and drawHud readability
#define INVALID   -1  // -1 standard # for invalid
#define QUIT       0  //  0 standard for quit
#define HELP       1

void screen(int option);
void screen(std::string option);
int drawHUD(int argc, char *argv[]) ;
int getCmd();
#endif // !SCREENS_H