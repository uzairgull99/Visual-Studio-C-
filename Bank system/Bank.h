#pragma once
#include<iostream> 
#include <string>
using namespace std;


class Manager {
private:
	string name;
    string id;
public:
	Manager(string ="", string  = "");
	void setData(string ="", string ="");
	string getName();
	string getID();
	
	friend ostream& operator<<(ostream&, Manager&);
};

class Account {
private:
	string account_Type;
	string customer_Name;
	int account_No;
	int customer_Id;
	double balance;
public:
	Account(string = "", string = "", int = 0, int = 0, double = 0);
	void setData(string, string, int, int, double);
	void deposit(int, int);
	void withDraw(int, int);
	void inquiry(int, int);
	void closeAccount(int, int);
	void modify(int, int);
	string getAccountType();
	int getAccount_No();
	double getBalance();
	friend ostream& operator<<(ostream&, Account&);

};


class Customer {
private:
	string name;
	int id;
	Account obj;
public:
	Customer(string = "", int = 0, string = "", string = "", int = 0, int = 0, double = 0);
	void setname(string);
	void setId(int);
	void setAccount(string, int, double);
	void deposit(int, int);
	void withDraw(int, int);
	void inquiry(int, int);
	void modify(int, int);
	void closeAccount(int, int);
	string getName();
	int getId();
	Account getAccount();
	friend ostream& operator<<(ostream&, Customer&);
};


class Bank {
private:
	Account* account;
	Customer* customer;
	Manager *manager;
	string bank_name;
public:
	Bank(string = "RANDOM BANK");		
	void setAccount(string, int, double,Customer&);
	void setManager(Manager*);
	void deposit(int, int,Customer &);
	void withDraw(int, int, Customer&);
	void inquiry(int, int, Customer&);
	void modify(int, int, Customer&);
	void closeAccount(int, int,Customer&);
	void setData(Manager*, string = "");
	string bankName();
	friend ostream& operator << (ostream&, Bank&);
	~Bank();

};


