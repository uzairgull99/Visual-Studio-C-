#pragma once
#include <iostream>
using namespace std;

const int MAXSIZE = 10;
class ArrayStack
{
private:
	int top;
public:

	char* ch = new char[MAXSIZE];

	ArrayStack()
	{
		top = -1;
	}

	

	//void push(char ch1[],int i)
	//{
	//	if (top == MAXSIZE-1)
	//	{
	//		cout << "OverFlow" << endl;
	//	}
	//	else
	//	{
	//		top++;
	//		ch[top] = ch1[i];		
	//	}
	//}

	void push(char ch1)
	{
		if (top == MAXSIZE - 1)
		{
			cout << "OverFlow" << endl;
		}
		else
		{
			top++;
			ch[top] = ch1;
			cout << "Value pushed " << ch[top]<<endl;
		}
	}


	char pop()
	{
		char name;
		if (top == -1)
		{
			cout << "UnderFlow" << endl;
		}
		else
		{
			name=ch[top];
			top--;
			return name;
			
		}
	}

	void atTop()
	{
		if (top == -1)
		{
			cout << "UnderFlow" << endl;
		}
		else
		{
			cout << "At top " << ch[top] << endl;
		}
	}
};