#include <iostream>
#include "stageManager.h"
#include "login.h"

using namespace std;

int main(void) {
	Login login; // Login module

	/* utf-8 locale setup */

	/* Start curses mode */
	initscr();

	/* Start Login module */

	login.start();

	/* End curses mode */
	endwin();

	return 0;
}
