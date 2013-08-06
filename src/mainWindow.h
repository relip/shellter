#pragma once
#include "window.h"
#include "menuWindow.h"
#include "writeWindow.h"
#include "streamWindow.h"

class MainWindow : public Window {
private:
	MenuWindow _menuWnd;
    WriteWindow _writeWnd;
    StreamWindow _streamWnd;

public:
	MainWindow();
	~MainWindow();
    
    bool initWindow();
    void drawWindow();
    
};