
#include "faculty.h"


void Staff:: setQualification(string q)
{
	qualification = q;
}
void Staff::setExperience(string e)
{
	experience = e;
}
void Staff::setResearch(string r)
{
	research = r;
}
void Staff::setGrade(string g)
{
	grade = g;
}





string Staff::getQualification()
{
	return qualification;
}
string Staff::getExperience()
{
	return experience;
}
string Staff::getResearch()
{
	return research;
}
string Staff::getGrade()
{
	return grade;
}