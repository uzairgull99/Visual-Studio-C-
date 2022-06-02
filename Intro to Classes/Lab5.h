#pragma once
//class FeetInches
//{
//private:
//	float feet;
//	float inches;
//public:
//	FeetInches(float,float);
//	FeetInches(const FeetInches&);
//	float multiply(FeetInches);	
//	float getFeet();
//	float getInches();
//};

class Time {
private:
	int hour;
	int min;
	int sec;
public:
	Time(int, int, int);
	void setHour(int);
	void setMin(int);
	void setSec(int);
	int getHour();
	int getMin();
	int getSec();
	
};