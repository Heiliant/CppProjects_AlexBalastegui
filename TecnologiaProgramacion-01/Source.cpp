#include <vector>
#include <deque>
#include <queue>
#include <iostream>
#include <stack>
#include <list>
#include <forward_list>
#include <map>
#include <set>

///////////////////FALTAN STACK, LIST, F_LIST, MAP Y SET, GOMS. //////////////////////////////
//BORRA ESTO CUANDO ACABES

void vect() {
	using vec = std::vector<int>;

	vec first; //constructor vacio
	vec second(5, 2); //constructor para rellenar
	vec third(second.begin() + 1, second.end()); //constructor por rango
	vec forth(second); //constructor por copia

	for (int i = 0; i < second.size(); ++i) //bucle for iterando por el size del vector
		std::cout << second.at(i) << std::endl;

	std::cout << std::endl;

	for(vec::iterator i=second.begin(); i!=second.end(); ++i) //forward iterator
		std::cout << *i << std::endl;

	std::cout << std::endl;

	for (vec::reverse_iterator i = second.rbegin(); i != second.rend(); ++i) //backward iterator
		std::cout << *i << std::endl;

	std::cout << std::endl;

	for(int &i : second) //bucle foreach
		std::cout << i << std::endl;

	std::cout << std::endl;

	while (!second.empty()){ //popeando y printeando el back
		std::cout << second.back() << std::endl;
		second.pop_back();
	}

}

void dect() {
	using dec = std::deque<int>;

	dec first; //constructor vacio
	dec second(5, 3); //constructor con argumentos para rellenar
	dec third(second.begin() + 1, second.end()); //constructor por rango
	dec forth(second); //constructor por copia

	second.push_back(1);

	for (int i = 0; i < second.size(); ++i) //bucle for
		std::cout << second.at(i) << std::endl; 

	std::cout << std::endl;

	for (dec::iterator i = second.begin(); i != second.end(); ++i) //forward iterator
		std::cout << *i << std::endl;

	std::cout << std::endl;

	for (dec::reverse_iterator i = second.rbegin(); i != second.rend(); ++i) //backward iterator
		std::cout << *i << std::endl;

	std::cout << std::endl;

	for (int i : second) //bucle foreach
		std::cout << i << std::endl;
	
	std::cout << std::endl;

	do { //popeando y printeando el front
		std::cout << second.front() << std::endl;
		second.pop_front();
	} while (!second.empty());

	do { //popeando y printeando el back
		std::cout << forth.back() << std::endl;
		forth.pop_back();
	} while (!forth.empty());
}

void soloq() {
	using q = std::queue<int>;
	std::deque<int> aux(2, 3);


	q one; //constructor vacío


	for (int i = 0; i < 5; ++i) 
		one.push(i);

	q two(one); //constructor por copia de queue

	while (one.size() != 0) { std::cout << one.front() << std::endl; one.pop(); } //popeando y printeando el front

	q three(aux); //constructor por copia de deque

}

void prior() {
	using pri = std::priority_queue<int>;

	int arr[5]{ 0, 1, 2, 3, 4 };

	pri one; //constructor vacio
	pri two(arr, arr + 3); //constructor por rango de un array

	while (!two.empty()) { //popeando y printeando el top
		std::cout << two.top() << std::endl;
		two.pop();
	}


}

void stax() {
	using sx = std::stack<int>;

	sx one;
	sx two;

	one.push(9);

	two = one;

	int a = 0;
}

void enlist() {
	using list = std::list<int>;

	list one(1, 3);
	list two;

	two = one;

	int a = 0;
}

void flist() {
	using flit = std::forward_list<int>;

	flit one(1, 9);
	flit two;

	two = one;

	int a = 0;
}

void mapa() {
	using map = std::map<int, char>;

	map a;
	map b;
	a[9] = 'a';

	b = a;

	int z = 9;
}

void seta() {
	using set = std::set<int>;

	set a;
	set b;

	a.insert(9);

	b = a;

	int z = 0;
}

class proba {
private:
	int i;
public:
	proba(int a) {
		i = a;
	}
	int get_i() {
		return i;
	}
};

void lmao(proba a) {
	std::cout << a.get_i() << std::endl;
}

void main() {
	dect();

	int z = 0;
	
	
	
}