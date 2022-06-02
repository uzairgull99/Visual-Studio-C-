#include<iostream>
#include"Lab5.h"
using namespace std;
int main()
{
	//float feet, inches;
	//cout << "Enter Feets: ";
	//cin >> feet;
	//cout << "Enter Inches: ";
	//cin >> inches;
	//FeetInches o1(feet,inches);
	//FeetInches o2 = o1;
	///*cout << "Feets for object one you entered is:" <<o1.getFeet() <<endl;
	//cout << "Inches for object one you entered is:" << o1.getInches() << endl;
	//cout << "Feets for object 2 you entered is:" << o2.getFeet() << endl;
	//cout << "Feets for object 2 you entered is:" << o2.getInches() << endl;
	//cout << "Now we are Multiplying Feet and Inches\n";*/
	//cout<<o1.multiply(o2);
	//return 0;







	Time t(3, 40, 50);
	int h, m, s;
	cout << "Enter Hour: ";
		cin >> h;
		t.setHour(h);
		cout << "Enter Minutes: ";
		cin >> m;
		t.setMin(m);
		cout << "Enter Seconds: ";
		cin >> s;
		t.setSec(s);
		cout << t.getHour << " : " << t.getMin << " : " << t.getSec << endl;


		




}