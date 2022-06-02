// Hospital.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<stdlib.h>
#include<iomanip>
#include"Account.h"
#include"Surgery.h"
#include"Pharmacy.h"
using namespace std;
void bill();
void dental(char);
void skin(char);
void brain(char);
void nose(char);
void heart(char);
const double day_rate = 5000;
int main()
{
	char choice;
	char choice1;
	
	do {

		bill();
		cin >> choice;
		system("cls");
		if (choice == '1')
		{
			cout << "\n\t\t\t---------------------Enter the dissease from which patient is suffering-------------------- \n\n";
			cout << "Press 1) Dental Problem\n\nPress 2) Skin Problem\n\nPress 3) Brain Diseases\n\nPress 4) Nose Disease\n\nPress 5) Heart Disease\n\n";
			cin >> choice1;
			system("cls");
			switch (choice1) 
			
			{
			case'1':
				dental(choice1); break;
			case'2':
				skin(choice1);  break;
			case'3': 
				brain(choice1); break;
			case'4':
			nose(choice1);    break;
			case'5':
				heart(choice1); break;		
			}

		}
		
	} while (toupper(choice)!= 'E');
	
}
void dental(char choice1)
{

	char choice2;
	int n;

	//Selecting Doctor Prescription For the patient,Value stored in choice2 variable and this value is checked for 1 and 2..

	cout << "\n\t\t-------------------------Welcome to Dental Department--------------------\n\n  ";
	cout << "Enter the Doctor priscription:\n\n";
	cout << "Press 1) Only Medication: \n\n";
	cout << "Press 2) Medication + Surgery\n\n";
	cin >> choice2;
	system("cls");

	Account o;
	cout << "\n\t\t-----------------Enter Number of Days Patient stay at Hospital Room:-----------------\n\n";
	cin >> n;
	system("cls");
	o.setdays(n);
	Pharmacy m;
	Surgery s;
	if (choice2 == '1')
	{
		cout << "\n\t\t\t---------------Rate list for Dental Madication Only ---------------\n\n";
		cout << "Charges of Dental Drugs Per Day: \t\t" << m.getDental()<<"/-" << endl << endl;
		cout << "Room charges per day:\t\t\t" << day_rate <<"/-" << endl << endl << endl;

		cout << "\n\t\t-----------------Toatl Bill of the patient For Medication Only:---------------\n\n\n";
		cout << "Total Charges for Dental Medication:				";
		cout << m.getDental()*o.getDays() << "/-";
		cout << "\t\tNo. of Days Patient Stay at hospital:\t " << o.getDays() ;
		cout << "\n\nTotal Room Charges:				";
		o.roomCharges(n); cout << "/-";
		m.update_Pharmacy_Charges(choice1, o);
		cout << "\n\nTotal charges of the Dental patient:		";
		cout << o.getCharges() << "/-" << endl << endl;
		system("pause");
		system("cls");
	}
	else if (choice2 == '2')
	{
		cout << "\n\t\t\t---------------Rate list for Dental Madication And Surgery---------------\n\n";
		cout << "Charges of Dental SurgeryL:\t\t\t" << s.getDental() << "/-" << endl << endl;
		cout << "Charges of Dental Drugs Per day:  \t\t" << m.getDental() << "/-" << endl << endl;
		cout << "Room charges per day:  \t\t\t\t" << day_rate << "/-" << endl << endl << endl;


		cout << "\n\t\t-----------------Toatl Bill of the patient For Medication And Surgery:---------------\n\n\n";
		cout << "Total Charges for Dental Medication:			 ";
		cout << m.getDental() * o.getDays() << "/-";
		cout << "\t\tNo. of Days Patient Stay at hospital:\t " << o.getDays() << endl << endl;
		cout << "Charges for Dental Surgery:			 ";
		cout << s.getDental() << "/-";
		cout << "\n\nTotal Room Charges:				 ";
		o.roomCharges(n);cout << "/-";
		m.update_Pharmacy_Charges(choice1, o);
		s.update_Surgery_Charges(choice1, o);
		cout << "\n\nTotal charges of the patient:		         ";
		cout << o.getCharges() << "/-" << endl << endl;
		system("pause");
		system("cls");
	}



}
void skin(char choice1)
{

	char choice2;
	int n;

	//Selecting Doctor Prescription For the patient,Value stored in choice2 variable and this value is checked for 1 and 2..

	cout << "\n\t\t-------------------------Welcome to Skin Department--------------------\n\n  ";
	cout << "Enter the Doctor priscription:\n\n";
	cout << "Press 1) Only Medication: \n\n";
	cout << "Press 2) Medication + Surgery\n\n";
	cin >> choice2;
	system("cls");

	Account o;
	cout << "\n\t\t-----------------Enter Number of Days Patient stay at Hospital Room:-----------------\n\n";
	cin >> n;
	system("cls");
	o.setdays(n);
	Pharmacy m;
	Surgery s;
	if (choice2 == '1')
	{
		cout << "\n\t\t\t---------------Rate list for Skin Madication Only ---------------\n\n";
		cout << "Charges of Skin Drugs Per Day: \t\t" << m.getskin() << "/-" << endl << endl;
		cout << "Room charges per day:\t\t\t\t" << day_rate << "/-" << endl << endl << endl;

		cout << "\n\t\t-----------------Toatl Bill of the patient For Medication Only:---------------\n\n\n";
		cout << "Total Charges for Skin Medication:		 ";
		cout << m.getskin() * o.getDays() << "/-";
		cout << "\t\tNo. of Days Patient Stay at hospital:\t " << o.getDays();
		cout << "\n\nTotal Room Charges:				";
		o.roomCharges(n);cout << "/-";
		m.update_Pharmacy_Charges(choice1, o);
		cout << "\n\nTotal charges of the Skin patient:		";
		cout << o.getCharges() << "/-" << endl << endl;
		system("pause");
		system("cls");
	}
	else if (choice2 == '2')
	{
		cout << "\n\t\t\t---------------Rate list for Skin Madication And Surgery---------------\n\n";
		cout << "Charges of Skin Surgery:\t\t\t" << s.getSkin() << "/-" << endl << endl;
		cout << "Charges of Skin Drugs Per Day:  \t\t" << m.getskin() << "/-" << endl << endl;
		cout << "Room charges per day:  \t\t\t\t" << day_rate << "/-" << endl << endl << endl;


		cout << "\n\t\t-----------------Toatl Bill of the patient For Medication And Surgery:---------------\n\n\n";
		cout << "Total Charges for Skin Medication Per Day:	 ";
		cout << m.getskin() * o.getDays();
		cout << "\t\tNo. of Days Patient Stay at hospital:\t " << o.getDays() << endl << endl;
		cout << "Charges for Skin Surgery:			 ";
		cout << s.getSkin() << "/-";
		cout << "\n\nTotal Room Charges:				 ";
		o.roomCharges(n);cout << "/-";
		m.update_Pharmacy_Charges(choice1, o);
		s.update_Surgery_Charges(choice1, o);
		cout << "\n\nTotal charges of the patient:		         ";
		cout << o.getCharges() << "/-" << endl << endl;
		system("pause");
		system("cls");
	}



}
void brain(char choice1)
{

	char choice2;
	int n;

	//Selecting Doctor Prescription For the patient,Value stored in choice2 variable and this value is checked for 1 and 2..

	cout << "\n\t\t-------------------------Welcome to Brain Department--------------------\n\n  ";
	cout << "Enter the Doctor priscription:\n\n";
	cout << "Press 1) Only Medication: \n\n";
	cout << "Press 2) Medication + Surgery\n\n";
	cin >> choice2;
	system("cls");

	Account o;
	cout << "\n\t\t-----------------Enter Number of Days Patient stay at Hospital Room:-----------------\n\n";
	cin >> n;
	system("cls");
	o.setdays(n);
	Pharmacy m;
	Surgery s;
	if (choice2 == '1')
	{
		cout << "\n\t\t\t---------------Rate list for Brain Madication Only ---------------\n\n";
		cout << "Charges of Brain Drugs Per Day: \t\t" << m.getBrain() << "/-" << endl << endl;
		cout << "Room charges per day:\t\t\t\t" << day_rate << "/-" << endl << endl << endl;

		cout << "\n\t\t-----------------Toatl Bill of the patient For Medication Only:---------------\n\n\n";
		cout << "Toatl Charges for Brain Medication Per Day:		";
		cout << m.getBrain() * o.getDays() << "/-";
		cout << "\t\tNo. of Days Patient Stay at hospital:\t " << o.getDays();
		cout << "\n\nTotal Room Charges:				";
		o.roomCharges(n); cout << "/-";
		m.update_Pharmacy_Charges(choice1, o);
		cout << "\n\nTotal charges of the Brain patient:		";
		cout << o.getCharges() << "/-" << endl << endl;
		system("pause");
		system("cls");
	}
	else if (choice2 == '2')
	{
		cout << "\n\t\t\t---------------Rate list for Brain Madication And Surgery---------------\n\n";
		cout << "Price of Brain Surgery:\t\t\t" << s.getBrain() << "/-" << endl << endl;
		cout << "Price of Brain Drugs Per Day:  \t\t" << m.getBrain() << "/-" << endl << endl;
		cout << "Room charges per day:  \t\t\t\t" << day_rate << "/-" << endl << endl << endl;


		cout << "\n\t\t-----------------Toatl Bill of the patient For Medication And Surgery:---------------\n\n\n";
		cout << "Toatl Charges for Brain Medication:			";
		cout << m.getBrain() * o.getDays() << "/-";
		cout << "\t\tNo. of Days Patient Stay at hospital:\t\t " << o.getDays() << endl << endl;
		cout << "Charges for Brain Surgery:			 ";
		cout << s.getBrain() << "/-";
		cout << "\n\nTotal Room Charges:				 ";
		o.roomCharges(n);cout << "/-";
		m.update_Pharmacy_Charges(choice1, o);
		s.update_Surgery_Charges(choice1, o);
		cout << "\n\nTotal charges of the patient:		         ";
		cout << o.getCharges() << "/-" << endl << endl;
		system("pause");
		system("cls");
	}



}
void nose(char choice1)
{

	char choice2;
	int n;

	//Selecting Doctor Prescription For the patient,Value stored in choice2 variable and this value is checked for 1 and 2..

	cout << "\n\t\t-------------------------Welcome to Nose Department--------------------\n\n  ";
	cout << "Enter the Doctor priscription:\n\n";
	cout << "Press 1) Only Medication: \n\n";
	cout << "Press 2) Medication + Surgery\n\n";
	cin >> choice2;
	system("cls");

	Account o;
	cout << "\n\t\t-----------------Enter Number of Days Patient stay at Hospital Room:-----------------\n\n";
	cin >> n;
	system("cls");
	o.setdays(n);
	Pharmacy m;
	Surgery s;
	if (choice2 == '1')
	{
		cout << "\n\t\t\t---------------Rate list for Nose Madication Only ---------------\n\n";
		cout << "Charges of Nose Drugs Per Day: \t\t" << m.getNose() << "/-" << endl << endl;
		cout << "Room charges per day:\t\t\t\t" << day_rate << "/-" << endl << endl << endl;

		cout << "\n\t\t-----------------Toatl Bill of the patient For Medication Only:---------------\n\n\n";
		cout << "Charges for Nose Medication:			 ";
		cout << m.getNose()*o.getDays() << "/-";
		cout << "\t\tNo. of Days Patient Stay at hospital:\t " << o.getDays();
		cout << "\n\nTotal Room Charges:				";
		o.roomCharges(n); cout << "/-";
		m.update_Pharmacy_Charges(choice1, o);
		cout << "\n\nTotal charges of the Nose patient:		";
		cout << o.getCharges() << "/-" << endl << endl;
		system("pause");
		system("cls");
	}
	else if (choice2 == '2')
	{
		cout << "\n\t\t\t---------------Rate list for Nose Madication And Surgery---------------\n\n";
		cout << "Charges of Nose Surgery:\t\t\t" << s.getNose() << "/-" << endl << endl;
		cout << "Charges of Nose Drugs Per Day:  \t\t" << m.getNose() << "/-" << endl << endl;
		cout << "Room charges per day:  \t\t\t\t" << day_rate << "/-" << endl << endl << endl;


		cout << "\n\t\t-----------------Toatl Bill of the patient For Medication And Surgery:---------------\n\n\n";
		cout << "Charges for Nose Medication:			 ";
		cout << m.getNose() * o.getDays() << "/-";
		cout << "\t\tNo. of Days Patient Stay at hospital:\t " << o.getDays() << endl << endl;
		cout << "Charges for Nose Surgery:			 ";
		cout << s.getNose() << "/-";
		cout << "\n\nTotal Room Charges:				 ";
		o.roomCharges(n) ;cout<< "/-";
		m.update_Pharmacy_Charges(choice1, o);
		s.update_Surgery_Charges(choice1, o);
		cout << "\n\nTotal charges of the patient:		         ";
		cout << o.getCharges() << "/-" << endl << endl;
		system("pause");
		system("cls");
	}



}
void heart(char choice1)
{
	
	char choice2;	
	int n;
	
	//Selecting Doctor Prescription For the patient,Value stored in choice2 variable and this value is checked for 1 and 2..

	cout << "\n\t\t-------------------------Welcome to Heart Department--------------------\n\n  ";
	cout << "Enter the Doctor priscription:\n\n";
	cout << "Press 1) Only Medication: \n\n";
	cout << "Press 2) Medication + Surgery\n\n";
	cin >> choice2;
	system("cls");

		Account o;
		cout << "\n\t\t-----------------Enter Number of Days Patient stay at Hospital Room:-----------------\n\n";
		cin >> n;
		system("cls");
		o.setdays(n);
		Pharmacy m;
		Surgery s;
		if (choice2 == '1')
		{
			cout << "\n\t\t\t---------------Rate list for Heart Madication Only ---------------\n\n";
			cout << "Price of Heart Drugs Per Day: \t\t\t" << m.getHeart() <<"/-"<< endl << endl;
			cout << "Room charges per day:\t\t\t" << day_rate << "/-" <<endl<<endl<<endl;
			
			cout << "\n\t\t-----------------Toatl Bill of the patient For Medication Only:---------------\n\n\n";
			cout << "Toatl Charges for Heart Medication:			 ";
			cout << m.getHeart() * o.getDays() << "/-";
			cout << "\t\tNo. of Days Patient Stay at hospital:\t " << o.getDays() ;
			cout << "\n\nTotal Room Charges:				";
			o.roomCharges(n);
			m.update_Pharmacy_Charges(choice1, o);
			cout << "\n\nTotal charges of the Heart patient:		";
			cout << o.getCharges() << "/-" << endl << endl;
			system("pause");
			system("cls");
		}
		else if (choice2 == '2')
		{
			cout << "\n\t\t\t---------------Rate list for Heart Madication And Surgery---------------\n\n";
			cout << "Charges of Heart Surgery:\t\t\t" << s.getHeart() << "/-" <<endl << endl;
			cout << "Charges of Heart Drugs Per Day:  \t\t" << m.getHeart() << "/-" << endl << endl;
			cout << "Room charges per day:  \t\t\t\t" << day_rate<<endl<<endl<<endl;
			

			cout << "\n\t\t-----------------Toatl Bill of the patient For Medication And Surgery:---------------\n\n\n";
			cout << "Toatl Charges for Heart Medication:		 ";
			cout << m.getHeart() * o.getDays() << "/-";
			cout << "\t\tNo. of Days Patient Stay at hospital:\t " << o.getDays() << endl << endl;
			cout << "Charges for Heart Surgery:			 ";
			cout << s.getHeart() << "/-";
			cout << "\n\nTotal Room Charges:				 ";
			o.roomCharges(n); cout << "/-";
			m.update_Pharmacy_Charges(choice1, o);
			s.update_Surgery_Charges(choice1, o);
			cout << "\n\nTotal charges of the patient:		         ";
			cout << o.getCharges() << "/-" << endl << endl;
			system("pause");
			system("cls");
		}
		
	
	
}

		
void bill()
{
	cout << "\n\t\t\t\t------------------------Hospital Bill------------------------------\n\n";
	
	cout << "Press 1) Enter the Details of Patient to get a computrized Reciept: \n\n";
	cout << "Press E) Exit the program\n\n";
	

}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
