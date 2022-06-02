#pragma once
class Account;
class Pharmacy {
	double dental_medication;
	double skin_medication;
	double brain_medication;
	double nose_medication;
	double heart_medication;
public:
	Pharmacy(double = 300, double = 500, double = 1000, double = 600, double = 1500);
	void update_Pharmacy_Charges(char, Account&);
	double getDental();
	double getskin();
	double getBrain();
	double getNose();
	double getHeart();
};