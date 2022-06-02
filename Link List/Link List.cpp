// Link List.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
//#include"Doubly link.h"
#include"Doubly_Link.h"
#include "Link.h"
using namespace std;
void menu();
void panel();

int main()
{
	panel();
	/*DoublyList L;
	cout << "Enter How many Nodes you want to enter in List" << endl;
	int num;
	cin >> num;
	string name;
	for (int i = 0; i < num; i++)
	{
		cout << "Enter " << i + 1 << " item in the list" << endl;
		cin >> name;
		L.InsertAtStart(new DoublyNode(name));
	}

	L.display();
	
	for (int i = 0; i < num; i++)
	{
		cout << "Enter " << i + 1 << " item in the list" << endl;
		cin >> name;
		L.InsertAtEnd(new DoublyNode(name));
	}*/

	/*cout << "Delete\n";
	L.deletionFromStart();
	L.display();
	DoublyNode node;
	cin >> name;
	node.setData(name);
	cout << "Enter updated value: ";
	cin >> name;
	L.updateData(node.getData(), new DoublyNode(name));
	L.display();
	cout << "Search: ";
	cin >> name;
	node.setData(name);
	L.search(node);*/
	
}

void test()
{
	List L;
	cout << "Enter How many Nodes you want to enter in List" << endl;
	int num;
	cin >> num;
	string name;
	for (int i = 0; i < num; i++)
	{
		cout << "Enter " << i + 1 << " item in the list" << endl;
		cin >> name;
		L.insertAtStart(new Node(name));
	}
	cin >> num;
	for (int i = 0; i < num; i++)
	{
		cout << "Enter " << i + 1 << " item in the list" << endl;
		cin >> name;
		L.insertAtEnd(new Node(name));
	}


	L.display();
	cout << endl << endl;

	//L.deleteAtStart(n);
	//cout << "Delete from Start"<<endl;
	//L.deleteFromStart();
	L.deleteFromEnd();
	L.display();
	cout << endl;
	cout << "Update Data" << endl;
	Node oldData;
	cin >> name;
	oldData.setData(name);
	cin >> name;
	L.updateData(oldData, new Node(name));
	cout << endl;
	L.display();
	cout << endl;
	cout << "Search" << endl;
	cin >> name;
	oldData.setData(name);
	L.search(oldData);
	cout << endl;
	cout << "Node:" << endl;
	L.numberOfNodes(name);
}
void menu()
{
	cout << "\n-----------------------------------------------------\n";
	cout << "\t\t\tOperations:";
	cout << "\n-----------------------------------------------------\n";
	cout << "1) Insert Node at Start\n";
	cout << "2) Insert Node At the End\n";
	cout << "3) Insert Node at any Point\n";
	cout << "4) Delete Node from Start\n";
	cout << "5) Delete Node from the End\n";
	cout << "6) Delete Node from any Point\n";
	cout << "7) Update Data from Existing Nodes\n";
	cout << "8) Serach Data By Key Value\n";
	cout << "9) Number of Nodes With the Key Value\n";
	cout << "d) Display List\n";
	cout << "x) Press 'x'to terminate the program\n\n";
	
}

void panel()
{
	char ch;
	List L;
	do {
		menu();
		cin >> ch;
		
		switch (ch)
		{
		case'1':
		{

			cout << "Enter Data you want to enter: ";
			string name;
			cin >> name;
			L.insertAtStart(new Node(name));
			cout << "--------List after Inserting a Node-------\n";
			L.display();
			char c;
			while (1)
			{
				cout << "Press 1 to add one more Node / Press any button to exit: ";
				cin >> c;
				if (c == '1')
				{
					cout << "Enter Data you want to enter: ";
					cin >> name;
					L.insertAtStart(new Node(name));
					cout << "-------List after Inserting a Node-----\n";
					L.display();
				}
				else
					break;

			}
		}
		break;

		case'2':
		{
			cout << "Enter Data you want to enter: ";
			string name;
			cin >> name;
			L.insertAtEnd(new Node(name));
			cout << "--------List after Inserting a Node-------\n";
			L.display();
			char c;
			while (1)
			{
				cout << "Press 1 to add one more Node: ";
				cin >> c;
				if (c == '1')
				{
					cin >> name;
					L.insertAtEnd(new Node(name));
					cout << "--------List after Inserting a Node-------\n";
					L.display();
				}
				else
				{
					break;
				}
			}
		}
		break;


		case'4':
		{

			while (1)
			{
				L.deleteFromStart();
				cout << "List after Deleting a Node\n";
				L.display();
				char c;
				cout << "Press 1 to delete one more Node: ";
				cin >> c;
				if (c == '1')
				{
					L.deleteFromStart();
					cout << "List after Deleting a Node\n";
					L.display();
				}
				else
				{
					break;
				}
			}
			
		}
		break;

		case'5':
		{

			while (1)
			{
				L.deleteFromEnd();
				cout << "List after Deleting a Node\n";
				L.display();
				char c;
				cout << "Press 1 to delete one more Node: ";
				cin >> c;
				if (c == '1')
				{
					L.deleteFromEnd();
					cout << "List after Deleting a Node\n";
					L.display();
				}
				else
				{
					break;
				}
			}
		}
		break;

		case'7':
		{
			cout << "List before Updation\n";
			L.display();
			string name;
			Node oldData;
			cout << "Enter Key value you want to update: ";
			cin >> name;
			oldData.setData(name);
			cout << "Enter Value you want to Update: ";
			cin >> name;
			L.updateData(oldData, new Node(name));
			cout << "List after Updation\n";
			L.display();
			char c;
			while (1)
			{
				
				cout << "Press 1 to update one more Node: ";
				cin >> c;
				if (c == '1')
				{
					cout << "Enter Key value you want to update: ";
					cin >> name;
					oldData.setData(name);
					cout << "Enter Value you want to Update: ";
					cin >> name;
					L.updateData(oldData, new Node(name));
					cout << "List after Updation\n";
					L.display();
				}
				else
				{
					break;
				}
			}
			
		}
		break;

		case'8':
		{
			string name;
			Node oldData;
			cout << "Enter Key value you want to Search: ";
			cin >> name;
			oldData.setData(name);
			L.search(oldData);
			char c;
			while (1)
			{
				
				cout << "Press 1 to search more Node: ";
				cin >> c;
				if (c == '1')
				{
					cout << "Enter Key value you want to Search: ";
					cin >> name;
					oldData.setData(name);
					L.search(oldData);
				}
				else
				{
					break;
				}
			}
		}
		break;

		case'9':
		{
			string name;
			Node oldData;
			cout << "Enter Key value you want to Search: ";
			cin >> name;
			oldData.setData(name);
			L.numberOfNodes(oldData);
		}
		break;

		case'd':
		{
			cout << "----------Whole List----------\n";
			L.display();
		}
		break;
		
		}
		
	} while (ch!= 'x');
	
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
