#pragma once
#include <iostream>
using namespace std;
class B;
class A
{
private:
	int num1;
public:
	void setnum1(int n)
	{
		num1 = n;
	}
	void display()
	{
		cout << "Value Before swapping: " <<num1<<endl;
	}	

	friend void exchange(A&, B&);
};


class B {
private:
	int num2;
public:
	void setnum2(int n)
	{
		num2 = n;
	}
	void display()
	{
		cout << "Value Before swapping: " << num2<<endl;
	}
	friend void exchange(A&, B&);
	
};

void exchange(A &obj1, B& obj2)
{
	int temp;
	temp = obj1.num1;
	obj1.num1 = obj2.num2;
	obj2.num2 = temp;
	cout << "\nValue of num1 after swapping is: " << obj1.num1;
	cout << "\nValue of num2 after swapping is: " << obj2.num2;

 }

void swap()
{
	A obj1;
	B obj2;
	int num1;
	cout << "Enter num1 :\n";
	cin >> num1;
	obj1.setnum1(num1);
	cout << "Enter num2 :\n";
	cin >> num1;
	obj2.setnum2(num1);
	obj1.display();
	 obj2.display();
	exchange(obj1, obj2);
		

}
//int main()
//{
//	swap();
//}