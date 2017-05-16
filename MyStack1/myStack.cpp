#include "myStack.h"



myStack::myStack()
{
	first=nullptr;
}


myStack::~myStack()
{
}

void myStack::push(int a) {
	node* temp = new node;
	temp->info = a;
	temp->next = first;
	first = temp;
}

void myStack::pop() {
	node temp=*first;
	delete myStack::first;
	first = temp.next;
}

int myStack::front() {
	return first->info;
}

bool myStack::isEmpty() {
	return(first->next == nullptr);
}

int myStack::size() {
	int ans = 0;
	for (node* a=first; a!=nullptr; a=a->next)
		ans++;
	return ans; 
}

myStack::myStack(myStack &a) {
	int aSize = a.size();
	first = nullptr;
	int* save = new int[aSize];

	for (int i = 0; i < aSize; ++i) {
		save[i] = a.front();
		a.pop();
	}

	for (int i = aSize-1; i >= 0; --i) 
		push(save[i]);

	for (int i = aSize-1; i >= 0; --i) 
		a.push(save[i]);
}

myStack::myStack(int* a) {
	//como sé cuan larga es el array?
}

myStack::myStack(myStack &a, int* from, int* to) { //si lo que quiero es copiar un rango de elementos dentro de otro stack, los punteros no deberían
													//ser puntero a nodos, en vez de punteros a enteros?
	node* save = new node[a.size()];

	for (int i = 0; i < a.size(); ++i) {
		save->info = a.front();
		save->next = (*a.first).next;
		a.pop();
	}

	bool uncheck = true;

	for (node z = save[0]; (z.next) == from;  ) {

	}
	
}