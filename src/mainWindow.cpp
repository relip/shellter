#include "mainWindow.h"
#include "util.h"

MainWindow::MainWindow() :
    _menuWnd(this),
    _writeWnd(this),
    _streamWnd(this)
{
	// empty
}

MainWindow::~MainWindow() {
    // empty
}

bool MainWindow::initWindow() {
	_window = newwin(getScreenHeight(), getScreenWidth(), 0, 0);

	drawWindow();
    _menuWnd.initWindow();
    _writeWnd.initWindow();
    _streamWnd.initWindow();

	return true;
}

void MainWindow::drawWindow() {
	wborder(_window, ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ');
	wrefresh(_window);
}
