#include <list>
#include <queue>
#include <iostream>
#include <set>
#include <vector>
#include <iterator>

std::list<int> superMerge(std::list<int> a, std::list<int> b) {
	std::priority_queue<int> ans;
	std::list <int> result;

	for (int z : a) {
		ans.push(z);
	}

	for (int z : b) {
		ans.push(z);
	}

	while (!ans.empty()) {
		result.push_front(ans.top());
		ans.pop();
	}

	return result;
}


void change(std::list<int> &a) {
	int first = a.front();
	int last = a.back();
	a.pop_front();
	a.pop_back();
	a.push_front(last);
	a.push_back(first);
}

int getElementPos(std::list<int> &a, int pos) {

	if (pos-1 > a.size() || pos-1<=0)
		return 0;
	int counter = 0;
	for (std::list<int>::iterator i = a.begin(); i != a.end(); ++i, ++counter) {
		if (counter == pos-1)
			return *i;
	}
}

void removeDuplicates(std::list <int> &a) {
	std::set <int> buddy;

	for (int i : a)
		buddy.insert(i);

	a.clear();
	
	for (int i : buddy)
		a.push_back(i);
}

void removeElement(std::list <int> &a, int element) {
	std::vector<int> pos;
	int counter = 0;
	for (std::list<int>::iterator i = a.begin(); i != a.end(); ++i, ++counter) {
		if (*i == element)
			pos.push_back(counter);
	}
	for (int i : pos) {
		std::list<int>::iterator q = a.begin();
		std::advance(q, pos.back());
		a.erase(q);
	}
}

bool palindrome(std::list <int> &a) {
	std::list <int>::reverse_iterator y = a.rbegin();
	for (std::list<int>::iterator i = a.begin(); i != a.end(); ++i) {
			if (*i != *y)
				return false;
			++y;
	}
	return true;
}





void main() {
	std::list <int> _palindrome({ 1, 2, 3, 4, 3, 2 , 1 });
	if (palindrome(_palindrome))
		std::cout << "palindromo" << std::endl;
	else
		std::cout << "no palindromo" << std::endl;
	
	std::cout << std::endl;



	std::list <int> eraser({ 1, 2, 3, 4, 2, 2, 2, 2, 2, 2, 2, 2,  5 });

	for (int i : eraser)
		std::cout << i << std::endl;
	std::cout << std::endl;
	removeElement(eraser, 2);
	for (int i : eraser)
		std::cout << i << std::endl;
	






	std::list<int> duplicates({ 1, 2, 3, 4, 5, 5, 5, 6, 6, 7, 7, 8 });

	for (int i : duplicates)
		std::cout << i << std::endl;
	std::cout << std::endl;
	removeDuplicates(duplicates);
	for (int i : duplicates)
		std::cout << i << std::endl;
	






	std::list <int> z({ 4, 3, 2, 1 });

	std::cout << getElementPos(z, 0) << std::endl;
	














	std::list <int> w({ 1, 2, 3, 4,5 });

	std::cout << "before CHANGE" <<std::endl;
	for (int i : w) {
		std::cout << i << std::endl;
	}
	std::cout << std::endl;
	std::cout << "after CHANGE" << std::endl;
	change(w);
	for (int i : w) {
		std::cout << i << std::endl;
	}




	std::list<int> a({ 1, 2, 3 });
	std::list<int> b({ 1, 4, 5 });

	for (std::list<int>::iterator i = a.begin(); i != a.end(); ++i) {
		std::cout << *i << std::endl;
	}
	std::cout << std::endl;

	std::list<int> merge(superMerge(a, b));
	
	for (std::list<int>::iterator i = merge.begin(); i != merge.end(); ++i) {
			std::cout << *i << std::endl;
	}
}