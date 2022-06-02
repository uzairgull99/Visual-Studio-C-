#pragma once


#include <string>
#include"bst.h"
#include <iostream>
using namespace std;

const int MAXSIZE = 10;
class Stack {
private:
	int top;
public:
	BSTNode stack[MAXSIZE];

	Stack()
	{
		top = -1;
	}

	void push(BSTNode n)
	{

		if (top == MAXSIZE - 1)
		{
			cout << "Stack is FULL/ OverFlow, Your value is not Pushed\n";

		}
		else
		{
			top++;
			stack[top] = n;
		}
	}

	BSTNode pop()
	{
		
		if (top == -1)
		{
			cout << "UnderFlow:\n";
		}
		else
		{
			
			//cout << "Value removed From Stack is: " << stack[top].getValue() << endl;
			return stack[top];
			top--;

		}
	}

	/*void atTop()
	{
		if (top == -1)
		{
			cout << "UnderFlow:\n";
		}
		else
		{
			cout << "Value at the top of Stack is: " << stack[top] << endl;
		}

	}*/

	/*void display()
	{
		for (int i = top; i >= 0; i--)
		{
			cout << "Dispaly: "<<stack[top].getValue() << endl;
			top--;
		}

		for (int i = 0; i <= top; i++)
		{

			top++;
		}

	}*/


	bool isEmpty()
	{
		if (top == -1)
		{
			return true;
		}
	}
};