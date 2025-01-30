#include <stdio.h>

int main()
{
	int a = 3;

	bool p = (a >= 1) && (a <= 10); // a가 1 이상이고 10 이하이다
	bool q = (a == 3) || (a == 7); // a는 3이거나 7이다
	bool r = !(q); // q가 아니다 -> a가 3도 아니고 7도 아니다

	printf("%d\n%d\n%d", p, q, r); // 결과: 1 1 0
}