#pragma once
class Inventory
{
private:
	int itemNum;
	int quantity;
	double cost;
	double totalCost;
public:
	Inventory()
	{
		itemNum = 0;
		quantity = 0;
		cost = 0;
		totalCost = 0;
	}
	Inventory(int, int, double);
	void setItem(int);
	void setQua(int);
	void setCost(double);
	void setTotal();
	int getItem();
	int getQua();
	double getCost();
	double getTotal();
};


