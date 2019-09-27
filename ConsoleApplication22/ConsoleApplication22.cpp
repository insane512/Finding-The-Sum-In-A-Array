// ConsoleApplication22.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;





int main()
{


	int a[] = {5,5,10};
	int sum = 0;
	int tempSum = a[0] + a[1];
	int tempSum1 = 0;
	tempSum1 += tempSum;

	for (int i = 0; i < size(a); i++)
	{
		cout << " The Number Is " << a[i] << endl;
		sum += a[i];
		

	}
	
	cout << endl << a[0] << " + " << a[1] << " = " << tempSum << endl;
	cout << tempSum << " + " << a[2] << " = " << sum << endl;
	cout << endl;
     
	cout << "First Number + Second Number + Third Number = " << sum << endl;

}


