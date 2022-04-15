/**
	CS-1A
	Purpose: Program that find whether the number is prime or not.
	@file prime_number.cpp

	@author Daniall Ahmad
	@date 15/04/22

*/

#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
int main()
{
	int value;
	cout << "Enter a Number : ";
	cin >> value;
	int sqrtOfValue = sqrt(value) + 1;
	bool divided = false;

	for (int loop = 2; loop <= sqrtOfValue; loop++)
	{
		if (value % loop == 0)
		{
			divided = true;
			break;
		}
	}
	if (!divided)
		cout << "The number " << value << " is a \'Prime Number\'." << endl;
	else
		cout << "The number " << value << " is not a \'Prime Number\'." << endl;

	_getch();
	return 0;
}