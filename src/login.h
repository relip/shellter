#ifndef _LOGIN_H_
#define _LOGIN_H_

#include <ncurses.h>

class Login {
private:

public:
	Login();

	int start();

	void join();

	~Login();
};

#endif // _LOGIN_H_