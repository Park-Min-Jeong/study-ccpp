#include <iostream>

int main() {
	int hin, min, mcook;
	int hres, mres;
	int total;

	std::cin >> hin >> min;
	std::cin >> mcook;

	total = hin * 60 + min + mcook;

	hres = total / 60;
	mres = total % 60;

	if (hres >= 24) {
		hres -= 24;
	}

	std::cout << hres << " " << mres << std::endl;

	return 0;
}