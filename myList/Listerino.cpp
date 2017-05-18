#include "Listerino.h"



Listerino::Listerino()
{
	first = nullptr;
	last = nullptr;
	mida = 0;
}

Listerino::Listerino(Listerino &anotherList) {

}

Listerino::~Listerino()
{
	for()
}

int Listerino::size() {
	return mida;
}

void Listerino::push_front(int a) {
	node* addition = new node{a, first, nullptr};
	if(first!=nullptr)
		first->previous = addition;
	first = addition;
	++mida;
	if (this->size() == 1)
		last = first;
	
}

void Listerino::push_back(int a) {
	node* addition = new node{a, nullptr, last};
	if(last!=nullptr)
		last->next = addition;
	last = addition;
	++mida;
	if (this->size() == 1)
		first = last;
	
}

void Listerino::pop_back() {
	last->previous->next = nullptr;
	delete (last);
	--mida;
}

int Listerino::front() {
	return first->data;
	--mida;
}

int Listerino::back() {
	return last->data;
}

void main() {
	Listerino a;
	a.push_back(5);
	a.push_back(9);
	a.push_front(1);
	int x = 0;
	a.pop_back();
}