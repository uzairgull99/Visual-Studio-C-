#include<iostream>
#include<string>
#include<sstream>
#include<cmath>
#include"Quadratic.h"
using namespace std;

Quadratic::Quadratic(double a1, double b1, double c1)
{
	if (a1== 0)
	{
		a1++;
	}
	a = a1;
	b = b1; c = c1;

}
void Quadratic::add(Quadratic ins)
{
	a= a + ins.a;
	b = b + ins.b;
	c = c + ins.c;
	cout<<format();
 }
void Quadratic::sub(Quadratic ins)
{
	a = a - ins.a;
	b = b - ins.b;
	c = c - ins.c;
}
string Quadratic::format()
{
	ostringstream output ;
	output << a << "x^2" << "+" << b << "x" << "+" << c << "=" << "0";
	return output.str();
}
double Quadratic::solve()
{
	double q;
	double x1=1;
	q = (b * b) - (4 * a * c);

	if (q > 0)
	{
		x1 =(-b + sqrt(q)) / (2 * a);
	}
	
	else
		cout << "Roots does not exist";

	return x1;
}