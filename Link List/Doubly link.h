//#pragma once
//#include <string.h>
//#include<iostream>
//using namespace std;
////class Node
////{
////private:
////	int data;
////	Node *next;
////	Node* previous;
////public:
////	// Default Constructor
////
////	Node()
////	{
////		next = NULL;
////		previous = NULL;
////	}
////
////	//Parametrized Contructor
////
////	Node(int d)
////	{
////		data = d;
////		next = NULL;
////		previous = NULL;
////	}
////
////	void setData(int d)
////	{
////		data = d;
////	}
////
////	int getData()
////	{
////		return data;
////	}
////
////	void setPre(Node* ptr)
////	{
////		previous= ptr;
////	}
////	 
////	Node* getPre()
////	{
////		return previous;
////	}
////
////	void setNext(Node* ptr)
////	{
////		next = ptr;
////	}
////
////	Node* getNext()
////	{
////		return next;
////	}
////
////};
////
////class Doubly 
////{
////private:
////	Node* head;
////	Node* tail;
////public:
////	Doubly()
////	{
////		head = NULL;
////		tail = NULL;
////	}
////	void insertion(Node* n)
////	{
////		Node* newNode;
////		newNode = n;
////		if (head = NULL)
////		{
////			head = newNode;
////			newNode->setPre(NULL);
////			newNode->setNext(NULL);
////			newNode->setData(n->getData());
////			tail = newNode;
////		}
////
////	}
////};
//
//class Node
//{
//	
//private:
//	Node* nextNodeAddress;
//	Node* previousNodeAddress;
//	int data;
//
//public:
//	Node()
//	{
//		nextNodeAddress = NULL;
//		previousNodeAddress = NULL;
//	}
//	Node(int d)
//	{
//		data = d;
//		nextNodeAddress = NULL;
//		previousNodeAddress = NULL;
//	}
//	Node* getNextNodeAddress()
//	{
//		return nextNodeAddress;
//	}
//	Node* getPreviosNodeAddress()
//	{
//		return previousNodeAddress;
//	}
//	void setNextNodeAddress(Node* nextNodeAddress)
//	{
//		this->nextNodeAddress = nextNodeAddress;
//	}
//	void setPreviosNodeAddress(Node* previousNodeAddress)
//	{
//		this->previousNodeAddress = previousNodeAddress;
//	}
//
//	int getData()
//	{
//		return data;
//	}
//	//destructor
//	~Node() = default;
//
//};
//
//
//class DoublyLinkedList
//{
//private:
//	Node* head;
//public:
//	DoublyLinkedList()
//	{
//		head = NULL;
//	}
//	~DoublyLinkedList()
//	{
//
//	}
//	void insertionAtTail(Node* n)
//	{
//		Node* newNodePtr = n;
//		if (head == NULL)
//		{
//			head = newNodePtr;
//		}
//		else
//		{
//			Node* rptr = head;
//			while (rptr->getNextNodeAddress() != NULL && rptr->getPreviosNodeAddress() != NULL)
//			{
//				rptr = rptr->getNextNodeAddress();
//			}
//			rptr->setPreviosNodeAddress(newNodePtr);
//			head = newNodePtr;
//		}
//	}
//
//	void display()
//	{
//		Node* ptr=head;
//		
//		while (ptr->getNextNodeAddress() != NULL && ptr->getPreviosNodeAddress() != NULL)
//		{
//			cout << ptr->getData() << endl;
//			ptr->getNextNodeAddress();
//		}
//		cout << ptr->getData() << endl;
//	}
//};