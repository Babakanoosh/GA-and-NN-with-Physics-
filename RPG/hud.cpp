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





int drawHUD(int argc, char *argv[]) {

	bool displayScreen = false;
	for (int i = 1; i<argc; i++) {
		if (!(strcmp(argv[i], "-s")) || !(strcmp(argv[i], "-screen"))) {
			std::cout << i;
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
				std::cout << "Command-switch case error!"; //in case something odd happens
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
	std::string temp = "";
	std::cin >> temp;

	if (temp == "quit" || temp == "q") {
		return QUIT;
	}
	else if (temp == "help" || temp == "h") {
		return HELP;
	}
	else {
		return INVALID;
	}
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

