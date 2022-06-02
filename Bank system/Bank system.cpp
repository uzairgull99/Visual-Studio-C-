// Bank system.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
#include<stdlib.h>
#include"Bank.h"
using namespace std;
void menu();
void create_New_Account(Customer&,Bank& );
void deposit(Customer &,Bank& );
void withDraw(Customer&, Bank&);
void inquiry(Customer& , Bank&);
void closeAccount(Customer& c, Bank&);
void modify(Customer&, Bank&);
bool login(Bank&);

int main()
{

    Bank bank;
    Customer customer;
   
    cout << "\t---------------------------------------------------------------\n";
    cout << "\t\t\tBANK \n  \t\t\t\MANAGEMENT\n  \t\t\tSYSTEM\n";
    cout << "\t---------------------------------------------------------------\n\n";
    cout << "By (Uzair Gull): 2019-CS-674 \n\n";


    char choice;


    if (login(bank) == true)
    {
        do {

            system("pause");
            system("cls");
            menu();
            cin >> choice;
            system("cls");
            switch (choice)
            {
            case'1':
                create_New_Account(customer, bank);
                break;
            case'2':
                deposit(customer, bank);
                break;
            case'3':
                withDraw(customer, bank);
                break;
            case'4':
                inquiry(customer, bank);

                break;
            case'5':
                closeAccount(customer, bank);

                break;
            case'6':
                modify(customer, bank);
                break;
            }
        } while (choice != '7');

    }

    else {
        cout << "\nEXIT\n";
         }

    
}


bool login(Bank &ba)
{
    Manager manager;

    bool b=true;
    int attempts=0;
    system("pause");
    system("cls");
   
    while (1) {
        
        system("cls");
        cout << "\n\tWELCOME TO..............\n";
        cout << "\n\t\t\t\t" << ba.bankName() << endl;
        cout << "\t---------------------------------------------------------------\n";
        cout << "\nPLEASE LOGIN WITH YOUR USER NAME AND ID: \n";
        string n, id;
        cout << "\nEnter USER NAME or Manager Name: ";
        cin >> n;
        cout << "\nEnter USER ID or Manager Id: ";
        cin >> id;
        manager.setData(n, id);
        
        if (n == "uzair" && id == "1234")
        {
            cout << "\nSUCCESFULLY LOGIN\n\n";
            b = true;
            return b;
            break;
        }
        else
        {
            
            cout << "\n\nUSER NAME OR ID IS INCORRECT....\n\n\t\t\tPLEASE ENTER AGAIN\n\n";
           
            system("pause");
            b = false;
            
            attempts++;
        }

        
        if (attempts == 3) {
            cout << "\n\nSORRY YOU HAVE SO MANY ATTEMPTS!!!!!!!!!\n";
            break;
        }
            
    } 
    return b;
    
}
void menu()
{
   
    cout << "\n\t\t\t\tMAIN MENU\n\n";
    cout << "-----------------------------------------------------------------------------\n\n";
    cout << "1. NEW ACCOUNT\n\n";
    cout << "2. DEPOSIT AMOUNT\n\n";
    cout << "3. WITHDRAW AMOUNT\n\n";
    cout << "4. BALANCE INQUERY\n\n";
    cout << "5. CLOSE AN ACCOUNT\n\n";
    cout << "6. MODIFY AN ACCOUNT\n\n";
    cout << "7. EXIT\n\n\n";
    cout << "SELECT YOUR OPTION (1-7)\n";  
}

void create_New_Account(Customer &c,Bank& b)
{
   
    
    cout << "\n\t\t\tNEW ACCOUNT ENTRY FORM\n";
    cout << "-----------------------------------------------------------------------------\n";
    cout << "\nEnter Customer ID: ";
    int id;
    cin >> id;
    c.setId(id);
    int account_No;
    cout << "\nEnter Account No: ";
    cin >> account_No;
    string name;
    cout << "\nEnter Name of the Account Holder: ";
    cin >> name;
    c.setname(name);
    cout << "\nEnter Acount Type: (Current/Saving) : ";
    string account_Type;
    cin >> account_Type;
    cout << "\nEnter initial amount:\n\n\t >= 500 or more for Saving   >= 1000 or more for Current: ";
    double initial;
    cin >> initial;
    b.setAccount(account_Type, account_No, initial,c);
    cout << "\n\n Your Account created Succesfully.. \n\n";
}

void deposit(Customer& c,Bank& b)
{
    cout << "\n\t\t\tACCOUNT TRANSACTION FORM\n";
    cout << "-----------------------------------------------------------------------------\n\n";
    cout << "Enter Customer Id: ";
    int id;
    cin >> id;
    cout << "\nEnter Account No: ";
    int accNo;
    cin >> accNo;
    b.deposit(id, accNo,c);
 
}

void withDraw(Customer& c,Bank &b)
{
    cout << "\n\t\t\tACCOUNT TRANSACTION FORM\n";
    cout << "-----------------------------------------------------------------------------\n\n";
    cout << "Enter Customer Id: ";
    int id;
    cin >> id;
    cout << "\nEnter Account No: ";
    int accNo;
    cin >> accNo;
    b.withDraw(id, accNo,c);
}

void inquiry(Customer& c,Bank &b)
{
    cout << "\n\t\t\tBalance Inquiry FORM\n";
    cout << "-----------------------------------------------------------------------------\n\n";
    cout << "Enter Customer Id: ";
    int id;
    cin >> id;
    cout << "\nEnter Account No: ";
    int accNo;
    cin >> accNo;
    b.inquiry(id, accNo,c);
}

void closeAccount(Customer& c,Bank &b)
{
    cout << "\n\t\t\t\Account Deletion FORM\n";
    cout << "-----------------------------------------------------------------------------\n\n";
    cout << "Enter Customer Id: ";
    int id;
    cin >> id;
    cout << "\nEnter Account No: ";
    int accNo;
    cin >> accNo;
    b.closeAccount(id, accNo,c);
}

void modify(Customer& c,Bank &b)
{
    
    cout << "\n\t\t\tAccount Modification FORM\n";
    cout << "-----------------------------------------------------------------------------\n\n";
    cout << "Enter Customer Id: ";
    int id;
    cin >> id;
    cout << "\nEnter Account No: ";
    int accNo;
    cin >> accNo;

    b.modify(id, accNo,c);
  
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
