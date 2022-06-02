#pragma once
#include <iostream>
#include <string>
using namespace std;

class Node {
private:
	string data;
	Node* nextPtr;
public:
	Node()
	{
		data = "";
		nextPtr = NULL;
	}
	Node(string data)
	{
		this->data = data;
		nextPtr = NULL;
	}
	void setData(string data)
	{
		this->data = data;
	}
	string getData()
	{
		return data;
	}
	void setNextPtr(Node* nextPtr)
	{
		this->nextPtr = nextPtr;
	}
	Node* getNextPtr()
	{
		return nextPtr;
	}

	
};


class List {
private:
	Node* headPtr;
	Node* lastPtr;
public:
	List()
	{
		headPtr = NULL;
		lastPtr = NULL;
	}

	~List()
	{

	}
	void insertAtStart(Node* insertNode)
	{
		Node* newNode;
		newNode = insertNode;

		if (headPtr == NULL)
		{
			headPtr=lastPtr=newNode;
			newNode->setNextPtr(NULL);
		}
		else
		{
			newNode->setNextPtr(headPtr);
			headPtr = newNode;
		}

	}

	void insertAtEnd(Node* insertNode)
	{
		Node* newNode;
		newNode = insertNode;

		if (isEmpty())
		{
			headPtr = lastPtr=newNode;
		}
		else
		{
			Node* lptr;
			lptr = headPtr;
			while (lptr->getNextPtr() != NULL)
			{
				lptr = lptr->getNextPtr();
			}

			lastPtr->setNextPtr(newNode);
			lastPtr = newNode;
			//rptr->setNextPtr(NULL);
		}
	}


	/*void deleteAtStart(Node* node)
	{
		Node* searchNode;
		searchNode = headPtr;

		if (isEmpty())
		{
			cout << "List Is Empty" << endl;

		}

		else if (searchNode->getData() == node->getData())
		{

			cout << "Node Found" << endl;
			Node* temp = searchNode->getNextPtr();
			headPtr = temp;
			delete searchNode;
		}
		else
			cout << "Your Node is Not at the Start of List" << endl;
	}*/

	void deleteFromStart()
	{
		if (isEmpty())
		{
			cout << "List is Empty" << endl;
		}
		else
		{
			Node* temp;
			temp = headPtr;
			headPtr = headPtr->getNextPtr();
			delete temp;
		}
	}

	void deleteFromEnd()
	{
		if (isEmpty())
		{
			cout << "List is Empty" << endl;
		}
		else
		{
			Node* tempptr;
			Node* currentPtr=headPtr;
			tempptr = lastPtr;
			while (currentPtr->getNextPtr()!=lastPtr)
			{
				currentPtr= currentPtr->getNextPtr();	
			}

			lastPtr = currentPtr;
			currentPtr->setNextPtr(NULL);
			delete tempptr;	
		}
	}

	void display()
	{
		Node* dPtr;
		dPtr = headPtr;
		while (dPtr->getNextPtr()!= NULL)
		{
			cout << dPtr->getData() << endl;
			dPtr=dPtr->getNextPtr();
		}
		cout << dPtr->getData()<<endl;
		cout << "------------------------------------------\n";
	}

	bool isEmpty()
	{
		if (headPtr == NULL)
		{
			return true;
		}
		else
		{
			return false;
		}
			
	}

	void updateData(Node oldData, Node* newData)
	{
		Node* ptr;
		ptr = headPtr;
		while (ptr->getNextPtr() != NULL)
		{
			{
				if (ptr->getData() == oldData.getData())
				{
					ptr->setData(newData->getData());
				}
				else if(NULL)
				{
					cout << "Node not Found";
				}

			}
			
			ptr = ptr->getNextPtr();
		}
	}


	void search(Node search)
	{
		Node* ptr;
		ptr = headPtr;
		int num=0;
		while (ptr->getNextPtr() != NULL)
		{
			num++;
			if (ptr->getData() == search.getData())
			{
				cout << "Node #" << num<<":"<<"whose Key Value is "<<ptr->getData()<<endl;
			}
			ptr = ptr->getNextPtr();

		}
	}

	void numberOfNodes(Node key)
	{
		Node* ptr;
		ptr = headPtr;
		int num = 0;
		while (ptr->getNextPtr() != NULL)
		{
			
			if (ptr->getData() == key.getData())
			{
				num++;
			}
			ptr = ptr->getNextPtr();

		}
		cout << "Number of Nodes with " << key.getData() << " Value are: " << num<<endl;
	}
	
};