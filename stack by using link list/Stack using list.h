#pragma once
#include<iostream>
#include <string>
using namespace std;

class Node {
private:
	string data;
public:

	Node* nextLink=NULL;

	Node()
	{
		data = "";
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
	void push(Node *n)
	{
		Node* newNode = new Node;
		newNode->setData(n->getData());
		newNode->nextLink=top;
		top = newNode;		
}

	
	void pop()
	{
		Node* temp;
		temp = top;
		if (top == NULL)
		{
			cout << "Stack is Empty:\n";
		}
		else
		{
			cout << "Value poped from Stack is: " << temp->getData() << endl;
			top = top->nextLink;
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
			while (temp != NULL)
			{
				
				cout << temp->getData()<<endl;
				temp = temp->nextLink;
				
			}
		}
	}

};
