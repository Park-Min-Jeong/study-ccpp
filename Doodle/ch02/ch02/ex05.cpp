#include <stdio.h>

int main()
{
	float a = 9.58;
	float b = 3.14;
	float add = a + b; // µ¡¼À
	float sub = a - b; // »¬¼À
	float mul = a * b; // °ö¼À
	float div = a / b; // ¸ò

	printf("%f + %f = %f\n", a, b, add);
	printf("%f - %f = %f\n", a, b, sub);
	printf("%f * %f = %f\n", a, b, mul);
	printf("%f / %f = %f\n", a, b, div);
}