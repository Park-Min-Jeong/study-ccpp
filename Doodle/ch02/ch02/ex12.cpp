#include <stdio.h>

int main()
{
	int a = 5;
	printf("a�� ���� %d����!\n", a);
	a++; // a += 1�� ����
	printf("1 �����ؼ� %d�� �Ǿ���!!\n", a);
	a--; // a -= 1�� ����
	printf("1 �����ؼ� %d�� �Ǿ���!!!\n", a);

	int b;
	b = ++a;
	printf("=====��ġ ���� ����=====\n");
	printf("a = %d\nb = %d\n", a, b); // ���: a = 6 b = 6
	b = a++;
	printf("=====��ġ ���� ����=====\n");
	printf("a = %d\nb = %d\n", a, b); // ���: a = 6 b = 7
}