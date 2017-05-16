#include "Listerino.h"



Listerino::Listerino()
{
}


Listerino::~Listerino()
{
}

int Listerino::size() {
	int ans=0;
	for (node* a = first; a != last; a = (*a).next)
		ans++;
	return ans;
}

void Listerino::push_front(int a) {
	node* addition = new node{a, first, nullptr};
	if(first!=nullptr)
		first->previous = addition;
	first = addition;
	if (this->size() == 1)
		last = first;
}

void Listerino::push_back(int a) {
	node* addition = new node{a, nullptr, last};
	if(last!=nullptr)
		last->next = addition;
	last = addition;
	if (this->size() == 1)
		first = last;
}

void Listerino::pop_back() {
	last->previous->next = nullptr;
	delete (last);
}

int Listerino::front() {
	return first->data;
}

int Listerino::back() {
	return last->data;
}

void main() {
	Listerino a;
	a.push_back(5);
	int x = 0;
}