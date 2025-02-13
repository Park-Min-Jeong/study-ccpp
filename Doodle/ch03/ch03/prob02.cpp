#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	float weight, height, BMI;

	printf("체중(kg) 입력: ");
	scanf("%f", &weight);
	printf("키(m) 입력: ");
	scanf("%f", &height);

	BMI = weight / (height * height);
	printf("BMI: %f", BMI);
}