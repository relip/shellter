#pragma once

<<<<<<< HEAD
static struct {
	int width;
	int height;
} s_screen;
=======
#ifndef NULL
#define NULL ((void*)0)
#endif
>>>>>>> 785302e100dc46738df2b32458d2290f83b6d17e

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
