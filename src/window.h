#pragma once
#include <ncurses.h>

class Window {
protected:
    WINDOW *_window;
    Window *_parent;
    
public:
    virtual bool initWindow() = 0;
	virtual void drawWindow() = 0;

	WINDOW *getWindow() const {
		return _window;
	}
};