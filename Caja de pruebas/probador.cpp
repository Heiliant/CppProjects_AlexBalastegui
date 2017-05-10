#include <iostream>

void main() {
	int a = 7;
	int &x=a;
	if(&x==&a)
		std::cout << "hell yeah";
}
