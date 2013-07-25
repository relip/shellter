#include "login.h"

Login::Login() {
	// empty
}

void Login::logo(int nLines, int nCols) {
	mvprintw((nLines - 8) / 2, (nCols - 36) / 2, "  ____  _          _ _ _            \n");
	mvprintw((nLines - 8) / 2 + 1, (nCols - 36) / 2, " / ___|| |__   ___| | | |_ ___ _ __ \n");
	mvprintw((nLines - 8) / 2 + 2, (nCols - 36) / 2, " \\___ \\| '_ \\ / _ \\ | | __/ _ \\ '__|\n");
	mvprintw((nLines - 8) / 2 + 3, (nCols - 36) / 2, "  ___) | | | |  __/ | | ||  __/ |   \n");
	mvprintw((nLines - 8) / 2 + 4, (nCols - 36) / 2, " |____/|_| |_|\\___|_|_|\\__\\___|_|   \n");
	mvprintw((nLines - 8) / 2 + 5, (nCols - 36) / 2, "                                    \n");
}

void Login::start() {
	int nCols, nLines;
	char szTempStr[999];

	getmaxyx(stdscr, nLines, nCols);
	
	/* Print logo */
	this->logo(nLines, nCols);
	
	mvprintw((nLines - 8) / 2 + 6, nCols / 2 - 5, "Login\n");
	
	mvprintw((nLines - 8) / 2 + 7, nCols / 2 - 8, "ID: ");
	refresh();
	getstr(szTempStr);

	this->id = szTempStr;
	
	mvprintw((nLines - 8) / 2 + 8, nCols / 2 - 14, "Password: ");
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
