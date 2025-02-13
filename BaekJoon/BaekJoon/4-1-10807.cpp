#include <stdio.h>
#include <string.h>

int main() {
	int n = 0;
	int arr[100];
	int v = 0;
	int result = 0;

	memset(arr, 0, sizeof(arr));

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	scanf("%d", &v);

	for (int i = 0; i < n; i++) {
		if (arr[i] == v) {
			result += 1;
		}
	}

	printf("%d\n", result);

	return 0;
}