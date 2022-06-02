// Full University Management System.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <windows.h>
#include "student.h"
#include"person.h"
#include"faculty.h"
#include <fstream>
#include<vector>
using namespace std;
void adminOption1();
int main()
{
    string pin;
    cout << "\n\n\t\t----------------Unversity Management System--------------\n\n";
    cout << "Enter 4 digit PIN to get access the System: ";
    do {
        cin >> pin;
            
            if (pin !="1234" )
            {
                cout << "ERROR occur........Your Pin is wrong\nEnter Again: ";
            }        
        
    } while ( pin != "1234");
   
    cout << "\n\n\tLoading";
    for (int i = 0; i < 10; i++)
    {     
            cout << ".";
            Sleep(100);      
    }
    system("cls");
    cout << "\t\t________________________________________________________________\n\n";
    cout << "\t\t                     Welcome To UET Management System\n";
    cout << "\t\t________________________________________________________________\n\n";
    //char choice;
    ///*switch (choice) {
    //case'1':
    //}*/
    adminOption1();
}
void addStudent(int& n)
{



}
void showStudent(vector<Student>&student)
{
    
}


void adminOption1()
{
    vector<Student> student;
    Student std;
    cin >> std;
    char choice;
    int id;
    do {
        int i = 0;
        i++;
        student.push_back(std);
        id = student.capacity();
        cout << id;
        cout << "Do you want to add more student: Y/N: ";
        cin >> choice;
        if (choice == 'Y' || choice == 'y')
        {
            cin >> std;
            student.push_back(std);
        }
        else if (choice == 'N' || choice == 'n')
        {
            break;
        }
        
    } while (1);
    
}
    
   
    
   
    
void adminMenu()
{
    string id;
    string password;
    do {
        cout << "Enter admin id: ";
        cin >> id;
        cout << "\nEnter admin password: ";
        cin >> password;
    } while (id != "admin" && password != "1234");

    cout << "1-> To Enter record of a New Student\n";
    cout << "2-> To view record of a particular student\n";
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
