#include "login.h"

Login::Login() {
	// empty
}

void Login::logo(int LINES, int COLS) {
	mvprintw((LINES - 8) / 2, (COLS - 36) / 2, "  ____  _          _ _ _            \n");
	mvprintw((LINES - 8) / 2 + 1, (COLS - 36) / 2, " / ___|| |__   ___| | | |_ ___ _ __ \n");
	mvprintw((LINES - 8) / 2 + 2, (COLS - 36) / 2, " \\___ \\| '_ \\ / _ \\ | | __/ _ \\ '__|\n");
	mvprintw((LINES - 8) / 2 + 3, (COLS - 36) / 2, "  ___) | | | |  __/ | | ||  __/ |   \n");
	mvprintw((LINES - 8) / 2 + 4, (COLS - 36) / 2, " |____/|_| |_|\\___|_|_|\\__\\___|_|   \n");
	mvprintw((LINES - 8) / 2 + 5, (COLS - 36) / 2, "                                    \n");
}

void Login::start() {
	int COLS, LINES;
	char szTempStr[999];

	getmaxyx(stdscr, LINES, COLS);
	
	/* Print logo */
	logo(LINES, COLS);
	
	mvprintw((LINES - 8) / 2 + 6, COLS / 2 - 5, "Login\n");
	
	mvprintw((LINES - 8) / 2 + 7, COLS / 2 - 8, "ID: ");
	refresh();
	getstr(szTempStr);

	this->id = szTempStr;
	
	mvprintw((LINES - 8) / 2 + 8, COLS / 2 - 14, "Password: ");
	refresh();
	noecho();
	getstr(szTempStr);

	this->pw = szTempStr;

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