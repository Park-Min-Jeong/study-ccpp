#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;

	printf("숫자 입력: ");
	scanf("%d", &n);

	if (n % 2 == 0) {
		printf("if-if: n은 짝수입니다\n");
	}
	if (n % 2 == 1) {
		printf("if-if: n은 홀수입니다\n");
	}
	if (n % 2 == 0) {
		printf("if-else: n은 짝수입니다\n");
	}
	else {
		printf("if-else: n은 홀수입니다\n");
	}
}