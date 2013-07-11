#pragma once

#include <ncurses.h>

class CShellter
{
public:
	CShellter();
	~CShellter();

	/* 윈도우를 띄워주는 메소드... 나중에 CWindow로 상위클래스를 만들면 좋을 것 같다 */
	int start();

private:
	WINDOW* _mainWnd;
	WINDOW* _menuWnd;
	WINDOW* _timelineWnd;
	WINDOW* _inputWnd;

};

