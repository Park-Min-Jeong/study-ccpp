#include <iostream>

int main() {
	int hin, min;
	int hre, mre;

	std::cin >> hin >> min;

	if (min >= 45) {
		hre = hin;
		mre = min - 45;
	}
	else {
		if (hin == 0) {
			hre = 23;
		}
		else {
			hre = hin - 1;
		}
		mre = min + 60 - 45;
	}

	std::cout << hre << " " << mre << std::endl;

	return 0;
}