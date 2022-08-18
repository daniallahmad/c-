/**
	CS-1A Asn 1,
	Purpose: Write a C++ program to find second largest number in unsorted array of integers.
	@file second_largest.cpp

	@author Daniall Ahmad
	@date 18/08/22

*/

#include <iostream>
using namespace std;

int secondLargest(int[]);

int main()
{
	int arr[10] = {65, 56, 890, 26, 64, 63, 98, 177, 744, 100};
	int result = secondLargest(arr);

	cout << "Second Largest Number is : " << result;
	return 0;
}

int secondLargest(int arr[])
{
	int first, second;
	first = second = arr[0];

	for (int i = 0; i < 10; i++)
	{
		if (first < arr[i])
		{
			second = first;
			first = arr[i];
		}
		else if (second < arr[i])
		{
			second = arr[i];
		}
	}
	return second;
}