#include <iostream>

int main() {
	int n1, n2;
	int n3, n4, n5, n6;

	std::cin >> n1 >> n2;

	n3 = n1 * (n2 % 10);
	n4 = n1 * ((n2 / 10) % 10);
	n5 = n1 * (((n2 / 10) / 10) % 10);
	n6 = n3 + n4 * 10 + n5 * 100;

	std::cout << n3 << std::endl << n4 << std::endl << n5 << std::endl << n6 << std::endl;
}