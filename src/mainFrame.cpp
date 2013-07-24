#include <iostream>
#include <locale.h>
#include "login.h"

using namespace std;

int main(void) {
	Login login; // Login module

	/* utf-8 locale setup */
	setlocale(LC_ALL, "ko_KR.utf8");
	setlocale(LC_CTYPE, "ko_KR.utf8");

	/* Start curses mode */
	initscr();

	/* Start Login module */

	login.start();

	/* End curses mode */
	endwin();

	return 0;
}