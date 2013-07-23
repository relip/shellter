#include "login.h"

Login::Login() {
	// empty
}

void Login::start() {
	char input;
	int i = 0;

	printw("Login\n");
	
	printw("ID: ");
	refresh();
	getstr(id);
	printw("%s\n", id);
	refresh();
	
	printw("Password: ");
	refresh();
	noecho();
	while((input = getch()) != '\n') {
		if(input == KEY_BACKSPACE || input == KEY_DC || input == 127) {
			i--;
			delch();
			pw[i] = NULL;
		}
		else {
			pw[i] = input;
			i++;
		}
	}
	printw("\n%s\n", pw);
	refresh();
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