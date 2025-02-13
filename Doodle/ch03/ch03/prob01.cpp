#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	float a, b;

	printf("두 실수 입력: ");
	scanf("%f%f", &a, &b);
	printf("%.2f + %.2f = %.2f", a, b, a + b);
}