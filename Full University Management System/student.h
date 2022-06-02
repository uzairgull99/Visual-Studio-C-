#pragma once
# include "person.h"

class Student : public Person
{
private:
		int inter;
		int matric;
		int entryTest;
		float cgpa;
public:
	Student(int i= 0, int m = 0, int e = 0, float c= 0)
	{
		inter = i;
		matric = m;
		entryTest = e;
		cgpa = c;
	}
	void setInter(int);
	void setMatric(int);
	void setEntryTest(int);
	void setCgpa(float);
	int getInter();
	int getMatric();
	int getEntry();
	float getCGPa();
	friend istream& operator >>(istream&, Student&);
	friend ostream& operator<<(ostream&, Student&);
};

