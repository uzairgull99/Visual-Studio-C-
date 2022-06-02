//#pragma once
//
//
//
//
//#include<iostream>
//#include<fstream>
//#include <string>
//#include<windows.h>
//#include<queue>
//using namespace std;
//
//
//
//
//
//class Heap {
//private:
//	int totalSize;
//	int currentSize;
//	int *array;
//public:
//
//	Heap();
//	Heap(int size);
//	int createNode();
//	void buildHeapArray(int[]);
//	void buildHeap();
//	void heapify(int index);
//	void insertinHeap(int, int);
//	int deleteNode(int);
//	void print();
//};
//
//
//Heap::Heap()
//{
//	totalSize = 1;
//	currentSize = 0;
//	array = new int[totalSize];
//
//
//}
//
//Heap::Heap(int size)
//{
//	totalSize = size;
//	currentSize = 0;
//	array = new int[size];
//
//}
//
//void Heap::buildHeapArray(int fre[])
//{
//
//	
//	array[0]= -1;
//	
//
//	for (int i = 1; i < totalSize; i++)
//	{
//		array[i] = fre[i];
//	}
//}
//
//void Heap::heapify(int index)
//{
//	int smallest = index;
//	int l = 2 * index;
//	int r = (2 * index) + 1;
//
//	while (l <= totalSize && array[l] < array[smallest])
//	{
//		l = smallest;
//	}
//	while (r <= totalSize && array[r] < array[smallest])
//	{
//		r = smallest;
//	}
//
//	if (smallest != index)
//	{
//		int temp = array[smallest];
//		array[smallest] = array[index];
//		array[index] = temp;
//		heapify(smallest);
//	}
//
//}
//void Heap::buildHeap()
//{
//	for (int i = totalSize / 2; i >= 1; i--)
//	{
//		heapify(i);
//		currentSize++;
//	}
//}
//
//void Heap::insertinHeap(int index, int value)
//{
//	currentSize++;
//	index = index + 1;
//	array[index] = value;
//	int i = index;
//	while (i > 1)
//	{
//		int parent = i / 2;
//		if (array[parent]> array[i])
//		{
//			int temp = array[parent];
//			array[parent] = array[index];
//			array[index] = temp;
//			i = parent;
//		}
//		else return;
//	}
//}
//
//int Heap::deleteNode(int i)
//{
//	int temp = array[1];
//	array[1] = array[totalSize - 1];
//	totalSize--;
//	heapify(1);
//	return temp;
//}
//
//
//
//void Heap::print()
//{
//	for (int i = 0; i << totalSize; i++)
//	{
//		cout << array[i] << " " << array[i] << endl;
//	}
//}
//
//
//
//void characterCount()
//{
//	const int size = 100;
//	ifstream obj;
//	obj.open("file.txt");
//	int freq[size];
//	char* array = new char[size];
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
//	cout << "Frequency Table:\n";
//
//	cout << "Character \t Frequency:\n"; Sleep(300);
//	for (int i = 0; i < count; i++)
//	{
//
//		if (array[i] != ' ' && array[i] != '0')
//		{
//			cout << "  " << array[i] << "\t\t\t" << freq[i] << endl;
//		}
//
//	}
//
//	Heap he(size);
//	he.buildHeapArray(freq);
//	he.buildHeap();
//
//	he.print();
//
//
//}
//
//
//
//
//int main()
//{
//	
//
//
//	characterCount();
//
//
//
//
//}
//
//
