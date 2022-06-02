
#include<iostream>
#include <string>
using namespace std;

struct Eatables
{
	string product_name;
	int quantity;
	float price;
};

struct Grocery
{
	string product_name;
	int quantity;
	float price;
};



void displayEatables(Eatables obj[],int index)
{
	cout << "------------------------Eatables----------------\n\n";
	cout << "Product:			Quantity:			Price\n\n";
	for (int i = 0; i < index; i++)
	{
		
		cout << obj[i].product_name << "\t\t\t\t" << obj[i].quantity << "\t\t\t\t" << obj[i].price << "\n\n";
	}
}


void displayGrocery(Grocery obj[],int index)
{
	cout << "------------------------Grocery----------------\n\n";
	cout << "Product:			Quantity:			Price\n\n";
	for (int i = 0; i < index; i++)
	{

		cout << obj[i].product_name << "\t\t\t\t" << obj[i].quantity << "\t\t\t\t" << obj[i].price << "\n\n";
	}
}


float customer(Eatables obj1[], Grocery obj2[], int index2)
{
	cout << "Select One of the following catogry:\n\n";

	cout << "1) Eatables\t\t 2) Grocerry\n\n";
	cout << "Press 1 for Eatables and 2 for Grocery\n";
	char ch;
	int q;
	int p;
	float total = 0,dis;
	cin >> ch;


	switch (ch)
	{
	case'1':
	{
		
		displayEatables(obj1, 3);

		cout << "Which product you want to buy:\n\n Select the product:\n\n";
		cout << "Enter 1 for 1st item 2 for 2nd item and so on: ";
		cin >> p;
		cout << "\nEnter the quntity: ";
		cin >> q;

		if (q > obj1[p-1].quantity)
		{
			cout << "Shortage in the Product\n";
		}
		else
		{
			total = q * obj1[p-1].price;
			if (total >= 1000)
			{
				dis = (total / 100) * 10;
				total = total - dis;
				cout << "You are given 10% discount on shopping of 1000 above\n";
				cout << "Toatl BIll: " << total << endl;
				return total;
			}
			else
			{
				total = q * obj1[p-1].price;
				cout << "Toatl Bill: " << total << endl;
				return total;
			}

		}
	}break;

	case'2':
	{
		displayGrocery(obj2, 3);

		cout << "Which product you want to buy:\n\n Select the product:\n\n";
		cout << "Enter 1 for 1st item 2 for 2nd item and so on: ";
		cin >> p;
		cout << "\nEnter the quntity: ";
		cin >> q;

		if (q > obj1[p - 1].quantity)
		{
			cout << "Shortage in the Product\n";
		}
		else
		{
			total = q * obj2[p - 1].price;
			if (total >= 1000)
			{
				dis = (total / 100) * 10;
				total = total - dis;
				cout << "You are given 10% discount on shopping of 1000 above\n";
				cout << "Toatl bBIll: " << total << endl;
				return total;
			}
			else
			{
				total = q * obj2[p - 1].price;
				cout << "Toatl BIll: " << total << endl;
				return total;
			}

		}
		}break;
	}
	
}


void main()
{
	const int index = 3;
	Eatables obj1[index] = { {"Lays",5,50},{"Slanty",5,25 }, { "Butter", 5, 100 }};
	Grocery  obj2[index]= { {"Rice",5,50},{"Wheat",5,200 }, { "Dal", 5, 250 } };
	displayEatables(obj1,index);
	displayGrocery(obj2, index);
	customer(obj1, obj2, index);
}
	