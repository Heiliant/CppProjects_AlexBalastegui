#include <vector>
#include <deque>
#include <queue>
#include <iostream>
#include <stack>
#include <list>
#include <forward_list>
#include <map>
#include <set>

void vect() {
	using vec = std::vector<int>;

	vec first;
	vec second(5, 2);
	vec third(second.begin() + 1, second.end());
	vec forth(second);

	for (int i = 0; i < second.size(); ++i)
		std::cout << second.at(i) << std::endl;

	std::cout << std::endl;

	for(vec::iterator i=second.begin(); i!=second.end(); ++i)
		std::cout << *i << std::endl;

	std::cout << std::endl;

	for(int &i : second)
		std::cout << i << std::endl;
}

void dect() {
	using dec = std::deque<int>;

	dec first;
	dec second(5, 3);
	dec third(second.begin() + 1, second.end());
	dec forth(second);

	for (int i = 0; i < second.size(); ++i)
		std::cout << second.at(i) << std::endl;

	std::cout << std::endl;

	for (dec::iterator i = second.begin(); i != second.end(); ++i)
		std::cout << *i << std::endl;

	std::cout << std::endl;

	for (int &i : second)
		std::cout << i << std::endl;
}

void soloq() {
	using q = std::queue<int>;

	q one;

	for (int i = 0; i < 5; ++i)
		one.push(i);

	q two(one);

	while (one.size() != 0) { std::cout << one.front() << std::endl; one.pop(); }

}

void prior() {
	using pri = std::priority_queue<int>;

	pri one;
	pri two;

	one.push(9);

	two = one;

	int a = 0;
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
	soloq();

	int z = 0;
	
	
	
}