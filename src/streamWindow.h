#pragma once
#include "window.h"

class StreamWindow : public Window {
private:

public:
    StreamWindow(Window *parent);
    ~StreamWindow();
    
    bool initWindow();
    void drawWindow();
    
};

