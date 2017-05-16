#pragma once
class Listerino
{
public:
	struct node {
		int data;
		node* next;
		node* previous;
	};

	node* first;
	node* last;

	Listerino();
	~Listerino();

	int front();
	int back();
	int size();
	void push_front(int a);
	void push_back(int a);
	void pop_front();
	void pop_back();

};

