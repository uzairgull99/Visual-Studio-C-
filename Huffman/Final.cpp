//
//
//#pragma once
//
//#include<iostream>
//#include<fstream>
//#include <string>
//#include<windows.h>
//#include<queue>
//using namespace std;
//
//
////class tableNode {
////
////public:
////	char data;
////	int freq;
////	int size;
////		
////
////	tableNode()
////	{
////		data = ' ';
////		freq = 0;
////		size = 0;
////		
////	}
////
////	tableNode(char d, int fre)
////	{
////		data = d;
////		freq = fre;
////		
////	}
////
////	
////
////	void setData(char d, int fre)
////	{
////		data = d;
////		freq = fre;
////	}
////
////	
////
////	};
//
//
//
//class ExtraNode
//{
//public:
//	char data;
//	string code;
//
//	ExtraNode()
//	{
//		data = ' ';
//		code = " ";
//
//	}
//
//	ExtraNode(char d, string c)
//	{
//		data = d;
//		code = c;
//
//	}
//};
//
//class Node {
//public:
//	char data;
//	int freq;
//	//Node* next; 
//	Node* left;
//	Node* right;
//	int size;
//	Node()
//	{
//		data = ' ';
//		freq = 0;
//		//next = NULL;
//		left = NULL;
//		right = NULL;
//	}
//
//	Node(char data, int freq)
//	{
//		this->data = data;
//		this->freq = freq;
//		//next = NULL;
//		left = NULL;
//		right = NULL;
//	}
//
//	Node(Node* left, Node* right,int fre, char c)
//	{
//		data = c;
//		freq = fre;
//		this->left = left;
//		this->right = right;
//	}
//
//	void setData(char d, int fre)
//			{
//				data = d;
//				freq = fre;
//				left = NULL; 
//				right = NULL;
//			}
//
//	
//	
//};
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
////Node**& removeEndingZeros(Node**& table, int size)
////{
////	int index = -1;
////	for (int i = 0; i < size; i++)
////	{
////		if (table[i]->freq == 0)
////		{
////			index = i;
////			break;
////		}
////	}
////
////	int start = index;
////	
////
////
////	
////	Node** tableArray = new Node*[start];
////
////	for (int i = 0; i < start; i++)
////	{
////		*tableArray[i] = *table[i];*
////
////
////	}
////
////	/*for (int i = 0; i < size-index; i++)
////	{
////		cout << tableArray[i].data;
////		cout << tableArray[i].freq << " ";
////	}*/
////	
////	tableArray.size = start;
////	return *tableArray;
////
////}
//
//void swap(Node& t, Node& t2)
//{
//	int temp = 0;
//	char temp1;
//
//	temp1 = t.data;
//	t.data = t2.data;
//	t2.data = temp1;
//
//	temp = t.freq;
//	t.freq = t2.freq;
//	t2.freq = temp;
//}
//
//void sortArray(Node table[], int size)
//{
//	int k = 0;
//	for (int i = 0; i < size - 1; i++)
//	{
//		k = i;
//		for (int j = i; j < size; j++)
//		{
//
//			if (table[j].freq > table[k].freq)
//			{
//				k = j;
//
//			}
//		}
//		swap(table[i], table[k]);
//	}
//}
//
//Node* findMin(queue<Node*> *q1, queue<Node*> *q2)
//{
//	
//	if (q1->empty())
//	{
//		 return q2->front();
//		 q2->pop();
//	}
//
//	if (q2->empty())
//	{
//		return q1->front();
//		q1->pop();
//	}
//
//	if (q1->front()->freq < q2->front()->freq)
//	{
//		return q1->front();
//		q1->pop();
//	}
//	else
//	{
//		return q2->front();
//		q2->pop();
//	}
//
//}
//
//Node* Huffman(int size,Node **t)
//{
//	queue<Node*> *q1=NULL,*q2=NULL;
//	Node* left=NULL, * right=NULL, * top=NULL;
//	
//	for (int i = 0; i < size; i++)
//	{
//		q1->push(t[i]);
//		
//	}
//
//
//
//	while (!q1->empty() && q2->size() != 1)
//	{
//		left= findMin(q1,q2);
//		right = findMin(q1, q2);
//		top = new Node(left, right, left->freq + right->freq, '*');
//		q2->push(top);
//	}
//	return q2->front();
//	q2->pop();
//
//	
//}
//
//
//int isLeaf(Node* root)
//{
//	return !(root->left) && !(root->right);
//}
//
//void printArr(int arr[], int n)
//{
//	
//	for (int i = 0; i < n; i++)
//		cout << arr[i];
//	cout << endl;
//}
//void printCodes(Node* root, int arr[], int top)
//{
//	
//	if (root->left) {
//		arr[top] = 0;
//		printCodes(root->left, arr, top + 1);
//	}
//
//	
//	if (root->right) {
//		arr[top] = 1;
//		printCodes(root->right, arr, top + 1);
//	}
//
//	if (isLeaf(root)) {
//		cout << root->data << ": ";
//		printArr(arr, top);
//	}
//}
//
//
//void HuffmanCodes(int size,Node **t)
//{
//	Node* root=NULL;
//	root=Huffman(size, t);
//
//	int arr[7], top = 0;
//	printCodes(root, arr, top);
//}
//
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
//	Node **table=new Node*[count];
//	for (int i = 0; i < count; i++)
//	{
//		if (array[i] != ' ' && array[i] != '0')
//		{
//			table[i]->setData(array[i], freq[i]);
//
//		}
//	}
//	sortArray(*table, count);
//	/*Node **t=removeEndingZeros(table, count);
//	
//	for (int i = 0; i <*t->size;i++)
//	{
//		
//			cout <<t[i].data;
//			cout << t[i].freq << " ";
//			
//	}*/
//
//	HuffmanCodes(7, table);
//
//
//	//huffman(array, freq, size,t);
//}
//
//
//
//
//int main()
//{
//	characterCount();
//}
