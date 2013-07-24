#include <iostream>
#include <locale>
#include "login.h"

using namespace std;

int main(void) {
	/* utf-8 locale setup */

	/* Call Login module */
	Login login;

	login.start();

	return 0;
}