#include <stdio.h>

int main()
{
	printf("sizeof(int): %d\nsizeof(char): %d\nsizeof(float): %d\nsizeof(double): %d\n",
		sizeof(int), sizeof(char), sizeof(float), sizeof(double));
	int a; char b; float c; double d;
	printf("sizeof(int): %d\nsizeof(char): %d\nsizeof(float): %d\nsizeof(double): %d\n",
		sizeof(a), sizeof(b), sizeof(c), sizeof(d));
}