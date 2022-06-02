// Time table.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
using namespace std;
#include<iomanip>
void time_table();
int main()
{
    time_table();
}


void time_table() 
{
   // Delete these line (These are for Testing purpose)
    //------------------------------------------------------
    string depName="Computer Science";
    string NameOfsub[4] = { "OOP Programing","Digital logic ","Dscrete Maths","Linear algebra" };
    string Starting_time[4] = { "8:00 am","10:00 am","1:00 pm","3:00 pm" };
    string Ending_time[4] = { "9:00 am","11:00 am","2:00 pm","4:00 pm"};
    int numberOFRooms=4;
    int num = 4;
    //------------------------------------------------------
    // Delete these lines (These are for Testing purpose)


    system("cls");
    cout << setw(105)<< "_______________________________________________________________________________\n\n";
    cout << setw(50) << "------" << depName << " Department" << "------" << endl;
    cout <<setw(105)<<"________________________________________________________________________________\n\n";
    cout << setw(70) << "Time Table\n";
    cout << setw(105)<< "________________________________________________________________________________\n\n\n";

    cout << setw(35)<<"Subjects" << setw(27) << "Starting Time" << setw(23) <<"Ending Time" << setw(17) <<"Room No\n";
    cout << "\t\t\t---------------------------------------------------------------------------------\n\n";

    int z;
    z = int(numberOFRooms);

    for (int i = 0; i < num; i++)
    {
        cout << setw(24) << i + 1 << ") "<<setw(15) << NameOfsub[i];
        cout << setw(20) << setfill(' ');
        cout << setw(17) << Starting_time[i];
        cout << setw(20) << setfill(' ');
        cout << setw(25) << Ending_time[i]<<setfill(' ');
        cout << setw(20) << setfill(' ');
        cout << setw(17) << rand() % z << "\n\n";
        
    }
   
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
