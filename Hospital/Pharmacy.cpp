#include"Pharmacy.h"
#include"Account.h"

Pharmacy::Pharmacy(double d, double s, double b, double n, double h)
{
	dental_medication = d;
	skin_medication = s;
	brain_medication = b;
	nose_medication = n;
	heart_medication = h;
}

void Pharmacy::update_Pharmacy_Charges(char m, Account& cha)
{
	long double t;
	int days;
	days = cha.getDays();
	t = cha.getCharges();
	switch (m)
	{
	case'1':
		t = t + (dental_medication*days);
		cha.update_Pharmacy_charges(t);
		break;
	case'2':
		t = t + (skin_medication * days);
		cha.update_Pharmacy_charges(t);
		break;
	case'3':
		t = t + (brain_medication * days);
		cha.update_Pharmacy_charges(t);
		break;
	case'4':
		t = t +( nose_medication * days);
		cha.update_Pharmacy_charges(t);
		break;
	case'5':
		t = t + (heart_medication * days);
		cha.update_Pharmacy_charges(t);
	}
}
double Pharmacy::getDental()
{
	return dental_medication;
}
double Pharmacy::getskin()
{
	return skin_medication;
}
double Pharmacy::getBrain()
{
	return brain_medication;
}
double Pharmacy::getNose()
{
	return nose_medication;
}
double Pharmacy::getHeart()
{
	return heart_medication;
}