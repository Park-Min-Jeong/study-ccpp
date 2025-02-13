#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int n = 0;
	scanf("%d", &n);
	int *arr = (int*)malloc(n*sizeof(int));

	int max = -1000000;
	int min = 1000000;
	

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}

	printf("%d %d", min, max);

	return 0;
}