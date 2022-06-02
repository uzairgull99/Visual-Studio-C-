//#pragma once
//
//
//
//#include<iostream>
//#include <string>
//using namespace std;
//
//
//
//
//
//template<class T>
//class priority_Queue 
//{
//private:
//	class PQNode {
//	public:
//		T info;
//		int priority;
//		PQNode* next;
//	};
//
//	PQNode* front;
//	unsigned int size;
//public:
//	priority_Queue() { front = NULL; size = 0; }
//	~priority_Queue();
//	unsigned int getSize() { return size; }
//	void enqueue(T data);
//	T top();
//	void dequeue();
//	void display();
//};
//
//
//
//template<class T> 
//priority_Queue <T> :: ~priority_Queue()
//{
//	PQNode* current;
//	while (front != NULL)
//	{
//		current = front->next;
//		delete front;
//		front = current;
//	}
//}
//
//
//template<class T>
//void priority_Queue <T> ::enqueue(T data)
//{
//	PQNode* current, * newNode;
//	newNode = new PQNode;
//	newNode->info = data;
//	newNode->priority = data->freq;
//	newNode->next = NULL;
//	if (front == NULL || data->freq < front->priority)
//	{
//		newNode->next = front;
//		front = newNode;
//	}
//	else
//	{
//		current = front;
//		while (current->next != NULL && data->freq > current->next->priority)
//		{
//			current = current->next;
//		}
//		newNode->next = current->next;
//		current->next = newNode;
//		
//	}
//	size++;
//}
//
//
//template<class T>
//void priority_Queue<T> ::dequeue()
//{
//	PQNode* current;
//	if (front == NULL)
//	{
//		cout << "Priorty queue is Empty\n";
//	}
//	else
//	{
//		
//		current = front;
//		front = front->next;
//		delete (current);
//		size--;
//	}
//	
//	
//}
//
//template<class T>
//void priority_Queue<T>::display()
//{
//	
//	
//	for (PQNode*t = front; t!=NULL; t=t->next)
//	{
//		
//		
//		
//		cout << "\t\t"<<t->info->data << "\t\t\t   " << t->info->freq<<""<<endl;
//			
//	}
//	cout << endl;
//	
//	
//}
//
//template<class T>
//T priority_Queue<T> ::top()
//{
//	if (front != NULL)
//	{
//		return front->info;
//	}
//	
//}