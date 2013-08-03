#include <locale.h>
#include "loginWindow.h"
#include "mainWindow.h"

using namespace std;

int main(void) {
	LoginWindow loginWindow; // LoginWindow module
	MainWindow mainWindow;
	/* utf-8 locale setup */
	setlocale(LC_ALL, "ko_KR.utf8");
	setlocale(LC_CTYPE, "ko_KR.utf8");

	/* Start curses mode */
	initscr();

	/* Start LoginWindow module */

	if(loginWindow.start() == false) {
		return -1;
	}

	mainWindow.initWindow();
	getch();


	/* End curses mode */
	endwin();

	return 0;
}
