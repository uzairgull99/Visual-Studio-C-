// Sorting Algorithms.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include"iostream"
#include"conio.h"
#include<fstream>
#include <cstdlib>
#include <time.h>
using namespace::std;


void merge_sort(int* Arr, int st, int en);
void merge(int* Arr, int st, int md, int en);
int main()
{


    int n=12;
    /*cout << "\nEnter the size of array = ";
    cin >> n;*/
    int* Arr = new int[12];
    ofstream input;
    input.open("input.txt");
    /*int j = 1000;
    int k = 10000;*/

    for (int i = 0; i < 1000; i++)
    {
        input << rand()%10<<endl;
        cout << rand() % 10 << endl;
    }
    
    ifstream output;
    output.open(" input.txt ");
    cout << "\nEnter array of size n  ";
    for (int j = 0; j < n; j++)
    {
        output>> Arr[j];
        cout << "  "<<Arr[j];
    }
    
    clock_t begin, end;
    begin = clock();

    merge_sort(Arr, 0, n);

    

    ofstream sortFile;
    cout << "\nThe Sorted Array : ";
    for (int k = 0; k < n; k++)
    {
        
        sortFile.open("SortedFile.txt");
        sortFile << "  " << Arr[k];
        cout << "  " << Arr[k];
    }
    
    end = clock();
    double time = double(end - begin) / CLOCKS_PER_SEC;
    cout << "\nTime: " << time;

    cin.ignore(); cin.get();
    return 0;
   
}

void merge_sort(int* Arr, int st, int en)
{
    if (st < en)
    {
        int md = ((st + en) / 2);
        merge_sort(Arr, st, md);
        merge_sort(Arr, md + 1, en);
        merge(Arr, st, md, en);
    }
}

void merge(int* Arr, int st, int md, int en)
{
    int n1 = md - st + 1;
    int n2 = en - md;
    int* L = new (int[n1 + 1]);
    int* R = new (int[n2 + 1]);
    int i, j;
    for (i = 0; i < n1; i++)
    {
        L[i] = Arr[st + i - 1];
    }

    for (j = 0; j < n2; j++)
    {
        R[j] = Arr[md + j];
    }

    L[n1] = 9999;
    R[n2] = 9999;

    i = 0;
    j = 0;

    for (int k = st - 1; k < en; k++)
    {
        if (L[i] <= R[j])
        {
            Arr[k] = L[i];
            i++;
        }
        else
        {
            Arr[k] = R[j];
            j++;
        }
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
