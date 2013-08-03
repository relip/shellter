#include "loginWindow.h"

LoginWindow::LoginWindow() {
	// empty
}

void LoginWindow::logo(int height, int width) {
	mvprintw((height - 8) / 2, (width - 36) / 2, "  ____  _          _ _ _            \n");
	mvprintw((height - 8) / 2 + 1, (width - 36) / 2, " / ___|| |__   ___| | | |_ ___ _ __ \n");
	mvprintw((height - 8) / 2 + 2, (width - 36) / 2, " \\___ \\| '_ \\ / _ \\ | | __/ _ \\ '__|\n");
	mvprintw((height - 8) / 2 + 3, (width - 36) / 2, "  ___) | | | |  __/ | | ||  __/ |   \n");
	mvprintw((height - 8) / 2 + 4, (width - 36) / 2, " |____/|_| |_|\\___|_|_|\\__\\___|_|   \n");
	mvprintw((height - 8) / 2 + 5, (width - 36) / 2, "                                    \n");
}

bool LoginWindow::start() {
	int height, width;
	char szTempStr[999];

	getmaxyx(stdscr, height, width);
	
	/* Print logo */
	logo(height, width);
	
	mvprintw((height - 8) / 2 + 6, width / 2 - 3, "로그인\n");
	
	mvprintw((height - 8) / 2 + 7, width / 2 - 7, "ID: ");
	refresh();
	getstr(szTempStr);

	this->id = szTempStr;
	
	mvprintw((height - 8) / 2 + 8, width / 2 - 13, "Password: ");
	refresh();
	noecho();
	getstr(szTempStr);

	this->pw = szTempStr;

	if(process(this->id, this->pw) == false) {

	}

	return true;
}

bool LoginWindow::process(const string &id, const string &pw) {
	
	return true;
}

void LoginWindow::join() {
	// empty
}

LoginWindow::~LoginWindow() {
	// empty
}