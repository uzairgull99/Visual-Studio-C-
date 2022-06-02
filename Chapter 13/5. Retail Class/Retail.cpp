#include "Retail.h"
#include <string>

void Retail::setDes(string des)
{
	description = des;
}
void Retail::setUnits(int u)
{
	units = u;
}
void Retail::setPrice(double p)
{
	price = p;
}
string Retail::getDes()
{
	return description;
}
int Retail::getUnits()
{
	return units;
}
double Retail::getPrice()
{
	return price;
}
