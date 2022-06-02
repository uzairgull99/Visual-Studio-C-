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
//
//using namespace std;
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
//	tableNode(char d,int fre)
//	{
//		data = d;
//		freq = fre;
//		left = NULL;
//		right = NULL;
//		size = 0;
//	}
//
//	tableNode(tableNode* left, tableNode* right)
//	{
//		data = '0';
//		freq = left->freq + right->freq;
//		this->left = left;
//		this->right = right;
//	}
//
//	void setData(char d,int fre)
//	{
//		data = d;
//		freq = fre;
//	}
//
//	void setTreeData(tableNode t)
//	{
//		data = t.data;
//		freq = t.freq;
//		left = t.left;
//		right = t.right;
//	}
//
//	bool operator<(const tableNode& x)const
//	{
//		return freq > x.freq;
//	}
//
//
//	void traverse(string code, ExtraNode array[])
//	{
//		//ofstream obj;
//		//obj.open("outputFile.txt", ios::app);
//
//		if (left != NULL)
//		{
//			left->traverse(code + '0', array);
//			right->traverse(code + '1', array);
//		}
//		else
//		{
//			static int count;
//			count++;
//			cout << "  " << data << "                       " << freq << "\t\t\t" << code << "\n";
//			array[count].data = data;
//			array[count].code = code;
//			//obj << "  " << data << "                       " << freq << "\t\t\t" << code << "\n";
//		}
//
//	}
//};
//
//
//
//class Node {
//public:
//	char data;
//	int freq;
//	//Node* next; 
//	Node* left;
//	Node* right;
//
//	Node()
//	{
//		data = ' ';
//		freq = 0;
//		//next = NULL;
//		left = NULL;
//		right = NULL;
//	}
//
//	Node(char data,int freq)
//	{
//		this->data = data;
//		this->freq = freq;
//		//next = NULL;
//		left = NULL;
//		right = NULL;
//	}
//
//	
//
//
//	Node(Node* left, Node* right)
//	{
//		data = '0';
//		freq = left->freq + right->freq;
//		this->left = left;
//		this->right = right;
//	}
//
//
//	bool operator<(const Node& x)const
//	{
//		return freq > x.freq;
//	}
//
//
//	void traverse(string code ,ExtraNode array[])
//	{
//		//ofstream obj;
//		//obj.open("outputFile.txt", ios::app);
//		
//		if (left != NULL)
//		{
//			left->traverse(code + '0',array);
//			right->traverse(code + '1',array);
//		}
//		else
//		{
//			static int count;
//			count++;
//			cout << "  " << data << "                       " << freq << "\t\t\t" << code << "\n";
//			array[count].data = data;
//			array[count].code = code;
//			//obj << "  " << data << "                       " << freq << "\t\t\t" << code << "\n";
//		}
//
//	}
//};
//
//tableNode*& removeLeadingZeros(tableNode*& table, int size)
//{
//	int index = -1;
//	for (int i = 0; i < size; i++)
//	{
//		if (table[i].freq != 0)
//		{
//			index = i;
//			break;
//		}
//	}
//	
//
//	size = size - index;
//	/*tableNode* tableArray = new tableNode[size];*/
//	
//	for (int i = 0; i < size; i++)
//	{
//		table[i] = table[index + i];
//		
//		
//	}
//
//	for (int i = 0; i < size; i++)
//	{
//		cout << table[i].data;
//		cout << table[i].freq << " ";
//	}
//
//
//	table->size = size;
//	return table;
//	
//	
//}
//
//
//void swap(tableNode &t, tableNode &t2)
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
//void sortArray(tableNode table[], int size)
//{
//	int k = 0;
//	for (int i = 0; i < size-1; i++)
//	{
//		k = i;
//		for (int j =i; j < size; j++)
//		{
//			
//			if (table[j].freq < table[k].freq)
//			{
//				k = j;
//
//			}
//		}
//		swap(table[i], table[k]);
//	}
//}
//
//
//
//
//
//
//
//
//void huffman(char ch[],int frequency[],tableNode table[],int size)
//{
//	priority_queue <Node>  pq;
//	priority_queue <tableNode>  PQ;
//	//sortArray(frequency, size);
//	
//	for (int i = 0; i < size; i++)
//	{
//		
//			PQ.push(table[i]);
//	
//	}
//
//	
//
//	while (PQ.size() > 1)
//	{
//		tableNode* l = new tableNode(PQ.top());
//		PQ.pop();
//		tableNode* r = new tableNode(PQ.top());
//		PQ.pop();
//
//		PQ.push(tableNode(l, r));
//	}
//	
//
//	ofstream  obj;
//	obj.open("outputfile.txt");
//	cout << "\n\n\n\t\t\tHuffman Encoding\n";
//	cout << "-------------------------------------------------------------\n";
//	cout << "Character:\t" << "\tFrequency: \t" << "\tHuffman Code: \t" << "\n";
//	cout << "-------------------------------------------------------------\n";
//	string code = " ";
//	ExtraNode *array=new ExtraNode[size];
//	tableNode n=PQ.top();
//	n.traverse(code,array);
//	cout << "-------------------------------------------------------------\n";
//
//
//
//	//ifstream obj1;
//	//obj1.open("file.txt");
//	//char *arr=new char[size];
//	//char var;
//	//int count=0;
//	//while ( obj1>>var)
//	//{
//	//	arr[count] = var;
//	//	count++;
//	//}
//
//	//ofstream out;
//	//out.open("outputfile.txt",ios::app);
//
//	//for (int i = 0; i < size; i++)
//	//{
//	//	
//	//	
//	//	cout << array[i].data << " " << array[i].code << "\n";
//
//	//	for (int j = 0; j < size; j++)
//	//	{
//	//		if ( arr[i]==array[j].data)
//	//		{
//	//			
//	//			out << array[j].code;
//	//		}
//
//	//	 }	
//	//}
//
//
//
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
//
////class List {
////public:
////	Node* first;
////
////	void sortedInsert(Node*);
////	void display();
////	void createList(Node [], int);
////	void sortList();
////
////};
////
////void List::display()
////{
////	Node* p = first;
////	while (p != NULL)
////	{
////		cout << p->data << " " << p->freq << endl;
////		p = p->next;
////	}
////}
////
////void List::createList(Node A[], int index)
////{
////	Node* last;
////	Node* t;
////	int i = 0;
////
////	t = new Node;
////	t->data = A[i].data;
////	t->freq = A[i].freq;
////	t->next = NULL;
////	//t->left = NULL;
////	//t->right = NULL;
////	first = t;
////	last = t;
////	for (int i = 1; i < index; i++)
////	{
////		t = new Node;
////		t->data = A[i].data;
////		t->freq = A[i].freq;
////		t->next = NULL;
////		//t->left = NULL;
////		//t->right = NULL;
////		last->next = t;
////		last = t;
////	}
////
////}
////void List::sortedInsert(Node* x)
////{
////	Node* t, *q = NULL,*p=first;
////
////	t = new Node;
////	t->data = x->data;
////	t->freq = x->freq;
////	t->next = NULL;
////	//t->left = NULL;
////	//t->right = NULL;
////
////	if (p == NULL)
////	{
////		first = t;
////	}
////	else
////	{
////		while (p != NULL && p->freq < t->freq)
////		{
////			p = q;
////			p = p->next;
////		}
////
////		if (p == first)
////		{
////			t->next = first;
////			first = t;
////		}
////		else
////		{
////			t->next = p;
////			q->next = t;
////		}
////	}
////}
////
////
////void List::sortList()
////{
////	Node* q, * p = first;
////	int temp;
////	char ch;
////	if (p == NULL)
////	{
////		cout << "List is Empty\n";
////	}
////	else
////	{
////		while (p != NULL)
////		{
////			q = p->next;
////
////			while (q != NULL)
////			{
////				if (p->freq > q->freq)
////				{
////					temp = p->freq;
////					ch = p->data;
////					p->freq = q->freq;
////					p->data = q->data;
////					q->data =ch;
////					q->freq = temp;
////
////
////				}
////				q = q->next;
////			}
////			p = p->next;
////		}
////	}
////}
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
//void huffmanTree(tableNode*& table, int size)
//{
//	int j = 10;
//	while (j>1)
//	{
//		
//		
//		tableNode* l = new tableNode(table[0]);
//
//		tableNode* r = new tableNode(table[1]);
//		table[0].freq = 0;
//		table[1].freq = 0;
//		cout << endl;
//
//		
//		size=removeLeadingZeros(table, size)->size;
//	
//
//		
//		cout << size;
//		table[size-1].setTreeData(tableNode(l, r));
//
//		sortArray(table, size);
//		cout << endl;
//		size = removeLeadingZeros(table, size)->size;
//
//		cout << endl;
//		for (int i = 0; i < size; i++)
//		{
//			cout << table[i].data << table[i].freq << " ";
//		}
//
//		if(size==3)
//		{
//			break;
//		}
//		j--;
//	} 
//	
//
//	string code = " ";
//	ExtraNode* array = new ExtraNode[size];
//	tableNode n=table[1] ;
//	n.traverse(code, array);
//	cout << "-------------------------------------------------------------\n";
//
//	
//}
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
//
//			
//		}
//	}
//
//	tableNode *table=new tableNode[count];
//
//
//	//for (int i = 0; i < count; i++)
//	//{
//	//	int next=0;
//	//	if (array[i] == '0')
//	//	{
//	//		next = i + 1; 
//	//		while (array[next] == '0')
//	//		{
//	//			next++;
//	//		}
//	//		array[i] = array[next];
//	//		array[next] = '0';
//	//	}
//	//	/*next = 0;
//	//	if (freq[i] == 0)
//	//	{
//	//		next = i + 1;
//	//		while (freq[next] == 0)
//	//		{
//	//			next++;
//	//		}
//	//		freq[i] = freq[next];
//	//		freq[next] = 0;
//	//	}*/
//	//}
//
//
//	for (int i = 0; i < count; i++)
//	{
//		if (array[i] != ' ' && array[i] != '0')
//		{
//			table[i].setData(array[i],freq[i]);
//			
//		}
//	}
//
//
//	/*for (int i = 0; i < count; i++)
//	{
//		cout << table[i].data;
//		cout << table[i].freq << " ";
//	}*/
//	
//
//	
//	cout << endl;
//
//	sortArray(table, count);
//
//	
//	//removeLeadingZeros(table, count);
//
//	
//	/*huffmanTree(tableArray,tableArray->size);*/
//	
//	/*List list;
//	Node* *A=new Node*[count];*/
//	/*cout << "\t\tFrequency Table:\n";
//	
//	cout << "Character \t Frequency:\n"; Sleep(300);
//	cout << "-----------------------------------------------------------\n";*/
//
//	//for (int i = 0; i < count; i++)
//	//{
//
//	//	if (array[i] != ' ' && array[i] != '0')
//	//	{
//	//		cout << "  " << array[i] << "\t\t\t" << freq[i] << endl;
//	//		//A[i] = new Node(array[i], freq[i]);
//	//		//list.sortedInsert(new Node(array[i], freq[i]));
//	//		
//	//	}
//
//	//}
//	//list.createList(*A,count);
//	//list.display();
//
//	huffman(array, freq,table,count);
//
//
//
//	/*for (int i = 0; i < count; i++)
//	{
//		cout << table[i].data;
//		cout << table[i].freq << " ";
//	}*/
//}
//
//
//
////int main()
////{
////	
////
////
////	characterCount();
////
////	
////
////
////}
//
//
