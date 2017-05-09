#pragma once
class myStack
{
public:
	myStack();
	~myStack();
	
	struct node {
		int info;
		node* next;
	};

	node* first;

	void pop();
	void push(int a);
	int front();
	bool isEmpty();
	int size();

	myStack(myStack &a);
	myStack(int* a);
	myStack(myStack &a, int* from, int* to);

};


