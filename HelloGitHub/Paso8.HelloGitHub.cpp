#include <iostream>
#include "stdafx.h"
using namespace std;

struct animal {
	int age;
	int weight;
};

int operator +(animal a, animal b) {
	return a.age + b.age;
}

//void printOpt(int a[], int length) {
//
//	int *x = a;
//	int *fin = &a[length];
//	while (x < fin) {
//		cout << *x << " " << endl;
//		x++; //las direcciones de memoria van de 4 en 4 pero como x es un puntero el hecho de incrementar, ya considera el tipo
//	}
//};


void main() {
	int scores[] = { 84, 92, 76, 81, 56 };
	//printOpt(scores, 5);
	animal perro{ 5, 10 };
	animal leon{ 15, 130 };
	printf("%d", perro + leon);
}
