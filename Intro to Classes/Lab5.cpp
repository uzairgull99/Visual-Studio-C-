#include"Lab5.h"

//FeetInches::FeetInches(float f, float i)
//{
//	feet = f;
//	inches = i;
//}
//
//FeetInches::FeetInches(const FeetInches& o)
//{
//	feet = o.feet;
//	inches = o.inches;
//}
//float FeetInches::multiply(FeetInches o)
//{
//	float mul=1;
//	mul = o.feet * o.inches;
//	return mul;
//}
//float FeetInches::getFeet()
//{
//	return feet;
//}
//float FeetInches::getInches()
//{
//	return inches;
//}




Time::Time(int h, int m, int s)
{
	hour = h;
	min = m;
	sec = s;
}
void Time::setHour(int h)
{
	hour = h;
}
void Time::setMin(int m)
{
	min = m;
}
void Time::setSec(int s)
{
	sec = s;
}
int Time::getHour()
{
	return hour;
}
int Time::getMin()
{
	return min;
}
int Time::getSec()
{
	return sec;
}