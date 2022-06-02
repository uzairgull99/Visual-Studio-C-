// Queue.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string.h>
#include "Stack.h"
#include <fstream>
using namespace std;

void towerOfHanoi(int disks,int rod1 ,int rod2, int rod3)
{
	
	if (disks > 0)
	{
		towerOfHanoi(disks - 1, rod1, rod3, rod2);
		cout << "Disk moves from Rod " << rod1 << " To Rod " << rod3<<endl;
		towerOfHanoi(disks - 1, rod2, rod1, rod3);
	}
	
}


//void Palindrome()
//{
//	
//	string name1;
//	ArrayStack stack;
//	cout << "\n\t\tEnter any string.....We shall check this either it is palindrome or not:\n";
//	cin >> name1;
//	 int n = name1.length();
//
//	char *name=new char[n];
//
//	for (int i = 0; i < n; i++)
//	{
//		name[i] = name1[i];
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		stack.push(name,i);
//	}
//	
//
//
//	char ch[5];
//	string name2;
//
//	for (int i = 0; i < n; i++)
//	{
//		stack.atTop();
//		ch [i]= stack.pop();
//		name2 = name2 + ch[i];
//	}
//
//	
//		if (name1 == name2)
//		{
//			cout << "Entered string is Palindrome" << endl;
//		}
//		else
//		{
//			cout << "Entered string is not a Palindrome" << endl;
//
//		}
//	
//}


void postfix()
{
	char ch;
	ifstream input;

	ofstream output;
	string out;
	output.open("expression.txt");
	cout << "Enter";
	cin >>out;
	output<< out;

	ArrayStack stack;
	input.open("expression.txt");
	int post=0;

	if (input.fail())
	{
		cout << "Error\n";

	}
	else
	{
		while (input >> ch)
		{
			if (ch!='+' && ch != '-'&& ch != '*'&& ch != '/' && ch != '%' && ch != '^')
			{
				stack.push(ch);
			}
			else 
			{
				int val1,val2;
				char a, b;
				val1= stack.pop();
				
				val2= stack.pop();
				
				switch(ch)
				{
				case'+': { post = val2 + val1;  break; }
				case'-': { post = val2 - val1;  break; }
				case'*': { post = val2 * val1;  break; }
				case'/': { post = val2 / val1;  break; }
				case'%': { post = val2 % val1;  break; }
				}
				stack.push(post);
			}
		}
	}
	cout << post;
}


















int main()
{
	
	//towerOfHanoi(3, 1, 2, 3);
	//Palindrome();
	postfix();
	
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
