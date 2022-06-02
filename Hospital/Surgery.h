#pragma once
class Account;
class Surgery {
private:
	long double dental_Surgery;
	double skin_Surgery;
	double brain_Surgery;
	double nose_Surgery;
	double heart_Surgery;
public:
	Surgery(double = 65000, double =100000 , double = 500000, double = 150000, long double = 300000);
	void update_Surgery_Charges(char, Account&);
	double getDental();
	double getSkin();
	double getBrain();
	double getNose();
	double getHeart();	
};
