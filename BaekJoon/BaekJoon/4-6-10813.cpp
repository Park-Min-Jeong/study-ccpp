#include <stdio.h>
#include <string.h>

int main()
{
	int n = 0, m = 0, i = 0, j = 0;
	int temp = 0;

	int arr[100];
	memset(arr, 0, sizeof(arr));

	scanf("%d%d", &n, &m);

	for (int x = 0; x < n; x++)
	{
		arr[x] = (x + 1);
	}

	for (int x = 0; x < m; x++)
	{
		scanf("%d%d", &i, &j);
		temp = arr[i - 1];
		arr[i - 1] = arr[j - 1];
		arr[j - 1] = temp;
	}

	for (int x = 0; x < n; x++)
	{
		printf("%d ", arr[x]);
	}
}
