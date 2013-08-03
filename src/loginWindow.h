#include <ncurses.h>
#include <string>

using namespace std;

class LoginWindow {
private:
	string id;
	string pw;

public:
	LoginWindow();

	void logo(int height, int width);

	bool start();

	bool process(const string &id, const string &pw);

	void join();

	~LoginWindow();
};