#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	char s[100];
	printf("���ڸ� �Է��ϼ���(100�� �̳�).\n");
	scanf_s("%[^\n]s", s, sizeof(s));
	printf("�Էµ� ���ڴ� %s�Դϴ�. \n", s);

	system("pause");
	return 0;
}