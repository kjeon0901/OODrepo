#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	char s[100];
	printf("문자를 입력하세요(100자 이내).\n");
	scanf_s("%[^\n]s", s, sizeof(s));
	printf("입력된 문자는 %s입니다. \n", s);

	system("pause");
	return 0;
}