#include "login.h"


Login::Login() {
	// empty
}

void Login::start() {
	
	char szTempStr[999];
	
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
