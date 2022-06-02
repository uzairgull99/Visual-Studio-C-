#pragma once
#include <string>
class Quadratic
{
private:
	double a, b, c;
	
public:
	Quadratic(double = 1, double = 0, double = 0);
	void add(Quadratic);
	void sub(Quadratic);
	std::string format();
	double solve();	
};