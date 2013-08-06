#pragma once
#include "window.h"
#include <vector>
#include <string>
using namespace std;

class MenuWindow : public Window {
private:
	enum EMENU_POINTER {
		INDEX_PROFILE,
		INDEX_TIMELINE,
		INDEX_MENTION,
		INDEX_MESSAGE,
		INDEX_FAVORITE,
		INDEX_LIST,
		INDEX_SEARCH,
		INDEX_SETTING,
        MAX_INDEX
	} _index;
    
    int convIndexToInt(MenuWindow::EMENU_POINTER index) const;
    
    static const int _menuOffsetY = 2;
    static const int _menuOffsetX = 4;
    
public:
	MenuWindow(Window *parent);
	~MenuWindow();
    
    bool initWindow();
    void drawWindow();

};