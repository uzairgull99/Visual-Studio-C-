#include"Bank.h"
#include<iostream>
using namespace std;

Manager::Manager(string n, string id)
{
	name = n;
	this->id = id;	
}

void Manager::setData(string n, string id)
{
	name = n;
	this->id = id;

}

ostream& operator<<(ostream& out, Manager& manager)
{
	out << "Manager Name: " << manager.name << endl;
	out << "Manager ID:   " << manager.id << endl;
	
	
	return out;
}
string Manager::getName()
{
	return name;
}





string Manager::getID()
{
	return id;
}


string Bank::bankName()
{
	return bank_name;
}

Bank::Bank(string n)
{
	bank_name = n;
	
	manager = new Manager;
}

void Bank::setManager(Manager *m)
{
	manager = m;

}
void Bank::setData(Manager* m,string n)
{
	manager->setData(m->getName(), m->getID());
	bank_name= n;
}
void Bank::setAccount(string n, int no, double b,Customer& c)
{
	c.setAccount(n, no, b);
}

void Bank::deposit(int id,int accNo,Customer &obj)
{
	obj.deposit(id, accNo);
}
void Bank::withDraw(int id, int accNo, Customer& obj)
{
	obj.withDraw(id, accNo);
}
void Bank::inquiry(int id, int accNo, Customer& obj)
{
	obj.inquiry(id, accNo);
}
void Bank::closeAccount(int id, int accNo, Customer& obj)
{
	obj.closeAccount(id, accNo);
}
void Bank::modify(int id, int accNo, Customer& obj)
{
	obj.modify(id, accNo);
}
Bank::~Bank()
{
	delete manager;
}

ostream& operator<<(ostream& out, Bank& b)
{
	out << "Bank Name: " << b.bank_name << endl;
	out << "Manager: " << b.manager->getName() << endl;
	return out;
}


//Customer Class


Customer::Customer(string n, int i, string t, string na, int no, int id, double b)
{
	name = n;
	id = i;
	obj.setData(t, na, no, id, b);
}
void Customer::setname(string n)
{
	name = n;
}

void Customer::setId(int i)
{
	id = i;
}

void Customer::setAccount(string type, int no, double b)
{
	obj.setData(type, name, no, id, b);
}

void Customer::deposit(int id,int accNo)
{
	obj.deposit(id,accNo);
}

void Customer::withDraw(int id, int accNo)
{
	obj.withDraw(id, accNo);
}
void Customer::inquiry(int id, int accNo)
{
	obj.inquiry(id, accNo);
}

void Customer::closeAccount(int id, int accNo)
{
	obj.closeAccount(id, accNo);
}

void Customer::modify(int id, int accNo)
{
	obj.modify(id, accNo);
}

string Customer::getName()
{
	return name;
}

int Customer::getId()
{
	return id;
}

Account Customer::getAccount()
{
	return obj;
}

ostream& operator<<(ostream& out, Account& a)
{
	out << "Account Type: " << a.account_Type << endl;
	out << "Account Number: " << a.account_No << endl;
	out << "Customer Id: " << a.customer_Id << endl;
	out << "Account Balance: " << a.balance << endl;
	return out;
}


//Account Class

Account::Account(string type,string name, int no, int id, double b)
{
	account_Type = type;
	customer_Name = name;
	account_No = no;
	customer_Id = id;
	balance = b;
}
void Account::setData(string type, string name, int no, int id, double b)
{
	account_Type = type;
	customer_Name = name;
	account_No = no;
	customer_Id = id;
	balance = b;
}
void Account::deposit(int id, int accNo)
{
	if (id == customer_Id && accNo == account_No)
	{
		cout << "\n\t\t\t   ACCOUNT STATUS\n";
		cout << "-----------------------------------------------------------------------------";
		cout << "\n\nAccount No: " << account_No;
		cout << "\n\nCustomer Id: " << customer_Id;
		cout << "\n\nAccount Holder Name: " << customer_Name;
		cout << "\n\nType of Account: " << account_Type;
		cout << "\n \nBalance amount: " << balance;
		cout << "\n\n\tEnter Amount to Deposit:  ";
		double amount;
		cin >> amount;
		{
			balance = balance + amount;
		}
		cout << "\n\n\t\t\tRecord Updated";
		cout << "\n\nNew Balance is:  " << balance << endl<<endl;
	}
	else cout << "\n\nInvalid ID ...NO Record Found....\n\n";
}

void Account::withDraw(int id, int accNo)
{
	if (id == customer_Id && accNo == account_No)
	{
		cout << "\n\t\t\t   ACCOUNT STATUS\n";
		cout << "-----------------------------------------------------------------------------";
		cout << "\n\nAccount No: " << account_No;
		cout << "\n\nCustomer Id: " << customer_Id;
		cout << "\n\nAccount Holder Name: " << customer_Name;
		cout << "\n\nType of Account: " << account_Type;
		cout << "\n\nBalance amount: " << balance;
		cout << "\n\n\t\tEnter Amount to WithDraw:";
		double amount;
		cin >> amount;
		{
			balance = balance - amount;
		}
		cout << "\n\n\t\t\tRecord Updated";
		cout << "\n\nNew Balance is:  " << balance << endl << endl;
	}
	else cout << "Invalid ID\n";
}

void Account::inquiry(int id, int accNo)
{
	if (id == customer_Id && accNo == account_No)
	{
		cout << "\n\t\t\t   ACCOUNT STATUS\n";
		cout << "-----------------------------------------------------------------------------";
		cout << "\n\nAccount No: " << account_No;
		cout << "\n\nCustomer Id: " << customer_Id;
		cout << "\n\nAccount Holder Name: " << customer_Name;
		cout << "\n\nType of Account: " << account_Type;
		cout << "\n \nBalance amount: " << balance;
		
	}
	else cout << "Invalid ID\n";
}

void Account::closeAccount(int id, int accNo)
{
	if (id == customer_Id && accNo == account_No)
	{
		cout << "\n\t\t\t   ACCOUNT STATUS\n";
		cout << "-----------------------------------------------------------------------------";
		cout << "\n\nAccount No: " << account_No;
		cout << "\n\nCustomer Id: " << customer_Id;
		cout << "\n\nAccount Holder Name: " << customer_Name;
		cout << "\n\nType of Account: " << account_Type;
		cout << "\n \nBalance amount: " << balance;
		{
			account_No = 0;
			account_Type = "";
			customer_Id = 0;
			customer_Name = "";
			balance = 0;
		}
		cout << "\n\n\t\t Record Deleted Succesfully...\n";

	}
	else cout << "Invalid ID\n";
}
void Account::modify(int id, int accNo)
{
	if (id == customer_Id && accNo == account_No)
	{
		cout << "\n\t\t\t   ACCOUNT STATUS\n";
		cout << "-----------------------------------------------------------------------------";
		cout << "\n\nAccount No: " << account_No;
		cout << "\n\nCustomer Id: " << customer_Id;
		cout << "\n\nAccount Holder Name: " << customer_Name;
		cout << "\n\nType of Account: " << account_Type;
		cout << "\n \nBalance amount: " << balance;

		string name, type;
		double b;
		cout << "\n\n\t\t\tEnter The New Details\n";
		cout << "-----------------------------------------------------------------------------";
		cout << "\n\nAccount No: " << account_No;
		cout << "\n\nCustomer Id: " << customer_Id;
		cout << "\n\nModify Account Holder Name: ";
		cin >> name;
		cout << "\n\nModify Account Type: ";
		cin >> type;
		cout << "\n\nModify Account Balance: ";
		cin >> b;

		customer_Name = name;
		account_Type = type;
		balance = b;
		cout << "\n \nRecord Modified Succesfully...\n\n";
	}
	else cout << "\nInvalid ID\n\n";
}

string Account::getAccountType()
{
	return account_Type;
}

int Account::getAccount_No()
{
	return account_No;
}

double Account::getBalance()
{
	return balance;
}

//ostream& operator<<(ostream& out, Account& a)
//{
//	out << "Account Type: " <<a.account_Type << endl;
//	out << "Account Number: " << a.account_No<< endl;
//	out << "Customer Id: " << a.customer_Id << endl;
//	out << "Account Balance: " << a.balance << endl;
//	return out;
//}