#include <iostream>

void main2() {
	int x(10);
	std::cout << x << std::endl;
	std::cout << &x << std::endl;
	std::cout << *&x << std::endl;

	int *y;
	y = new int{ 4 };
	std::cout << y;
}