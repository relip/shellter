#pragma once
#include <ncurses.h>
#include "menuWindow.h"

class MainWindow {
private:
	WINDOW *_window;
	MenuWindow _menu;

public:
	MainWindow();

	bool initWindow();

	void drawWindow();

	WINDOW *getWindow() const {
		return _window;
	}



	~MainWindow();
};