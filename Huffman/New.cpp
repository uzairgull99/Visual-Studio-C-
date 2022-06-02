//
//#pragma once
//
//#include<iostream>
//#include<fstream>
//#include <string>
//#include <stack>
//#include<queue>
//using namespace std;
//
//const int MAX=100;
//
//class QueueNode {
//public:
//	char data;
//	int freq;
//	QueueNode* left, * right;
//};
//
//
//class Queue {
//public:
//	int front, rear;
//	int capacity;
//	QueueNode** array;
//};
//
//QueueNode* newNode(char data, unsigned freq)
//{
//	QueueNode* temp = new QueueNode[(sizeof(QueueNode))];
//	temp->left = temp->right = NULL;
//	temp->data = data;
//	temp->freq = freq;
//	return temp;
//}
//
//Queue* createQueue(int capacity)
//{
//	Queue* queue = new Queue[(sizeof(Queue))];
//	queue->front = queue->rear = -1;
//	queue->capacity = capacity;
//	queue->array = new QueueNode * [(queue->capacity
//		* sizeof(QueueNode*))];
//	return queue;
//}
//
//int isSizeOne(Queue* queue)
//{
//	return queue->front == queue->rear
//		&& queue->front != -1;
//}
//
//int isEmpty(Queue* queue) { return queue->front == -1; }
//
//int isFull(Queue* queue)
//{
//	return queue->rear == queue->capacity - 1;
//}
//
//void enQueue(Queue* queue, QueueNode* item)
//{
//	if (isFull(queue))
//		return;
//	queue->array[++queue->rear] = item;
//	if (queue->front == -1)
//		++queue->front;
//}
//
//
//QueueNode* deQueue(Queue* queue)
//{
//	if (isEmpty(queue))
//		return NULL;
//	QueueNode* temp = queue->array[queue->front];
//	if (queue->front
//		== queue
//		->rear) // If there is only one item in queue
//		queue->front = queue->rear = -1;
//	else
//		++queue->front;
//	return temp;
//}
//
//
//QueueNode* getFront(Queue* queue)
//{
//	if (isEmpty(queue))
//		return NULL;
//	return queue->array[queue->front];
//}
//
//
//QueueNode* findMin(Queue* firstQueue, Queue* secondQueue)
//{
//	
//	if (isEmpty(firstQueue))
//		return deQueue(secondQueue);
//
//	
//	if (isEmpty(secondQueue))
//		return deQueue(firstQueue);
//
//	
//	if (getFront(firstQueue)->freq
//		< getFront(secondQueue)->freq)
//		return deQueue(firstQueue);
//
//	return deQueue(secondQueue);
//}
//
//
//int isLeaf(QueueNode* root)
//{
//	return !(root->left) && !(root->right);
//}
//
//void printArr(int arr[], int n)
//{
//	int i;
//	for (i = 0; i < n; ++i)
//		cout << arr[i];
//	cout << endl;
//}
//
//QueueNode* buildHuffmanTree(char data[], int freq[],int size)
//{
//	QueueNode* left, * right, * top;
//
//	
//	Queue* firstQueue = createQueue(size);
//	Queue* secondQueue = createQueue(size);
//
//	
//	for (int i = 0; i < size; ++i)
//		enQueue(firstQueue, newNode(data[i], freq[i]));
//
//	
//	while (
//		!(isEmpty(firstQueue) && isSizeOne(secondQueue))) {
//	
//		left = findMin(firstQueue, secondQueue);
//		right = findMin(firstQueue, secondQueue);
//
//		
//		top = newNode('$', left->freq + right->freq);
//		top->left = left;
//		top->right = right;
//		enQueue(secondQueue, top);
//	}
//
//	return deQueue(secondQueue);
//}
//
//
//void printCodes(QueueNode* root, int arr[], int top)
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
//		printCodes(root->right, arr,top + 1);
//	}
//
//	
//	if (isLeaf(root)) {
//		cout << root->data << ": ";
//		printArr(arr, top);
//	}
//}
//
//class tableNode {
//
//public:
//	char data;
//	int freq;
//	tableNode* left;
//	tableNode* right;
//	int size;
//
//	tableNode()
//	{
//		data = ' ';
//		freq = 0;
//		left = NULL;
//		right = NULL;
//		size = 0;
//	}
//
//	tableNode(char d, int fre, tableNode* l, tableNode* r)
//	{
//		data = d;
//		freq = fre;
//		left = l;
//		right = r;
//		size = 0;
//	}
//
//
//	void setData(char d, int fre)
//	{
//		data = d;
//		freq = fre;
//	}
//
//
//};
//void HuffmanCodes(int size,tableNode *t)
//{
//	
//	
//	char* data=new char[size];
//	int* freq = new int[size];
//	for (int i = 0; i < size; i++)
//	{
//		data[i] = t[i].data;
//		freq[i] = t[i].freq;
//	}
//	 //int size1 = sizeof(data) / sizeof(data[0]);
//	
//	
//	
//	QueueNode* root = buildHuffmanTree(data, freq, size);
//	int arr[MAX], top = 0;
//	printCodes(root, arr, top);
//}
//
//
//
//
//
//
//
//
//
//void printArray(int* arr, int top)
//{
//	for (int i = 0; i < top; i++)
//	{
//		cout << arr[i];
//	}
//	cout << endl;
//}
//
//void PrintCodes(tableNode* root, int arr[], int top)
//{
//	if (root->left != NULL)
//	{
//		arr[top] = 0;
//		PrintCodes(root->left, arr, top + 1);
//	}
//
//	if (root->right != NULL)
//	{
//		arr[top] = 1;
//		PrintCodes(root->right, arr, top + 1);
//	}
//
//	if (root->left == NULL && root->right == NULL)
//	{
//		cout << root->data << " ";
//		printArray(arr, top);
//	}
//}
//
//
//tableNode* huffman(tableNode* t, int size)
//{
//	tableNode* top, * left, * right;
//	int i = size;
//	i = i - 1;
//	left = &t[i];
//	left = new tableNode;
//	left->data = t[i].freq;
//	left->freq = t[i].freq;
//	left->left = NULL;
//	left->right = NULL;
//
//	i = i - 1;
//	right = &t[i];
//	right = new tableNode;
//	right->data = t[i].freq;
//	right->freq = t[i].freq;
//	right->left = NULL;
//	right->right = NULL;
//
//
//	top = new tableNode('-', left->freq + right->freq, left, right);
//	/*top->data = '*';
//	top->freq = left->freq + right->freq;
//	top->left = left;
//	top->right = right;*/
//
//	i = size - 1;
//	t[i] = *top;
//	
//	
//	return t;
//}
//
//
//void swap(tableNode& t, tableNode& t2)
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
//void sortArray(tableNode *table, int size)
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
//
//
//
//	/*for (int i = 0; i < t->size; i++)
//	{
//		cout << t[i].data;
//		cout << t[i].freq << " ";
//	}
//
//
//	cout << endl;
//	for (int i = 0; i < t->size; i++)
//	{
//		cout << t[i].data;
//		cout << t[i].freq << " ";
//	}*/
//
//
//}
//
//
//tableNode* removeEndingZeros(tableNode table[], int size)
//{
//	int index = -1;
//	for (int i = 0; i < size; i++)
//	{
//		if (table[i].freq == 0)
//		{
//			index = i;
//			break;
//		}
//	}
//
//	int start = index;
//
//	tableNode* NewtableArray = new tableNode[start];
//
//	for (int i = 0; i < start; i++)
//	{
//		NewtableArray[i] = table[i];
//
//	}
//	NewtableArray->size = start;
//	HuffmanCodes(start,NewtableArray );
//	return NewtableArray;
//
//}
//
//
//tableNode* callHuffman(tableNode*t)
//{
//
//
//	int arr[10];
//	int top = 0;
//	tableNode* t1 = new tableNode;
//	cout << "\t\t--------------Huffman Encoding Procees begins------------\n\n";
//	cout << "\t--------------Selecting minimaum Node and combine it with second minimum Node------------\n";
//	cout << "------------------------------------------\n";
//	
//	for (int i = t->size; i > 0; i--)
//	{
//		
//		cout <<"\n\t\t\t-----------------"<< t->size-i<< " th "<< "pass" << "-----------------\n\n";
//		cout << "\t\t\t\tCharacter:	    Frequency\n";
//		cout << "\t\t\t------------------------------------------\n";
//
//		for (int j = 0; j < t->size; j++)
//		{
//
//			
//			cout << "\t\t\t\t"<< t[j].data;
//			cout << "			 " << t[j].freq << "\n";
//		}
//		cout << endl;
//		t1= huffman(*&t, i);
//		sortArray(t, i);
//		
//		
//		
//	}
//
//	PrintCodes(&t1[0], arr, top);
//	
//	return t;
//	
//
//
//	
//}
//
//
//
//
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
//	for (int i = 0; i < count; i++)
//	{
//		freq[i] = 1;
//
//		for (int j = i + 1; j <= size; j++)
//		{
//
//			if (array[i] == '0')
//			{
//				freq[i] = 0;
//				break;
//			}
//
//			if (array[i] == array[j])
//			{
//
//				freq[i] = freq[i] + 1;
//				array[j] = '0';
//			}
//		}
//	}
//	
//
//	tableNode* table = new tableNode[count];
//
//	for (int i = 0; i < count; i++)
//	{
//		if ((array[i] != ' ' && array[i] != '0') && freq[i] != 0)
//		{
//			table[i].setData(array[i], freq[i]);
//
//		}
//	}
//
//
//	cout << endl;
//
//	sortArray(table, count);
//	tableNode* t = removeEndingZeros(table, count);
//
//	
//	cout << "\t\t\t--------------Frequency Table------------\n\n";
//	
//	cout << "\t\t\t\tCharacter:	      Frequency\n";
//	cout << "\t\t\t------------------------------------------\n";
//	for (int i = 0; i < t->size; i++)
//	{
//		cout << "\t\t\t\t" << t[i].data;
//		cout << "\t\t\t" << t[i].freq << "\n";
//	}
//	cout << "\n************************************************************************************************************************\n\n";
//	cout << endl;
//
//	callHuffman(&*t);
//
//	/*for (int i = 0; i < t->size; i++)
//	{
//		cout << t1[i].data;
//		cout << t1[i].freq << " ";
//	}*/
//
//	
//	cout << endl;
//}
//
//
//
//int main()
//{
//
//	characterCount();
//
//
//}
//
//
