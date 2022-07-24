/**
	CS-1A, C++ Practice
	Purpose: Write a C++ program to find a number in a given array of integers using Linear Search.
	@file linear_search.cpp

	@author Daniall Ahmad
	@date 24/07/22

*/

#include <iostream>
using namespace std;

int findIndex(int arr[], int n);

int main()
{
	int arr[10] = {80, 10, 18, 29, 98, 37, 1, 35, 46, 76};
	int number ;
	cout << "Enter a number to find Index : ";
	cin >> number;
	int check = findIndex(arr, number);
	if (check == -1)
	{
		cout << "Number does not exist.";
	}
	else
	{
		cout << "Number is present at Index : " << check;
	}
	return 0;
}

int findIndex(int arr[], int number)
{
	for (int i = 0; i < 10; i++)
	{
		if (arr[i] == number)
		{
			return i;
		}
	}
	return -1;
}
