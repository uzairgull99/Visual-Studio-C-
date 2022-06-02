// Array probelms.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

string reverseWord(string);
int maximum(int[],int);

int main()
{
    /*string word = "uzair";
   cout<<reverseWord(word);*/

    int array[5] = { 1,2,7,5,2 };
    maximum(array,5);

}

//string reverseWord(string word)
//{
//    string reversed_word;
//    int len =word.length();
//    cout << len << "\n";
//    int i = 0;
//    while (len != 0)
//    {
//        reversed_word.push_back(word[len]);
//        //cout << reversed_word;
//        i++;
//        len--;
//    }
//   
//    return reversed_word;
//}


int maximum(int array[],int index)
{
    int max = array[0];
    int i = 0;
    while (array!='\0')
    {
        if (max < array[i]) {
            max = array[i];
            i++;
        }
        else {
            i++;
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
