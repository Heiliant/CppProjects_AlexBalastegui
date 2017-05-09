#include "myStack.h"



myStack::myStack()
{
	myStack::first=nullptr;
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