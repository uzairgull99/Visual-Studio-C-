#include "Inventory.h"
#include<iostream>
using namespace std;

Inventory::Inventory(int i, int q, double c)
{
    itemNum = i;
    quantity = q;
    cost = c;
    setTotal();
}
void Inventory::setItem(int i)
{
    itemNum = i;
}
void Inventory::setQua(int q)
{
    quantity = q;
}
void Inventory::setCost(double c)
{
    quantity = c;
}
void Inventory::setTotal()
{
    totalCost = quantity * cost;
}
int Inventory:: getItem()
{
    return itemNum;
}
int Inventory::getQua()
{
    return quantity;
}
double Inventory::getCost()
{
    return cost;
}
double Inventory::getTotal()
{
    return totalCost;
}