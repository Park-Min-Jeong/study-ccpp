#include <iostream>

int main() {
	int score;
	char rate;

	std::cin >> score;

	if (score >= 90) {
		rate = 'A';
	}
	else if (score >= 80) {
		rate = 'B';
	}
	else if (score >= 70) {
		rate = 'C';
	}
	else if (score >= 60) {
		rate = 'D';
	}
	else {
		rate = 'F';
	}

	std::cout << rate;

	return 0;
}