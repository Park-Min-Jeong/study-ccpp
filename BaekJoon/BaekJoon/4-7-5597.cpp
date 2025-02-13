#include <stdio.h>
#include <string.h>

int main()
{
	int arr[30];
	memset(arr, 0, sizeof(arr));
	int v = -1;

	for (int i = 0; i < 28; i++)
	{
		scanf("%d", &v);
		arr[v - 1] = 1;
	}

	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		if (arr[i] == 0)
		{
			printf("%d ", i + 1);
		}
	}
}