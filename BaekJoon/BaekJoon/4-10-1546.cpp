#include <stdio.h>
#include <string.h>

int main()
{
	int n = 0;
	float arr[1000];
	memset(arr, 0, sizeof(arr));
	float max = 0;
	float answer = 0;

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%f", &arr[i]);
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}

	for (int i = 0; i < n; i++)
	{
		answer += (arr[i] / max * 100);
	}

	answer /= n;

	printf("%f", answer);
}