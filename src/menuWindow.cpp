#include "menuWindow.h"
#include "util.h"

MenuWindow::MenuWindow(Window *parent) {
	_parent = parent;
    _index = INDEX_PROFILE;
}

MenuWindow::~MenuWindow() {
}

bool MenuWindow::initWindow() {
	_window = subwin(_parent->getWindow(), getScreenHeight(), 14, 0, 0);
	drawWindow();
	return true;
}
 
void MenuWindow::drawWindow() {
    int left = _menuOffsetX;
    static const char* arrMenuName[] = {
        "Profile",      // INDEX_PROFILE,
    	"TimeLine",     // INDEX_TIMELINE,
		"Mention",      // INDEX_MENTION,
		"Message",      // INDEX_MESSAGE,
		"Favorite",     // INDEX_FAVORITE,
		"List",         // INDEX_LIST,
		"Search",       // INDEX_SEARCH,
		"Setting",      // INDEX_SETTING,
    };
    
    werase(_window);

    box(_window, ACS_VLINE, ACS_HLINE);

    for (int i = INDEX_PROFILE; i < MAX_INDEX; i++)
    {
        mvwprintw(_window, _menuOffsetY + i*2,  _menuOffsetX, arrMenuName[i]);
    }
    
    mvwprintw(_window, _index*2+_menuOffsetY, 2, ">");

    wrefresh(_window);
}
 
 
int MenuWindow::convIndexToInt(MenuWindow::EMENU_POINTER index) const
{
    return *(int*)&index;
}

