#pragma once
#include<iostream>
#include<string>
using namespace std;

class DoublyNode
{
private:
	string data;
	DoublyNode* nextPtr;
	DoublyNode* previousPtr;
public:
	DoublyNode()
	{
		nextPtr = NULL;
		previousPtr = NULL;
	}
	DoublyNode(string data)
	{
		this->data = data;
		nextPtr = NULL;
		previousPtr = NULL;
	}
	~DoublyNode()
	{

	}

	void setData(string data)
	{
		this->data = data;
	}

	string getData()
	{
		return this->data;
	}

	void setNextPtr(DoublyNode *ptr)
	{
		nextPtr = ptr;
	}
	DoublyNode* getNextPtr()
	{
		return nextPtr;
	}
	void setPreviousPtr(DoublyNode* ptr)
	{
		previousPtr = ptr;
	}

	DoublyNode*getPreviousPtr()
	{
		return previousPtr;
	}

	
};



class DoublyList {
private:
	DoublyNode* headPtr;
	DoublyNode* tailPtr;
public:
	DoublyList()
	{
		headPtr = NULL;
		tailPtr = NULL;
	}

	

	void InsertAtStart(DoublyNode* node)
	{
		DoublyNode* newNode;
		newNode = node;
		if (headPtr == NULL)
		{
			headPtr = newNode;
			newNode->setNextPtr(NULL);
			newNode->setPreviousPtr(headPtr);
		}
		else
		{
			DoublyNode* setPtr;
			setPtr = headPtr;
			headPtr = newNode;
			newNode->setNextPtr(setPtr);
			
			//newNode->setNextPtr(headPtr->getNextPtr());
			//newNode->setPreviousPtr(headPtr);
			//headPtr->setNextPtr(newNode);
			////newNode->getNextPtr()->setPreviousPtr(newNode);
		}
	}


	void InsertAtEnd(DoublyNode* node)
	{
		DoublyNode* newNode;
		newNode = node;
		if (headPtr == NULL)
		{
			headPtr = newNode;
			newNode->setNextPtr(NULL);
			newNode->setPreviousPtr(headPtr);

		}
		else
		{
			DoublyNode* setPtr;
			setPtr = headPtr;
			while (setPtr->getNextPtr())
			{
				setPtr = setPtr->getNextPtr();
			}
			setPtr = newNode;
			setPtr->setPreviousPtr(headPtr->getNextPtr());
			setPtr->setNextPtr(NULL);
		}

	}

	void deletionFromStart()
	{
		
		if (isEmpty())
		{
			cout << "List is Empty\n";
		}
		else
		{
			DoublyNode* temPptr;
			temPptr = headPtr;
			headPtr = headPtr->getNextPtr();
			delete temPptr;

		}
	}

	void deletionFromEnd()
	{

		if (isEmpty())
		{
			cout << "List is Empty\n";
		}
		else
		{
			

		}
	}

	void updateData(DoublyNode oldData, DoublyNode* newData)
	{
		DoublyNode* ptr;
		ptr = headPtr;
		while (ptr->getNextPtr() != NULL)
		{
			{
				if (ptr->getData() == oldData.getData())
				{
					ptr->setData(newData->getData());
				}
				else if (NULL)
				{
					cout << "Node not Found";
				}

			}

			ptr = ptr->getNextPtr();
		}
	}

	void search(DoublyNode search)
	{
		DoublyNode* ptr;
		ptr = headPtr;
		int num = 0;
		while (ptr->getNextPtr() != NULL)
		{
			num++;
			if (ptr->getData() == search.getData())
			{
				cout << "Node #" << num << ":" << "whose Key Value is " << ptr->getData() << endl;
			}
			ptr = ptr->getNextPtr();

		}
	}
	void display()
	{
		DoublyNode* dptr;
		dptr = headPtr;
		while (dptr->getNextPtr() != NULL)
		{
			cout << dptr->getData()<<endl;
			dptr = dptr->getNextPtr();
		}
		cout << dptr->getData();
		cout << endl;
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

};