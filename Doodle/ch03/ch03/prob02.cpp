#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	float weight, height, BMI;

	printf("ü��(kg) �Է�: ");
	scanf("%f", &weight);
	printf("Ű(m) �Է�: ");
	scanf("%f", &height);

	BMI = weight / (height * height);
	printf("BMI: %f", BMI);
}