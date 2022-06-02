#include "person.h"
Person::Person(string n , string l , string f , string a, string cn ,
	string fcn , string e , string p , string d )
{
	firstName = n;
	lastName = l;
	fatherName = f;
	address = a;
	personCnic = cn;
	fatherCnic = fcn;
	e_mail = e;
	phone = p;
	dob = d;
}
void Person::  setFirstName(string n)
{
	
		firstName = n;
	
	
}
void Person:: setLastName(string n)
{
	lastName = n;
}
void Person:: setFatherName(string f)
{
	fatherName = f;
}
void  Person:: setAdress(string a)
{
	address = a;
}
void Person:: setPersonalCnic(string c)
{
	personCnic = c;
}
void Person:: setFatherCNIC(string c)
{
	fatherCnic = c;
}
void Person:: setEmail(string e)
{
	e_mail = e;
}
void Person:: setPhone(string p)
{
	phone = p;
}
void Person:: setGender(string g)
{
	gender = g;
}
void Person:: setDOB(string b)
{
	dob = b;
}


string Person:: getFirstName()
{
	return firstName;
}
string Person::getLastName()
{
	return lastName;
}
string Person::getFatherName()
{
	return fatherName;
}
string Person::getPersonalCnic()
{
	return personCnic;
}
string Person::getFatherCNIC()
{
	return fatherCnic;
}
string Person::getAdress()
{
	return address;
}
string Person::getDOB()
{
	return dob;
}
string Person::getEmail()
{
	return e_mail;
}
string Person::getGender()
{
	return gender;
}
string Person::getPhone()
{
	return phone;
}

 