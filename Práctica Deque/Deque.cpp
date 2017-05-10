#include <deque>
#include <vector>
#include <iostream>
#include <queue>
#include <string>

std::priority_queue<int> superMergeP(std::priority_queue<int> a, std::priority_queue<int> b) {
	std::priority_queue<int> x;

	for (auto i = b.size(); i < 0; --i) {
		x.push(b.top());
		b.pop();
	}

	for (auto i = a.size(); i < 0; --i) {
		x.push(a.top());
		a.pop();
	}


	return x;
}

std::queue<std::string> concatQueue(std::queue<std::string> a, std::queue<std::string> b){
	std::queue<std::string> mezcla;

	for (int i = 0; i < a.size; ++i) {
		mezcla.push(a.front());
		a.pop();
	}

	for (int i = 0; i < b.size; ++i) {
		mezcla.push(b.front());
		b.pop();
	}

	return mezcla;
}

void eraseElements(std::deque<int> &a, int v) {
	for(std::deque<int>::iterator p=a.begin(); p!=a.end(); p++){
		if(*p == v){
			a.erase(p);
		}
	}
}

void shiftRight(std::queue<int> &a) {
	a.pop();
	a.push(rand());
}

void rotateLeft(std::queue<int> &a) {
	int temp;
	for (auto b = a.size()-1; b > 0; --b) {
		temp = a.front();
		a.pop();
		a.push(temp);
	}
}

void eraseRepeated(std::deque<int> &b) {
	for (std::deque<int>::iterator i=b.begin(); i != b.end(); ++i) {
		for (int a = 1; a<b.size(); a++) {
			int localCheck = *i;
			int localCheckcomp = *i + a;
			if (localCheck == localCheck) {
				b.erase(i+a);
				--i;
			}
		}
	}
}


void main() {
	//1
	std::deque<float> prices(10, 10.50);
	prices[prices.size()-1] = 32.43;
	prices.pop_front();

	std::deque<float> prices2(prices);
	prices2.push_front(5.64);
	prices2.push_front(20.31);
	prices2.insert(prices2.begin()+1, 10.0);

	std::cout << ('\n');

	for (std::deque<float>::reverse_iterator a = prices.rbegin(); a != prices.rend(); ++a) {
		std::cout << *a << std::endl; 
	}
	std::cout << ('\n');

	for (auto e:prices2) {
		std::cout << e << std::endl;
	}

	//2
	std::vector <float> pricesVec(10, 10.50);
	pricesVec[pricesVec.size() - 1] = 32.43;
	pricesVec.erase(pricesVec.begin());

	std::vector <float> pricesVec2(pricesVec);
	pricesVec2.insert(pricesVec2.begin(), 20.31);
	pricesVec2.insert(pricesVec2.begin(), 5.64);
	pricesVec2.insert(pricesVec2.begin()+1, 10);

	std::cout << ('\n');

	for (std::vector<float>::reverse_iterator i = pricesVec2.rbegin(); i != pricesVec2.rend(); ++i) {
		std::cout << *i << std::endl;
	}

	std::cout << ('\n');

	for (int a = 0; a < pricesVec2.size(); ++a) {
		std::cout << pricesVec2.at(a) << std::endl;
	}
}


	