#include <stdio.h>
#include <string.h>

int main() 
{
	int n = 0;
	int x = 0;

	int item = 0;
	int arr[10000];
	memset(arr, 0, sizeof(arr));

	scanf("%d%d", &n, &x);

	for (int i = 0; i < n; i++) 
	{
		scanf("%d", &item);
		arr[i] = item;
	}

	for (int i = 0; i < n; i++) 
	{
		if (arr[i] < x) 
		{
			printf("%d ", arr[i]);
		}
	}

	return 0;
}