#include <stdio.h>
#include <string.h>

int main()
{
	int n = 0;
	int m = 0;
	int arr[100];
	memset(arr, 0, sizeof(arr));
	int i = -1;
	int j = -1;
	int tmp = 0;

	scanf("%d%d", &n, &m);

	for (int x = 1; x <= n; x++)
	{
		arr[x] = x;
	}

	for (int x = 0; x < m; x++)
	{
		scanf("%d%d", &i, &j);

		for (int y = 0; y < ((j - i) / 2); y++)
		{
			tmp = arr[i + y];
			arr[i + y] = arr[j - y];
			arr[j - y] = tmp;
		}

		if ((j - i) % 2 == 1)
		{
			tmp = arr[i + (j - i) / 2];
			arr[i + (j - i) / 2] = arr[i + ((j - i) / 2) + 1];
			arr[i + ((j - i) / 2) + 1] = tmp;
		}
	}

	for (int x = 1; x <= n; x++)
	{
		printf("%d ", arr[x]);
	}
}