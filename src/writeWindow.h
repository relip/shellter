#pragma once
#include "window.h"

class MainWindow;
class WriteWindow : public Window {
private:

public:
    WriteWindow(Window *parent);
    ~WriteWindow();
    
    bool initWindow();
    void drawWindow();
    
};