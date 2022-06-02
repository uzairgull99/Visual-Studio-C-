#pragma once
#include <string>
using namespace std;
class Retail
{
private:
	string description;
	int units;
	double price;
public:
	Retail()
	{
		description = " ";
		units = 0;
		price = 0;
	}
	Retail(string des, int u, double p)
	{
		description = des;
		units = u;
		price = p;
	}
	void setDes(string);
	void setUnits(int);
	void setPrice(double);
	string getDes();
	int getUnits();
	double getPrice();
};

