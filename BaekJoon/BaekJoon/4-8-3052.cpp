#include <stdio.h>
#include <string.h>

int main()
{
	int modCount[42];
	memset(modCount, 0, sizeof(modCount));

	int result = 0;
	int num = 0;

	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &num);
		modCount[num % 42] += 1;
	}

	for (int i = 0; i < 42; i++)
	{
		if (modCount[i] > 0)
		{
			result += 1;
		}
	}

	printf("%d", result);

	return 0;
}