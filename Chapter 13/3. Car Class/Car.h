#pragma once
#include <string>
using namespace std;
class Car
{
private:
	int yearModel;
	string make;
	int speed;
public:

	Car()
	{
		yearModel = 0;
		make =" ";
		speed = 0;	
	}

	Car(int y, string m)
	{
		yearModel = y;
		make = m;
		speed = 0;

	}
	
	string getMake() const
	{
		return make;
	}
	int getModel();
	int getSpeed();
	void accelerate();
	void brake();
};

