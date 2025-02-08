#include <iostream>

int main() {
	int x, y;
	int quarter;

	std::cin >> x >> y;

	if (x > 0) {
		if (y > 0) {
			quarter = 1;
		}
		else {
			quarter = 4;
		}
	}
	else {
		if (y > 0) {
			quarter = 2;
		}
		else {
			quarter = 3;
		}
	}

	std::cout << quarter;

	return 0;
}