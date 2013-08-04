#include "streamWindow.h"
#include "util.h"

StreamWindow::StreamWindow(Window *parent)
{
    _parent = parent;
}

StreamWindow::~StreamWindow()
{
    // empty
}

bool StreamWindow::initWindow()
{
    _window = subwin(_parent->getWindow(), getScreenHeight() - 5, getScreenWidth() - 14, 5, 14);
	drawWindow();
    return true;
}

void StreamWindow::drawWindow()
{    
    werase(_window);
    box(_window, ACS_VLINE, ACS_HLINE);
    wrefresh(_window);
}