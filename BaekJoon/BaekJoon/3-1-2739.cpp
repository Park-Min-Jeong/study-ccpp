#include <iostream>

int main() {
	int n;

	std::cin >> n;

	for (int i = 1; i <= 9; i++) {
		std::printf("%d * %d = %d\n", n, i, n * i);
	}

	return 0;
}