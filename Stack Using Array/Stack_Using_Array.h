#pragma once
#include<iostream>
#include<string>
using namespace std;

//Using Aray:
class Stack
{
private: 
	int size;
	int top;
	char* stack;
public:
	Stack()
	{
		size = 5;
		top = -1;
		stack = new char[size];
	}
	Stack(int size)
	{
		this->size = size;
		top = -1;
		stack = new char[size];
	}


	void push(char);
	char pop();
	bool isFull();
	bool isEmpty();
	void display();
	char peek(int);
};


void Stack::push(char c)
{
	if (isFull())
	{
		cout << "Stack is Full\n";
	}
	else
	{
		top++;
		stack[top] = c;		
	}
}

bool Stack::isFull()

{
	if (top == size - 1)
	{
		return true;
	}
	else return false;
}


bool Stack::isEmpty()

{
	if (top == -1)
	{
		return true;
	}
	else return false;
}

char Stack::pop()
{
	char x = '-1';
	if (isEmpty())
	{
		cout << "Stack is Empty\n";

	}
	else
	{
		x = stack[top];
		top--;
	}
	return x;
}

void Stack:: display()
{
	if (isEmpty())
	{
		cout << "Stack is Empty\n";
	}
	else
	{
		for (int i = top; i >= 0; i--)
		{
			cout << stack[i]<<endl;
		}
	}
}

char Stack::peek(int pos)
{
	char x = 'I';
	if (top - pos + 1 < 0)
	{
		cout << "Invalid position\n";
	}
	else
	{
		x = stack[top - pos + 1];
	}
	return x;
}

//Using Link List:

class Node
{
public:
	char data;
	Node* next;
	Node()
	{
		data = ' ';
		next = NULL;
	}
};

class LinkListStack
{
private:
	Node* top;
public:
	LinkListStack()
	{
		top = NULL;
	}
	void push(char);
	char pop();
	bool isEmpty();
	bool isFull();
	//char peek(int);
	void display();
	char atTop();
};

void LinkListStack::push(char x)
{
	Node* t = new Node;
	if (isFull())
	{
		cout << "Stack is Full means Heap nit creating Node\n";
	}
	else
	{
		t->data = x;
		t->next = top;
		top = t;
	}
}

bool LinkListStack::isFull()
{
	Node* t = new Node;
	if (t == NULL)
		return true;
	else 
		return false;
}

bool LinkListStack::isEmpty()
{
	if (top == NULL)
		return true;
	else
		return false;
}

char LinkListStack::pop()
{
	Node* t;
	char x = ' ';
	if (isEmpty())
	{
		cout << "Staqck is Empty\n";
	}
	else
	{
		t = top;
		top = top->next;
		x = t->data;
		delete t;
	}
	return x;
}

void LinkListStack::display()
{
	Node* t = top;
	if (isEmpty())
	{
		cout <<"Stack is Empty\n";
	}
	else
	{
		while (t!=NULL )
		{
			cout << t->data<<endl;
			t = t->next;
		}
	}

	
}

char LinkListStack::atTop()
{
	return top->data;
}