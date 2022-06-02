
#include <iostream>
#include"Retail.h"
#include<string>
using namespace std;
void display(Retail, Retail, Retail);
void retailClass();
//void main()
//{
//	retailClass();
//	
//}

void retailClass()
{
	Retail item1, item2, item3;
	item1.setDes("Panadol");
	item1.setUnits(5);
	item1.setPrice(20);
	item2.setDes("Paracetamol");
	item2.setUnits(3);
	item2.setPrice(30);
	item3.setDes("Despirin");
	item3.setUnits(15);
	item3.setPrice(25);
	display(item1, item2, item3);
	
}

void display(Retail i1, Retail i2, Retail i3)
{

	cout << "Item Description\t Units on Hand\t \tPrice\n\n";
	cout << i1.getDes() << "\t\t\t\t" << i1.getUnits() << "\t\t" << i1.getPrice() << endl;
	cout << i2.getDes() << "\t\t\t" << i2.getUnits() << "\t\t" << i2.getPrice() << endl;
	cout << i3.getDes() << "\t\t\t" << i3.getUnits() << "\t\t" << i3.getPrice() << endl;
}

