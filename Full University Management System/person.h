#pragma once
#include<iostream>
#include <string>
using namespace std;
class Person {
protected:
	string firstName;
	string lastName;
	string fatherName;
	string address;
	string personCnic;
	string fatherCnic;
	string e_mail;
	string gender;
	string phone;
	string dob;
public:
	Person(string = "",string ="", string = "", string = "", string = "", string = "", string = "", string = "", string = "");
	void setFirstName(string);
	void setLastName(string );
	void setFatherName(string );
	void setAdress(string );
	void setPersonalCnic(string);
	void setFatherCNIC(string );
	void setEmail(string);
	void setPhone(string);
	void setGender(string);
	void setDOB(string );
	string getFirstName();
	string getLastName();
	string getFatherName();
	string getAdress();
	string getPersonalCnic();
	string getFatherCNIC();
	string getEmail();
	string getPhone();
	string getGender();
	string getDOB();
	
	
};
