#include <iostream>

int main() {
	int x, n, a, b;
	int total = 0;

	std::cin >> x;
	std::cin >> n;

	for (int i = 0; i < n; i++) {
		std::cin >> a >> b;
		total = total + (a * b);
	}

	if (x == total) {
		std::cout << "Yes" << std::endl;
	}
	else {
		std::cout << "No" << std::endl;
	}

	return 0;
}