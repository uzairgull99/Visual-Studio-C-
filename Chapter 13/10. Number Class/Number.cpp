#include "Number.h"
#include <iostream>
using namespace std;

Number::~Number()
	{
		delete[]ptr;
		cout << "I am a destructor What can I help you Sir\n";
	}
 
void Number::store()
{
	int in;
	for (int i = 0; i < index; i++)
	{
		do 
		{
			cout << "Enter index on which you want to store the number: ";
			cin >> in;
		} while (in< 0 && in > index);

			
		cout << "Enter "<<in+1 <<"index value: ";
		cin >> ptr[in];	

	}
	
	for (int i = 0; i < index; i++)
	{
		cout << "value against " << i << " index is: ";
		cout << ptr[i];
		cout << endl;
	}
	
}
float Number:: retrieve(int ind)
{
	
		return ptr[ind];
	
 }
float Number::highest()
{
	float high=ptr[0];
	for (int i = 0; i < index; i++)
	{
		if (high < ptr[i])
		{
			high = ptr[i];
		}
	}
	return high;
}
float Number:: lowest()
{
	float low = ptr[0];
	for (int i = 0; i < index; i++)
	{
		if (low > ptr[i])
		{
			low = ptr[i];
		}
	}
	return low;
}
float Number::average()
{
	float sum=0, average;
	for (int i = 0; i < index; i++)
	{
		sum = sum + ptr[i];
	}
	average = sum / index;
	return average;
 }