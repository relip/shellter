#include "menuWindow.h"
#include "mainWindow.h"
#include "util.h"

MenuWindow::MenuWindow(MainWindow *parent) {
	_parent = parent;
}

bool MenuWindow::initWindow() {
	_window = subwin(_parent->getWindow(), getScreenHeight(), 12, 0, 0);

	drawWindow();
	return true;
}

void MenuWindow::drawWindow() {
	box(_window, ACS_VLINE, ACS_HLINE);
	mvwprintw(_window, 2, 2, "타임라인");
	wrefresh(_window);
}

MenuWindow::~MenuWindow() {
	// empty
}