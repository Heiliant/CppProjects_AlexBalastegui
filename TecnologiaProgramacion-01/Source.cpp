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

void vector() {
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

void deque() {
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

void queue() {
	using q = std::queue<int>;
	std::deque<int> aux(2, 3);


	q one; //constructor vacío


	for (int i = 0; i < 5; ++i) 
		one.push(i);

	q two(one); //constructor por copia de queue

	while (one.size() != 0) { std::cout << one.front() << std::endl; one.pop(); } //popeando y printeando el front

	q three(aux); //constructor por copia de deque

}

void priorityqueue() {
	using pri = std::priority_queue<int>;

	int arr[5]{ 0, 1, 2, 3, 4 };

	pri one; //constructor vacio
	pri two(arr, arr + 3); //constructor por rango de un array

	while (!two.empty()) { //popeando y printeando el top
		std::cout << two.top() << std::endl;
		two.pop();
	}
}

void stack() {
	using st= std::stack<int>;
	std::deque <int> myD(2, 3);

	st one; //constructor vacio
	st two(myD); //constructor por copia de deque

	one = two;

	while (!two.empty()) { //iteración a través del popeo
		std::cout << two.top() << std::endl;
		two.pop();
	}
}

void list() {
	using list = std::list<int>;

	list one; //constructor vacio
	list two(3, 4); //constructor de relleno
	list three(two.begin(), two.end()); //constructo por rango
	list four(two); //constructor por copia

	for (list::iterator i = two.begin(); i != two.end(); ++i) { //bucle usando forward iterator
		std::cout << *i << std::endl;
	}

	std::cout << std::endl;

	for (list::reverse_iterator i = two.rbegin(); i != two.rend(); ++i) { //bucle usando reverse iterator
		std::cout << *i << std::endl;
	}

	std::cout << std::endl;

	while (!two.empty()) {//popeando el front e imprimiendo este
		std::cout << two.front() << std::endl;
		two.pop_front();
	}

	std::cout << std::endl;

	while (!four.empty()) {//popeando el back e imprimiendo este
		std::cout << four.back() << std::endl;
		four.pop_back();
	}
}

void f_list() {
	using flit = std::forward_list<int>;

	flit one; //constructor por defecto
	flit two(3, 9); //constructor de relleno
	flit three(two.begin(), two.end()); //constructor por rango
	flit four(three); //constructor por copia
	flit five(std::move(four)); //constructor por move. Los elementos de four se han movido a five, dejando four vacío
	flit six = { 1, 2, 3, 4, 5 }; //constructor por lista de inicialización

	for (flit::iterator a = two.begin(); a != two.end(); ++a) { //iteración por forward iterator
		std::cout << *a << std::endl;
	}

	std::cout << std::endl;

	while (!two.empty()) { //iteración popeando
		std::cout << two.front() << std::endl;
		two.pop_front();
	}
}

void map() {
	using map = std::map<int, char>;

	map aux;
	for (int i = 0; i < 10; ++i) {
		aux[i] = static_cast<char>(i+65);
	}


	map a; //constructor por defecto
	map b(aux.begin(), aux.end()); //constructor por rando
	map c(aux);  //constructor por copia

	for (std::pair<int, char> z : c) { //iteración usando foreach
		std::cout << z.first << " - " << z.second << std::endl;
	}

	std::cout << std::endl;

	for (map::iterator x = c.begin(); x != c.end(); ++x) { //iteración con forward iterator
		std::cout << x->first << " - " << x->second << std::endl;
	}

	std::cout << std::endl;

	for (map::reverse_iterator x = c.rbegin(); x != c.rend(); ++x) { //iteración con reverse iterator
		std::cout << x->first << " - " << x->second << std::endl;
	}
}

void set() {
	using set = std::set<int>;

	set aux;
	for(int i=0; i<10; ++i)
		aux.emplace(i);

	set a; //default constructor
	set b(aux.begin(), aux.end()); //constructor por rango
	set c(aux); //constructor por copia
	

	for (int z : c) //iteración con foreach
		std::cout << z << std::endl;

	std::cout << std::endl;

	for (set::iterator z = c.begin(); z != c.end(); ++z) //iteración con forward iterator
		std::cout << *z << std::endl;

	std::cout << std::endl;

	for (set::reverse_iterator z = c.rbegin(); z != c.rend(); ++z) //iteración con reverse iterator
		std::cout << *z << std::endl;
}

void main() {	
}