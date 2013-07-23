#include "login.h"

Login::Login() {
	// empty
}

void Login::logo() {
	printw("  ____  _          _ _ _            \n");
	printw(" / ___|| |__   ___| | | |_ ___ _ __ \n");
	printw(" \\___ \\| '_ \\ / _ \\ | | __/ _ \\ '__|\n");
	printw("  ___) | | | |  __/ | | ||  __/ |   \n");
	printw(" |____/|_| |_|\\___|_|_|\\__\\___|_|   \n");
	printw("                                    \n");
}

void Login::start() {
	char szTempStr[999];

	/* Print logo */
	logo();
	
	printw("Login\n");
	
	printw("ID: ");
	refresh();
	getstr(szTempStr);

	this->id = szTempStr;
	
	printw("Password: ");
	refresh();
	noecho();
	getstr(szTempStr);

	this->pw = szTempStr;

	printw ("id : %s\n", this->id.c_str());
	printw ("pw : %s\n", this->pw.c_str());
	
	getch();
}

void Login::process() {
	// empty
}

void Login::join() {
	// empty
}

Login::~Login() {
	// empty
}