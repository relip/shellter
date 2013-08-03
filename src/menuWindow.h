#pragma once
#include <ncurses.h>

class MainWindow;
class MenuWindow {
private:
	WINDOW *_window;
	MainWindow *_parent;
	enum EMENU_POINTER {
		INDEX_PROFILE,
		INDEX_TIMELINE,
		INDEX_MENTION,
		INDEX_MESSAGE,
		INDEX_FAVORITE,
		INDEX_LIST,
		INDEX_SEARCH,
		INDEX_SETTING,
	} _index;

public:
	MenuWindow(MainWindow *parent);

	bool initWindow();

	void drawWindow();

	~MenuWindow();
};