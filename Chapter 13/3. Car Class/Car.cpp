#include "Car.h"
#include<string>
#include <iostream>
using namespace std;

	int Car::getModel()
	{
		return yearModel;
	}
	
	int Car::getSpeed()
	{
		return speed;
	}
	void Car::accelerate()
	{
		speed = speed + 5;
	}

	void Car::brake()
	{
		speed = speed - 5;
	}
