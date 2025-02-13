#include <iostream>

int main() {
	int n, m;
	int basket[101] = { 0 };
	int i, j, k;
	std::cin >> n >> m;

	for (int x = 0; x < m; x++) {
		std::cin >> i >> j >> k;

		for (int y = i; y <= j; y++) {
			basket[y] = k;
		}
	}

	for (int z = 1; z <= n; z++) {
		std::cout << basket[z] << " ";
	}
}