#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;

	printf("���� �Է�: ");
	scanf("%d", &n);

	if (n % 2 == 0) {
		printf("if-if: n�� ¦���Դϴ�\n");
	}
	if (n % 2 == 1) {
		printf("if-if: n�� Ȧ���Դϴ�\n");
	}
	if (n % 2 == 0) {
		printf("if-else: n�� ¦���Դϴ�\n");
	}
	else {
		printf("if-else: n�� Ȧ���Դϴ�\n");
	}
}