#include <locale.h>
#include "shellter.h"

int main()
{
	int result;
	CShellter the_shellter;
	
	/* utf8 로케일 설정 */
	setlocale(LC_ALL, "ko_KR.utf8");
	setlocale(LC_CTYPE, "ko_KR.utf8");

	/* 로그인 관련 윈도우 생성 필요 */
	// result = the_login_window.start(); 같은..

	/* Shellter 시작 */
	result = the_shellter.start();
	
	return result;
}
