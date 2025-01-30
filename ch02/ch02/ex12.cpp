#include <stdio.h>

int main()
{
	int a = 5;
	printf("a는 원래 %d였다!\n", a);
	a++; // a += 1과 동일
	printf("1 증가해서 %d이 되었다!!\n", a);
	a--; // a -= 1과 동일
	printf("1 감소해서 %d가 되었다!!!\n", a);

	int b;
	b = ++a;
	printf("=====전치 증가 연산=====\n");
	printf("a = %d\nb = %d\n", a, b); // 결과: a = 6 b = 6
	b = a++;
	printf("=====후치 증가 연산=====\n");
	printf("a = %d\nb = %d\n", a, b); // 결과: a = 6 b = 7
}