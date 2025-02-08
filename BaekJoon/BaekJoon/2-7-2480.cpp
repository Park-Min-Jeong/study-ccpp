#include <iostream>

int main() {
	int n1, n2, n3;
	int result;
	int temp;

	std::cin >> n1 >> n2 >> n3;

	if ((n1 == n2) && (n1 == n3)) {
		temp = n1;
		result = 10000 + temp * 1000;
	}
	else if ((n1 != n2) && (n1 != n3) && (n2 != n3)) {
		if ((n1 > n2) && (n1 > n3)) {
			temp = n1;
		}
		else if ((n2 > n1) && (n2 > n3)) {
			temp = n2;
		}
		else {
			temp = n3;
		}
		result = temp * 100;
	}
	else {
		if ((n1 == n2) || (n1 == n3)) {
			temp = n1;
		}
		else {
			temp = n2;
		}
		result = 1000 + temp * 100;
	}

	std::cout << result << std::endl;

	return 0;
}