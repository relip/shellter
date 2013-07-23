#ifndef _LOGIN_H_
#define _LOGIN_H_

#include <ncurses.h>

class Login {
private:
	char id[100];
	char pw[100];

public:
	Login();

	void start();

	void process();

	void join();

	~Login();
};

#endif // _LOGIN_H_