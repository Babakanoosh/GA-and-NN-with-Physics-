//********************************************************************
//
// File: hud.cpp
// Author: Callum Stewart
// Date: 19/10/2015
//
// Purpose: Generic terminal screen display functions
//
//********************************************************************
#include <iostream>
#include <stdlib.h>
#include <string>
#include "hud.h"

const std::string cmdlist = "Commands: -s (source), -d (destination), -v (verbose), -h (help), quit\n";
const std::string banner = "********************************************************************\n"
                           "                               Backup                               \n"
                           "********************************************************************\n";

void space();

void screen(int option)
{
	if (option == -1) {
			std::cout << "Please type a valid command. Type help for command list.\n";

	}
	else if (option == 1) {
		space();
	}
	else if (option == 2) {
		space();
		std::cout << banner;

	}
	else if (option == 3) {
		std::cout << cmdlist;

	}

}

void screen(std::string option)
{
	std::cout << "Please enter " << option << ":\n";
}


#ifdef _WIN32
void space()
{
	system("CLS");
}

#elif __linux__
void space()
{
	std::cout << "\033[2J\033[1;1H";
}
#else
#   error "Unknown compiler"
#endif