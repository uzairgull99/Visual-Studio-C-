#pragma once
#include <iostream>
using namespace std;

class Matrix {
private:
	int matr[2][2];
public:
	void setmat();
	void operator+( Matrix);
	void operator-(Matrix);
	void dispmat();
};


void Matrix::setmat()
{
	cout << "enter\n";
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cin >> matr[i][j];
		}
		
	}
}
void Matrix::dispmat()
{

	
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			
			cout<< matr[i][j];
			cout << "\t\t";
		}
		cout << "\n";
	}
	cout << "\n";
}
void Matrix::operator+( Matrix  right)
{
	int temp[2][2];
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			temp[i][j] = matr[i][j] + right.matr[i][j];

		}
	}

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cout<< temp[i][j];
			cout << "\t\t";
		}
		cout << "\n";
	}
	cout << "\n";
}
void Matrix::operator-(Matrix  right)
{
	int temp[2][2];
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			temp[i][j] = matr[i][j] - right.matr[i][j];

		}
	}

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			
			cout << temp[i][j];
			cout << "\t\t";
		}
		cout << "\n";
	}
	cout << "\n";
}



////class Matrix2 {
////private:
////	int matr[2][2];
////public:
////	Matrix2();
////	Matrix2(int[][2], int);
////	void operator *(const Matrix2);
////	/*void operator /(const Matrix2);*/
////
////};
////
////
////Matrix2::Matrix2()
////{
////	matr[2][2] = 0;
////}
////
////Matrix2::Matrix2(int a[][2], int k)
////{
////	for (int i = 0; i < k; i++)
////	{
////		for (int j = 0; j < 2; i++)
////		{
////			matr[2][2] = a[i][j];
////		}
////		}
////		
////	
//}
//
//void Matrix2::operator*(const Matrix2 right)
//{
//	int a[2][2] = { 0 };
//
//	
//		for (int i = 0; i < 2; i++)
//		{
//			for (int j = 0; j < 2; j++)
//			{
//				for (int k = 0; k < 2; i++)
//				{
//					a[i][j] = a[i][j]+matr[i][k] * right.matr[k][j];
//
//				}
//				
//			}
//		}
//	
//		for (int i = 0; i < 2; i++)
//		{
//			for (int j = 0; j < 2; j++)
//			{
//
//				cout << matr[i][j];
//				cout << "\t\t";
//			}
//			cout << "\n";
//		}
//		cout << "\n";
//}

class complex2;
class complex1{
private:
	int x;
	int img;
public:
	complex1(int = 0, int = 0);
	void display();
	friend void sum(complex1, complex2);

};

complex1::complex1(int num, int im)
{
	x = num;
	img = im;
}
void complex1::display()
{
	cout << "Real Part: " << x << endl;
	cout << "Imaginary Part: " << img << endl;
}



class complex2 {
private:
	int x;
	int img;
public:
	complex2(int = 0, int = 0);
	void display();
	friend void sum(complex1, complex2);
};


complex2::complex2(int num, int im)
{
	x = num;
	img = im;
}
void complex2::display()
{
	cout << "Real Part: " << x<<endl;
	cout << "Imaginary Part: " << img << endl;
}


void sum(complex1 o1, complex2 o2)
{
	int real, img;
	real = o1.x + o2.x;
	img = o1.img + o2.img;
	cout << "Sum of real Parts: " << real<<endl;
	cout << "Sum of Imaginary Parts: " << img<< endl;

}

class Time {
private:
	int hours;
	int minutes;
	int seconds;
public:
	Time(int = 0, int = 0, int = 0);
	void show();
	Time operator+(const Time);
	/*Time operator-(const Time);*/
};

Time::Time(int h, int m, int s)
{
	hours = h;
	minutes = m;
	seconds = s;
}

void Time::show()
{
	if (seconds >= 60)
	{
		seconds = seconds - 60;
		minutes = minutes + 1;
		cout << hours << ":" << minutes << ":" << seconds << endl;
	}
	else if (minutes >= 60)
	{
		minutes = minutes - 60;
		hours = hours + 1;
		cout << hours << ":" << minutes << ":" << seconds << endl;
	}
	
}
Time Time::operator+(const Time o)
{
	Time o1;
	o1.hours = hours + o.hours;
	o1.minutes = minutes + o.minutes;
	o1.seconds = seconds + o.seconds;
	show();
	return o1;
}