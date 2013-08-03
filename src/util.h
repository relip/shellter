#pragma once

static struct {
	int width;
	int height;
} s_screen;

inline int getScreenWidth(){
	if (s_screen.width == 0)
	{
		getmaxyx(stdscr, s_screen.height, s_screen.width);
	}
	return s_screen.width;
}

inline int getScreenHeight(){
	if (s_screen.height == 0)
	{
		getmaxyx(stdscr, s_screen.height, s_screen.width);
	}
	return s_screen.height;
}