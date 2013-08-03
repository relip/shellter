#include "menuWindow.h"
#include "mainWindow.h"
#include "stream.h"
#include "write.h"
#include "util.h"

MainWindow::MainWindow() : _menu(this) {
	// empty
}

bool MainWindow::initWindow() {
	_window = newwin(getScreenHeight(), getScreenWidth(), 0, 0);

	drawWindow();
	_menu.initWindow();

	return true;
}

void MainWindow::drawWindow() {
	wborder(_window, ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ');
	wrefresh(_window);
}

MainWindow::~MainWindow() {
	// empty
}