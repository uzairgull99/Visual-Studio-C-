// Client1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

const int INDEX = 6;

void task1()
{
    double arr1[INDEX];
    cout << "Please Enter your Input in array\n";
    for (int i = 0; i < INDEX; i++)
    {
        cin >> arr1[i];
    }
    
    for (int i = 0; i < INDEX; i++)
    {
        cout << "Element you entered at " << i + 1 << " index is:" << arr1[i]<<endl;
    }
    cout << "Second ARRAY We initialize\n";
    
    int arr[INDEX];

   
    for (int i = 0; i < INDEX; i++)
    {
        cout << "Element at our:" << i + 1 << " index of 2nd array is:" << arr[i];
        cout << endl;
    }
}

double mini(double nin[], int index)
{
    double element;
    cout << "Seraching For an Element\n";
    cout << "Enter Element you want to search: ";
    cin >> element;

    for (int i = 0; i < index; i++)
    {
        if (element == nin[i])
        {
            cout << "Element found: ";
            return nin[i];
            break;
        }
       
       
    }
}


void task2()
{
    const int INDEX = 10;
    double nin[INDEX];
    cout << "Enter your double data in your array size 10\n";
    for (int i = 0; i < INDEX; i++)
    {
        cin >> nin[i];
    }

    double found;

    found=mini(nin, INDEX);

    cout << "Element Returned by Searching Function is: " << found<<endl;
}





   

int main()
{
    


   task1();
   // task2();
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
