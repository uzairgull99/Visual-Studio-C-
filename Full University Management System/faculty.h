#pragma once
#include "person.h"
class Staff :public Person
{
private:
	string qualification;
	string experience;
	string research;
	string grade;
public:
	Staff(string = "", string = "", string = "",string="");
	void setQualification(string);
	void setExperience(string);
	void setResearch(string);
	void setGrade(string);

	string getQualification();
	string getExperience();
	string getResearch();
	string getGrade();
};

