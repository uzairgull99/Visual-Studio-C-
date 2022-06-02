#include"Account.h"
#include<iostream>
using namespace std;
const double day_rate = 5000;

Account::Account(long double c,int d)
{
	charges = c;
	days = d;
}
void Account::roomCharges(int n)
{
	long double total;
	total = n * day_rate;
	charges = charges + total;
	cout << total;
}

void Account::update_Surgery_charges(long double n)
{

	charges = n;
}
void Account::update_Pharmacy_charges(long double n)
{

	charges = n;
}
	
	
	

void Account::setdays(int d)
{
	days = d;
	
}
double Account::getCharges()
{
	
	return charges;
	
}

int Account::getDays()
{
	return days;
}