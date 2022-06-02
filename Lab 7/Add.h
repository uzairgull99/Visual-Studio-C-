#pragma once
class Add {
private:
	int num;
public:
	Add(int x = 0)
	{
		num = x;
	}
	int getnum()
	{
		return num;
	}
	Add operator+ (Add& right)
	{
		Add temp;
		temp.num = num + right.num;
		return temp;
	}
};