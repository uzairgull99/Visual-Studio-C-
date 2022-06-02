// ConsoleApplication3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<iostream>
#include<fstream>
#include "stack.h"
using namespace std;

void valid()
{

	char ch;
	Stack stack;
	int flag1 = 0;  //Flag1 for checking either the value pushed in stack is same to one of the value present in our defined file 
	int flag2 = 0;	//Flag2 for checking number of values pushed in the stack is equal to the ending tag in the html file
	ifstream readFile;
	readFile.open("html.txt");	
	
	if (readFile.fail())
	{
		cout << "File open Error";
	}

	
	
	else
	{
		cout << "\n\t\t\t\tOpening and Closing tags in this HTML document are: \n";
		cout << "\t\t\t\t-----------------------------------------------------\n\n\t\t\t\t";
		while (readFile >> ch)
		{

			if (ch == '<')
			{
				
				readFile >> ch;

				if (ch != '/')
				{
					string n;
					while (ch != '>')
					{
						
						n = n + ch;
						readFile >> ch;
					}
					string tag;
					ifstream sampleFile;
					sampleFile.open("sample.txt");
					stack.push(new Node(n));
					
					cout << n<<" ";
					if (sampleFile.fail())
					{
						cout << "File Opening error\n";
					}
					else
						while (sampleFile>> tag)
						{
							if (tag == n)
							{
								
								flag1++;
								//cout << "find from file\n";
								break;

							}
							

						}
				}
				else 
					if (ch == '/')
				{
			     	
					readFile >> ch;
					string n;
					while (ch != '>')
					{
						n = n+ ch;
						readFile >> ch;		
					}
					cout << n<<" ";
					Node node;
					node = stack.pop();

					if (node.getData() == n)
					{
						flag2++;
					}		
			
				}
			}
		}
		
	}




	
	cout << "\n\n";
	cout << "\t\t\t\t**************************************\n\n";
	cout << "\t\t\t\tHTML document Validation Result: \n";
	cout << "\t\t\t\t--------------------------------------\n\n\t\t\t\t";

	if (flag1 == flag2)
	{
		cout << "Valid HTML document\n";
	}
	else cout << "Invalid HTML file\n";
			
}





int main()
{
	valid();
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
