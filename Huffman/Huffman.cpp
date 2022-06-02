// Huffman.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

//int main()
//{
//    std::cout << "Hello World!\n";
//}
//class HeapClass {
//private:
//	int totalSize;
//	int currentSize;
//	Node** array;
//public:
//	HeapClass()
//	{
//		totalSize = 1;
//		currentSize = 0;
//		*array = new Node[totalSize];
//	}
//
//
//	HeapClass* createHeap();
//	HeapClass* swap();
//	HeapClass* heapify();
//	bool isSizeOne();
//	HeapClass insertinHeap();
//	HeapClass deleteMin();
//
//
//};
//class Heap {
//public:
//	int* a;
//	int size;
//	int flag;
//	Heap()
//	{
//		size = 1;
//		a = new int[size];
//	}
//	Heap(int size)
//	{
//		this->size = size;
//		a = new int[size];
//		flag = 0;
//	}
//
//
//	void createHeap(int A[], int size);
//	void display();
//	int deleteNode(int);
//	void insertInHeap(int n);
//
//
//};
//
//void Heap::display()
//{
//	for (int i = 1; i < size; i++)
//	{
//		cout << a[i] << " ";
//	}
//}
//
//void Heap::createHeap(int A[], int size)
//{
//	this->size = size;
//	a = new int[size];
//
//
//	for (int i = 0; i < size; i++)
//	{
//
//		a[i] = A[i];
//	}
//
//	for (int i = 1; i <= size; i++)
//	{
//
//		insertInHeap(i);
//	}
//
//}
//
//void Heap::insertInHeap(int n)
//{
//	int temp = a[n];
//	int i = n;
//
//	while (i > 0 && temp < a[i / 2])
//	{
//		a[i] = a[i / 2];
//		i = i / 2;
//	}
//	a[i] = temp;
//	flag++;
//}
//
//
//int Heap::deleteNode(int size)
//{
//	int  j, i, temp = 0;
//
//	int val = a[1];
//
//	a[1] = a[size];
//
//
//	i = 1;
//	j = 2 * i;
//
//	while (j < size - 1)
//	{
//		if (a[j + 1] < a[j])
//		{
//			j = j + 1;
//		}
//
//		if (a[i] > a[j])
//		{
//			temp = a[i];
//			a[i] = a[j];
//			a[j] = temp;
//
//			i = j;
//			j = 2 * j;
//		}
//		else
//			break;
//
//	}
//	a[size] = 0;
//	flag--;
//	return val;
//}



//void characterCount()
//{
//	const int size = 100;
//	ifstream obj;
//	obj.open("file.txt");
//
//	char* array = new char[size];
//	int* freq = new int[size];
//
//	char ch;
//	int count = 0;
//
//	while (obj >> ch)
//	{
//		array[count] = ch;
//		count++;
//	}
//
//
//	for (int i = 0; i < size; i++)
//	{
//		freq[i] = 1;
//
//		for (int j = i + 1; j < size; j++)
//		{
//			if (array[i] == array[j])
//			{
//				freq[i] = freq[i] + 1;
//				array[j] = '0';
//			}
//		}
//	}
//
//
//	List list;
//	Node** A = new Node * [count];
//	cout << "\t\tFrequency Table:\n";
//
//	cout << "Character \t Frequency:\n"; Sleep(300);
//
//
//	for (int i = 0; i < count; i++)
//	{
//
//		if (array[i] != ' ' && array[i] != '0')
//		{
//			cout << "  " << array[i] << "\t\t\t" << freq[i] << endl;
//			A[i] = new Node(array[i], freq[i]);
//			//list.sortedInsert(new Node(array[i], freq[i]));
//
//		}
//
//	}
//	list.createList(*A, count);
//	list.display();
//
//}