#include <stdio.h>

int main()
{
	int a = 3;

	bool p = (a >= 1) && (a <= 10); // a�� 1 �̻��̰� 10 �����̴�
	bool q = (a == 3) || (a == 7); // a�� 3�̰ų� 7�̴�
	bool r = !(q); // q�� �ƴϴ� -> a�� 3�� �ƴϰ� 7�� �ƴϴ�

	printf("%d\n%d\n%d", p, q, r); // ���: 1 1 0
}