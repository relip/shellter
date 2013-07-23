#include "login.h"

Login::Login() {
	// empty
}

void Login::start() {
	printw("Login\n");
	
	printw("ID: ");
	refresh();
	getstr(id);
	
	printw("Password: ");
	refresh();
	noecho();
	getstr(pw);
	
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