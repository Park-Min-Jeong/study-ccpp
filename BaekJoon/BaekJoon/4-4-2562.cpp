#include <stdio.h>
#include <string.h>

int main()
{
	int arr[10];
	int maxValue = -1;
	int maxIndex = -1;

	memset(arr, 0, sizeof(arr));

	for (int i = 0; i < 10; i++) 
	{
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < 10; i++)
	{
		if (arr[i] > maxValue)
		{
			maxValue = arr[i];
			maxIndex = (i + 1);
		}
	}

	printf("%d\n%d", maxValue, maxIndex);

	return 0;
}