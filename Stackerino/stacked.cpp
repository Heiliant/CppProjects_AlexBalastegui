#include <iostream>
#include <stack>
#include <string>
#include <vector>
#include <queue>

std::stack<int> superMerge(std::stack<int> &a, std::stack<int> &b) {
	std::priority_queue<int> answer;
	std::stack <int> merged;
	std::vector <int> temp;

	for (int i = 0; i < a.size(); ) {
		answer.push(a.top());
		a.pop();
	}

	for (int i = 0; i < b.size(); ) {
		answer.push(b.top());
		b.pop();
	}

	for (int i = 0; i < answer.size(); ) {
		temp.push_back(answer.top());
		answer.pop();
	}

	for (int i : temp) {
		std::cout << i << std::endl;
	}

	for (std::vector <int>::reverse_iterator i = temp.rbegin(); i < temp.rend(); ++i) {
		merged.push(*i);
	}

	return merged;
}


std::stack<std::string> putHat(std::stack<std::string> a, std::stack<std::string> b) {
	std::stack <std::string> temp;
	std::stack <std::string> ans;

	for (int i = 0; i < b.size(); ) {
		temp.push(b.top());
		b.pop();
	}

	for (int i = 0; i < temp.size();){
		ans.push(temp.top());
		temp.pop();
	}

	for (int i = 0; i < a.size();) {
		temp.push(a.top());
		a.pop();
	}

	for (int i = 0; i < temp.size();) {
		ans.push(temp.top());
		temp.pop();
	}
	return ans;
}


std::queue<int> transformToQ(std::stack<int> a) {
	std::queue<int> ans;
	for (int i = 0; i < a.size();) {
		ans.push(a.top());
		a.pop();
	}
	return ans;
}


bool isHat(std::stack<int> a, std::stack<int> b) {
	bool hat = true;

	if (a.size() > b.size())
		return false;

	for (int i = 0; i < a.size();) {
		if (a.top() != b.top())
			hat = false; break;
		a.pop();
		b.pop();
	}
	return hat;
}


bool balancedP(std::queue<char> b) {
	std::queue<char> a;
	std::vector<char> temp;
	for (int i = 0; i < b.size();) {
		temp.push_back(b.front());
		b.pop();
	}

	for (std::vector<char>::reverse_iterator i = temp.rbegin(); i != temp.rend(); ++i) {
		a.push(*i);
	}

	int counter = 0;

	if (a.size() % 2 != 0)
		return false;

	for (int i = 0; i < a.size() && counter>=0;) {
		if (a.front() == ')')
			counter++;
		else if (a.front() == '(')
			counter--;
		a.pop();
		}
	return(counter == 0);
}

void change(std::stack<int> &a) {
	int front = a.top();
	int back;
	std::stack<int> temporal(a);
	std::stack<int> temporal2;
	for (int i = 0; i < a.size();) {
		if (i == a.size() - 1)
			back = a.top();
		a.pop();
	}
	
	for (int i = 0; i < temporal.size();) {
		temporal2.push(temporal.top());
		temporal.pop();
	}
	
	for (int i = 0; i < a.size();)
		a.pop();

	for (int i = 0; i < temporal2.size();) {
		if (temporal2.size() == 0)
			a.push(front);
		else if (temporal2.size() == temporal2.size() - 1)
			a.push(back);
		temporal2.pop();
		
	}

}

void main() {
	std::stack<int> laultima({ 1, 2, 3, 4 });
	std::stack<int> lapenultima(laultima);

	for (int i = 0; i < laultima.size();) {
		std::cout << laultima.top() << std::endl;
		laultima.pop();
	}
	
	change(lapenultima);

	for (int i = 0; i < lapenultima.size();) {
		std::cout << lapenultima.top() << std::endl;
		lapenultima.pop();
	}

	int k = 0;



	std::queue<char>parentesis({ '(',')' });

	if (balancedP(parentesis))
		std::cout << "parentesis buenos" << std::endl;
	else
		std::cout << "parentesis malos" << std::endl;


	std::cout << std::endl;


	std::stack<int> hat1({ 1, 2, 3, 4 });
	std::stack<int> hat2({2, 3, 4});

	if (isHat(hat1, hat2))
		std::cout << "sombrerito" << std::endl;
	else
		std::cout << "no sombrero" << std::endl;

	int z = 10;




















	std::stack<int> toQ1({ 1, 2, 3, 4 });
	std::stack <int> toQ2(toQ1);

	for (int i = 0; i < toQ1.size();) {
		std::cout << toQ1.top() << std::endl;
		toQ1.pop();
	}

	std::queue <int> fromS = transformToQ(toQ2);
	std::cout << std::endl;
	for (int i = 0; i < fromS.size();) {
		std::cout << fromS.front() << std::endl;
		fromS.pop();
	}
	int y = 10;

















	std::stack<std::string> words1({ "name", "My" });
	std::stack<std::string> words2({ "Alex", "is" });
	std::stack<std::string> words3(words1);
	std::stack<std::string> words4(words2);

	for (int i = 0; i < words1.size();) {
		std::cout <<words1.top() << std::endl;
		words1.pop();
	}
	std::cout << std::endl;

	for (int i = 0; i < words2.size();) {
		std::cout << words2.top() << std::endl;
		words2.pop();
	}
	std::cout << std::endl;
	std::stack<std::string> wordsAns(putHat(words3, words4));

	for (int i = 0; i < wordsAns.size();) {
		std::cout << wordsAns.top() << std::endl;
		wordsAns.pop();
	}
	int x = 10;















	std::stack<int> a ({3, 6, 8, 9});
	std::stack<int> b ({ 2, 4, 5, 6, 7 });

	std::stack<int> c(a);
	std::stack<int> d(b);

	std::cout << "primer stack" << std::endl;
	for (int i = 0; c.size(); ) {
		std::cout << c.top() << std::endl;
		c.pop();
	}

	std::cout << "segon stack" << std::endl;
	for (int i = 0; d.size(); ) {
		std::cout << d.top() << std::endl;
		d.pop();
	}
	std::cout << "mescla" << std::endl;
	superMerge(a, b);

	std::cout << a.size() << std::endl;

	for (int i = 0; i < a.size(); ) {
		std::cout << i << ".-" << a.top() << std::endl;
		a.pop();
	}
}
