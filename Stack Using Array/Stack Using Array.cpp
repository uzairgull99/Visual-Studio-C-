// Stack Using Array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
#include"Stack_Using_Array.h"
using namespace std;

bool isBalance (char*,LinkListStack);
bool isBalance2(char*, LinkListStack);
void menu(LinkListStack);
int main()
{
	LinkListStack stack;
	char  exp[]="{([(a+b)]-(c-D))}}";
	cout << "Paranthesis: " << isBalance2(exp, stack);	
}


void menu(LinkListStack stack)
{
	char ch;
	char temp;
	int p = 0;
	do
	{
		cout << endl;
		cout << "1) For Push\n";
		cout << "2) For Pop\n";
		cout << "3) Peek\n";
		cout << "4) Dispaly\n";
		cout << "0) For Exit\n";
		cin >> ch;
		switch (ch)
		{
		case'1':
			cin >> temp;
			stack.push(temp);
			break;
		case'2':
		temp=stack.pop();
			break;
		case'3':
			cout << "Enter position: ";
			cin >> p;
			//temp = stack.peek(p);
			cout << "Value at Position " << p << " is " << temp;
			break;
		case'4':
			stack.display();
			break;
		}

	} while (ch != '0');
}



bool isBalance(char *exp,LinkListStack s)
{
	
	
	for (int i = 0; exp[i] != '\0'; i++)
	{
		if (exp[i] == '(')
			s.push(exp[i]);
		else if (exp[i] == ')')
		{
			if (s.isEmpty()) return false;
			else
				s.pop();
		}
	}
	if (s.isEmpty()) return true;
	else return false;

}

bool isBalance2(char* exp, LinkListStack s)
{

	for (int i = 0; exp[i] != '\0'; i++)
	{
		if (exp[i] == '('||exp[i]=='{'||exp[i]=='[')
			s.push(exp[i]);
		else if (exp[i] == ')' || exp[i] == '}' || exp[i] == ']')
		{
			if (s.isEmpty()) return false;
			else if(s.atTop()=='{'&&exp[i]=='}')
				s.pop();
			else if (s.atTop() == '(' && exp[i] == ')')
				s.pop();
			else if (s.atTop() == '[' && exp[i] == ']')
				s.pop();
		}
		
	}
	if (s.isEmpty()) return true;
	else return false;
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
