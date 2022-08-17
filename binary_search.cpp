/**
    CS-1A, C++ Practice
    Purpose: Write a C++ program to find a number in a given array of integers using Binary Search.
    @file binary_search.cpp
    
    @author Daniall Ahmad
    @date 17/07/22
*/

#include <iostream>
using namespace std;

int binarySearch(int[], int, int, int);

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int number;
    cout << "Enter a number to find Index : ";
    cin >> number;
    int totalNumber = sizeof(arr) / sizeof(arr[0]);
    int check = binarySearch(arr, number, 0, totalNumber - 1);
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

int binarySearch(int array[], int n, int low, int high)
{
    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (array[mid] == n)
            return mid;

        if (array[mid] < n)
            low = mid + 1;

        else
            high = mid - 1;
    }
    return -1;
}
