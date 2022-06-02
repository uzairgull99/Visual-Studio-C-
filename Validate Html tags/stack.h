
#pragma once
#include<iostream>
#include <string>
using namespace std;

class Node {
private:
	string data;
public:

	Node* nextLink = NULL;

	Node()
	{
		data=" ";
	}

	Node(string d)
	{
		data = d;
	}

	void setData(string d)
	{
		data = d;
	}

	string getData()
	{
		return data;
	     
	}

};



class Stack
{
private:
	Node* top;
public:
	Stack()
	{
		top = NULL;
	}

	void push(Node* n)
	{
		Node* newNode = new Node;
		newNode->setData(n->getData());
		newNode->nextLink = top;
		top = newNode;
		
	}


	Node pop()
	{
		
		

		if (top == NULL)
		{
			cout << "Stack is Empty:\n";
		}
		else
		{
			Node* temp;
			temp = top;
			top = top->nextLink;
			return temp->getData();
			delete temp;	
		}
	}


	void display()
	{

		Node* temp;
		temp = top;
		if (temp == NULL)
		{
			cout << "Stack is Empty:\n";
		}
		else
		{
			while (top != NULL)
			{

				cout << temp->getData();
				temp = temp->nextLink;

			}
		}
	}

	

	bool isEmpty()
	{
		
		if (top == NULL)
		{
			return true;
		}
		
	}

};


//#pragma once
//#include<iostream>
//#include<string>
//using namespace std;
//#define MAXSIZE 4
//
//class Stack {
//private:
//	int top;
//public:
//	string stack[MAXSIZE];
//	Stack()
//	{
//		top = -1;
//	}
//
//	void push(string n)
//	{
//
//		if (top == MAXSIZE - 1)
//		{
//			cout << "Stack is FULL/ OverFlow, Your value is not Pushed\n";
//
//		}
//		else
//		{
//			top++;
//			stack[top] = n;
//		}
//	}
//
//	string pop()
//	{
//		string name;
//		if (top == -1)
//		{
//			cout << "UnderFlow:\n";
//		}
//		else
//		{
//		     name = stack[top];
//			//cout << "Value removed From Stack is: " << name << endl;
//			top--;
//			return name;
//		}
//	}
//
//	void atTop()
//	{
//		if (top == -1)
//		{
//			cout << "UnderFlow:\n";
//		}
//		else
//		{
//			cout << "Value at the top of Stack is: " << stack[top] << endl;
//		}
//
//	}
//
//	void display()
//	{
//		for (int i = top; i >= 0; i--)
//		{
//			cout << stack[top] << endl;
//			top--;
//		}
//	}
//};
//
