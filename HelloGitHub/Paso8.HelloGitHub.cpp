#include <iostream>
#include "stdafx.h"
using namespace std;

void main() {

	int a[10] = { 5 };
	int b = 10;
	int x = 0;
	while (true){
		printf("%d\n", &a[x]); x++;
}
}