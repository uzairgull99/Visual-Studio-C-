#pragma once
#include"Surgery.h"
#include"Pharmacy.h"
class Account {
private:
	long double charges;
	int days;
public:
	Account(long double=0,int = 0);
	void roomCharges(int);
	void update_Surgery_charges(long double);
	void update_Pharmacy_charges(long double);
	void setdays(int);
	double getCharges();
	

	int getDays();
	
};
