#include "writeWindow.h"
#include "util.h"

WriteWindow::WriteWindow(Window* parent)
{
    _parent = parent;
}

WriteWindow::~WriteWindow()
{
    // empty
}

bool WriteWindow::initWindow()
{
    _window = subwin(_parent->getWindow(), 5, getScreenWidth() - 14, 0, 14);
    drawWindow();
    return true;
}

void WriteWindow::drawWindow()
{
    werase(_window);
    box(_window, ACS_VLINE, ACS_HLINE);
    wrefresh(_window);
}