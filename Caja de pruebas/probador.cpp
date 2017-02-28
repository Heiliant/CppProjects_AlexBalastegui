#include <iostream>

void main() {
	int x(10);
	std::cout << x << std::endl;
	std::cout << &x << std::endl;
	std::cout << *&x << std::endl;

	int *y;
	std::cout << y;
}