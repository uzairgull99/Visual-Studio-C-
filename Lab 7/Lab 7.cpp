// Lab 7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include"Add.h"
#include"Matrix.h"
#include"Swap.h"

//void add()
//{
//    Add o1(10), o2(20),o3;
//    o3 = o1 + o2;
//    cout << o3.getnum();
//}

void matrix()
{
	int arr[2][2] = { {1,2},{3,4} };
	Matrix mat1, mat2;
	mat1.setmat();
	mat2.setmat();
	mat1.dispmat();
	mat2.dispmat();
	mat1 + mat2;
	mat1 - mat2;

	/*Matrix2 matr1(arr,2), matr2(arr,2);
	matr1* matr2;*/

	complex1 o1(2, 3);
	complex2 o2(2, 3);
	o1.display();
	o2.display();
	sum(o1, o2);

	Time t1(2,61,20);
	t1.show(); cout << endl;
	Time t2(3, 45, 79);
	t2.show(); cout << endl;
	Time t3;
	t3 = t1 + t2;
	t3.show();

}
int main()
{
	matrix();
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
