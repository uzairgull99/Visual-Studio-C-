#include"Surgery.h"
#include"Account.h"

Surgery::Surgery(double d, double s, double b, double n, long double h)
{
	dental_Surgery = d;
	skin_Surgery = s;
	brain_Surgery = b;
	nose_Surgery = n;
	heart_Surgery = h;
}
void Surgery::update_Surgery_Charges(char m, Account & cha)
{
	long double t;
	t = cha.getCharges();
	switch (m)
	{
	case'1':
		t = t + dental_Surgery;
		cha.update_Surgery_charges(t);	
		break;
	case'2':
		t = t + skin_Surgery;
		cha.update_Surgery_charges(t);
		break;
	case'3':
		t = t + brain_Surgery;
		cha.update_Surgery_charges(t);
		break;
	case'4':
		t = t + nose_Surgery;
		cha.update_Surgery_charges(t);
		break;
	case'5':
		t = t + heart_Surgery;
		cha.update_Surgery_charges(t);
	}
}
double Surgery::getDental()

{
	return dental_Surgery;
}
double Surgery::getSkin()
{
	return skin_Surgery;
}
double Surgery::getBrain()
{
	return brain_Surgery;
}
double Surgery::getNose()
{
	return nose_Surgery;
}
double Surgery::getHeart()
{
	return heart_Surgery;
}