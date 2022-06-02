//
//
//#include<iostream>
//#include<fstream>
//#include <string>
//#include<windows.h>
//#include<queue>
//using namespace std;
//
//class Node
//{
//public:
//	char ch;
//	int freq;
//	Node* left;
//	Node* right;
//
//	bool isLeaf()
//	{
//		if (left == NULL && right == NULL)
//			return true;
//		else return false;
//	}
//};
//
//class minHeap 
//{
//private:
//	Node* ptr;
//	int totalSize;
//	int currentSize;
//public:
//	minHeap()
//	{
//		this->currentSize = 0;
//		this->totalSize = 1;
//		ptr = new Node[totalSize];
//	}
//	
//
//	void createMinHeap(int capacity)
//	{
//		this->totalSize = capacity;
//		currentSize = 0;
//		ptr = new Node[totalSize];
//	}
//
//
//	void createHeap(char cha[],int freqe[])
//	{
//		for (int i = 0; i < totalSize; i++)
//		{
//			ptr[i].ch = cha[i];
//			ptr[i].freq = freqe[i];
//			ptr[i].left = NULL;
//			ptr[i].right = NULL;
//		}
//
//		for (int i = 2; i < totalSize; i++)
//		{
//			insert(ptr);
//			
//		}
//	}
//
//	void insert( Node *ptr)
//	{
//		currentSize++;
//		int i = currentSize-1;
//		int child=i;
//		
//		int parent=i/2;
//
//		int childData = ptr[i].freq;
//
//		while (i > 1 && childData < ptr[parent].freq)
//		{
//			ptr[child] = ptr[parent];
//			parent = i / 2;
//		}
//		ptr[parent].freq = childData;
//	}
//
//
//	Node* deleteFromHeap()
//	{
//		
//		Node* temp1 = ptr;
//		Node temp;
//		ptr[1] = ptr[currentSize];
//		currentSize--;
//		int root = 1, leftchild = 2 * root, rightchild=(2*root)+1;
//		while (leftchild < totalSize - 1)
//		{
//			if (ptr[rightchild].freq < ptr[leftchild].freq)
//			{
//				if (ptr[rightchild].freq < ptr[root].freq)
//				{
//					temp = ptr[root];
//					ptr[root] = ptr[rightchild];
//					ptr[rightchild] = temp;
//
//					root = leftchild;
//					leftchild = 2 * root;
//					rightchild = (2 * root) + 1;
//				}
//				else break;
//			}
//		}
//		return temp1;
//	}
//
//	bool isSizeOne()
//	{
//		if (currentSize == 1)
//			return true;
//		else return false;
//	}
//};
//
//
//class Heap {
//private:
//	int totalSize;
//	int currentSize;
//	Node** array;
//public:
//
//	Heap();
//	Heap(int size);
//	Node *createNode();
//	void buildHeapArray(char [],int []);
//	void buildHeap();
//	void heapify(int index);
//	void insertinHeap(int, Node*);
//	Node* deleteNode(int);
//	void print();
//};
//
//Node* Heap::createNode()
//{
//	Node* temp;
//	temp = new Node;
//	temp->ch = ' ';
//	temp->freq = -1;
//	temp->left = NULL;
//	temp->right = NULL;
//	return temp;
//}
//Heap::Heap()
//{
//	totalSize = 1;
//	currentSize = 0;
//	*array = new Node[totalSize];
//	
//
//}
//
//Heap::Heap(int size)
//{
//	totalSize = size;
//	currentSize = 0;
//	*array = createNode();
//	*array = new Node[size];
//
//}
//
//void Heap::buildHeapArray(char c[], int fre[])
//{
//	
//	array[0]->ch = ' ';
//	array[0]->freq = -1;
//	array[0]->left = NULL;
//	array[0]->right = NULL;
//
//	for (int i = 1; i < totalSize; i++)
//	{
//		array[i]->ch = c[i];
//		array[i]->freq = fre[i];
//		array[i]->left = NULL;
//		array[i]->right = NULL;
//	}
//}
//
//void Heap::heapify(int index)
//{
//	int smallest = index;
//	int l = 2 * index;
//	int r = (2 * index) + 1;
//
//	while (l <= totalSize && array[l]->freq < array[smallest]->freq)
//	{
//		l=smallest;
//	}
//	while (r <= totalSize && array[r]->freq < array[smallest]->freq)
//	{
//		r = smallest;
//	}
//
//	if (smallest != index)
//	{
//		Node* temp = array[smallest];
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
//void Heap::insertinHeap(int index, Node* value)
//{
//	currentSize++;
//	index = index + 1;
//	array[index] = value;
//	int i = index;
//	while (i > 1)
//	{
//		int parent = i / 2;
//		if (array[parent]->freq > array[i]->freq)
//		{
//			Node* temp = array[parent];
//			array[parent] = array[index];
//			array[index] = temp;
//			i = parent;
//		}
//		else return;
//	}
//}
//
//Node* Heap::deleteNode(int i)
//{
//	Node* temp = array[1];
//	array[1] = array[totalSize - 1];
//	totalSize--;
//	heapify(1);
//	return temp;
// }
//
//
//
//void Heap::print()
//{
//	for (int i = 0; i << totalSize; i++)
//	{
//		cout << array[i]->ch << " " << array[i]->freq << endl;
//	}
//}
//
//
//
//
//
//
//Node* buildHuffmanTree(char ch[],int fre[],int size)
//{
//	Node *left,  *right, *top=NULL;
//	
//
//	minHeap heap;
//	heap.createMinHeap(size);
//	heap.createHeap(ch, fre);
//
//	while (heap.isSizeOne())
//	{
//		left = heap.deleteFromHeap();
//		right = heap.deleteFromHeap();
//
//		top = new Node;
//		top->freq = left->freq + right->freq;
//		top->left = left;
//		top->right = right;
//		heap.insert(top);
//	}
//	
//	return heap.deleteFromHeap();
//}
//
//
//void printCodeArray(int arr[],int top)
//{
//	for (int i = 0; i < top; i++)
//	{
//		cout << arr[i] << " ";
//	}
//}
//
//
//void printCodes(Node* root,int arr[],int top)
//{
//	if (root->left)
//	{
//		arr[top] = 0;
//		printCodes(root->left, arr, top + 1);
//	}
//	if (root->right)
//	{
//		arr[top] = 0;
//		printCodes(root->right, arr, top + 1);
//	}
//	if (root->isLeaf())
//	{
//		cout << root->freq;
//		printCodeArray(arr,top);
//	}
//}
//
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
//	int freq[size];
//	char *array=new char [size];
//	char ch;
//	int count = 0;
//
//	while (obj>>ch)
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
//   cout << "Character \t Frequency:\n"; Sleep(300);
//	for (int i = 0; i<count; i++)
//	{
//
//		if (array[i] != ' ' && array[i] != '0')
//		{
//			cout << "  "<<array[i] << "\t\t\t" << freq[i]<<endl;
//		}
//		
//	}
//
//	Heap he(size);
//	he.buildHeapArray(array, freq);
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
//	/*Heap min;
//
//	int countArray[4] = { 0,0,0,0 };
//	
//	read(countArray);
//
//	min.createHeap(countArray, 4);
//	min.display();
//	for (int i = 4; i > 0; i--)
//	{
//		cout << endl << min.deleteNode(i) << endl;
//		min.display();
//	}*/
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
