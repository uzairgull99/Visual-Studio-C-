//
//#include<iostream>
//#include <string>
//#include<fstream>
//#include"Priority_Queue.h"
//using namespace std;
//
//class NewNode {
//public:
//	char data;
//	int freq;
//	NewNode* left;
//	NewNode* right;
//
//	NewNode(char data, int freq)
//	{
//		this->data = data;
//		this->freq = freq;
//		left = NULL;
//		right = NULL;
//	}
//
//};
//
//
//
//class HuffmanCodes
//{
//private:
//	NewNode* root;
//	
//public:
//	HuffmanCodes() { }
//	void print_code(NewNode* current, string str,string *code)
//	{
//		if (current == NULL)
//			return;
//
//		if (current->data == '$')
//		{
//			print_code(current->left, str + "0",code);
//			print_code(current->right, str + "1",code);
//
//		}
//		else  if (current->data != '$')
//		{
//			
//			static int count=0;
//			
//			cout <<"\t\t" <<current->data << "\t\t\t\t" << str << endl;
//			code[count] = str;
//			count++;
//			print_code(current->left, str + "0",code);
//			print_code(current->right, str + "1",code);
//
//		}
//	}
//	
//	string* generate_Huffman_Tree(char data[], int freq[], int size)
//	{
//		NewNode* left;
//		NewNode* right;
//	priority_Queue<NewNode*> PQ;
//
//		for (int i = 0; i < size; i++)
//		{
//			PQ.enqueue(new NewNode(data[i], freq[i]));
//		}
//		cout << "\n\n-------------------------Frequency Table-------------------------\n\n";
//		cout << "\t\tCharacter \t\t Frequency:\n";
//		cout << "------------------------------------------------------------------\n";
//		PQ.display();
//		cout << "\n\n\n";
//		int i = 0;
//		cout << "-----------------------Huffman Encoding Procees begins---------------------\n\n";
//		cout << "----------Selecting minimaum Node and combine it with second minimum Node---------\n\n\n";
//			
//			
//		while (PQ.getSize()!=1)
//		{
//			left = PQ.top(); PQ.dequeue();  
//			right = PQ.top(); PQ.dequeue();  
//
//			root = new NewNode('$', left->freq + right->freq);
//			root->left = left;
//			root->right = right;
//			PQ.enqueue(root);
//
//			cout <<"\t\t\t  "<<i+1 << "th Pass\n\n";
//			cout << "\t\tCharacter \t\t Frequency:\n";
//			cout << "------------------------------------------------------------------\n";
//			PQ.display();
//			cout << "\n\n";
//			//cout << "\n.................................................................\n\n\n";
//			i++;
//		}
//
//		root = PQ.top();  PQ.dequeue(); 
//	
//		cout << "\n\n-------------------- Huffman Encoding Final Output ----------------------\n\n";
//		cout << "\t\tCharacter \t\t\tHash codes\n";
//		cout << "--------------------------------------------------------------------------\n";
//		string* arr=new string[size];
//		print_code(root, " ",arr);
//
//		for (int i = 0; i < size; i++)
//		{
//			cout << arr[i]<<endl;
//		}
//		return arr;
//	}
//
//};
//
//
//
////----------------------------------------------------------------------------------------------------------
// 
//
//void readTextFile()
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
//	char* data = new char[count];
//	int* frequency = new int[count];
//	int actualSize = 0;
//	for (int i = 0; i < count; i++)
//		{
//	
//			if (array[i] != ' ' && array[i] != '0')
//			{
//				static int j = 0;
//				data[j] = array[i];
//				frequency[j] = freq[i];
//				actualSize++;
//				j++;
//			}
//			
//	
//		}
//	cout << endl;
//	HuffmanCodes Huff;
//	string *code=Huff.generate_Huffman_Tree(data, frequency, actualSize);
//	
//	
//}
//
//
//
//
//
//
//int main()
//{
//	
//	readTextFile();
//	
//}