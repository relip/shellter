#ifndef _LOGIN_H_
#define _LOGIN_H_

#include <ncurses.h>
#include <string>

using namespace std;

class Login {
private:
	string id;
	string pw;

public:
	Login();

	void start();

	void process();

	void join();

	~Login();
};

#endif // _LOGIN_H_
