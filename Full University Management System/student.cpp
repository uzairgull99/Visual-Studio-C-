
# include"student.h"
using namespace std;

void Student:: setInter(int m)
{
	inter = m;
}
void Student::setMatric(int m)
{
	matric = m;
}
void Student::setEntryTest(int m)
{
	entryTest = m;
}
void Student::setCgpa(float c)
{
	cgpa = c;
}



int	Student::getInter()
{
	return inter;
}
int Student::getMatric()
{
	return matric;
}
float Student::getCGPa()
{
	return cgpa;
}
int Student::getEntry()
{
	return entryTest;
}


istream& operator>> (istream& obj, Student& std)
{
			cout << "Enter First Name: ";
			obj >> std.firstName;
			cout << "Enter Last Name: ";
			obj >> std.lastName;
			cout << "Enter Father Name: ";
			obj >> std.fatherName;
			cout << "Enter Student CNIC: ";
			obj >> std.personCnic;
			cout << "Enter Gaurdian CNIC: ";
			obj >> std.fatherCnic;
			cout << "Enter Student Adress: ";
			obj >> std.address;
			cout << "Enter Gender of Student: ";
			obj >> std.gender;
			cout << "Enter Inter Marks: ";
			obj >> std.inter;
			cout << "Enter Matric Marks: ";
			obj >> std.matric;
			cout << "Enter Entry Test Marks: ";
			obj >> std.entryTest;
			cout << "Enter Date of Birth (dd//mm//yy) : ";
			obj >> std.dob;
			cout << "Enter Phone#: ";
			obj >> std.phone;

	return obj;
}

ostream& operator<<(ostream& obj, Student& std)
{
	obj << " First Name: ";
	obj << std.firstName << endl;
	obj << " Last Name: ";
	obj << std.lastName << endl;
	obj << " Father Name: ";
	obj << std.fatherName << endl;
	obj << " Student CNIC: ";
	obj << std.personCnic << endl;
	obj << " Gaurdian CNIC: ";
	obj << std.fatherCnic << endl;
	obj << " Student Adress: ";
	obj << std.address<<endl;
	obj << " Gender of Student: ";
	obj << std.gender << endl;
	obj << " Inter Marks: ";
	obj << std.inter << endl;
	obj << " Matric Marks: ";
	obj << std.matric << endl;
	obj << " Entry Test Marks: ";
	obj << std.entryTest << endl;
	obj << " Date of Birth (dd//mm//yy) : ";
	obj << std.dob << endl;
	obj << " Phone#: ";
	obj << std.phone << endl;

	return obj;
}