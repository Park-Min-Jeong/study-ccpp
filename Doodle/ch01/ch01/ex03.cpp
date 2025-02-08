#include <stdio.h>

int main()
{
	// %d: 정수 출력
	printf("%d + %d = %d\n", 2, 3, 2 + 3);

	// %f: 실수 출력
	printf("%.2f\n", 3.14);
	printf("%f\n", 3.141592);

	// %c: 1글자 출력
	printf("%c %c %c\n", 'a', 'b', 'c');

	// %s: 문자열 출력
	printf("%s\n", "Hello");
}