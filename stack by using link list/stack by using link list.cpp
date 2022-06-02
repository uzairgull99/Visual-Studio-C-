// stack by using link list.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include"Stack using list.h"
using namespace std;



void menu()
{
	cout << "\n1) For Push\n";
	cout << "2) For Pop\n";
	cout << "3) For Display\n";
	cout << "0) For Exit\n\n";
}

int main()
{
	Stack stack;
	char ch;
	string data;
	menu();
	cout << "Enter your Choice\n";
	
	do {
		cin >> ch;
		switch (ch)
		{

		case '1':
		{
			cout << "Enter value you want to Push: ";
			cin >> data;
			stack.push(new Node(data));
			menu();
			
			break;
		} 



		case '2':
		{
			stack.pop();
			menu();
			break;
		}


		case '3': {
			stack.display();
			menu();
			break;
		}
		default:
		{
			cout << "Invalid Input\n";
		}

		}
	} while (ch != '0');
	
	
	
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
