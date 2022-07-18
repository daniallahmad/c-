/**
    CS-1A, C++ Practice
    Purpose: Write a C++ program to sort a given unsorted array of integers using Bubble Sort.
    @file bubble_sort.cpp

    @author Daniall Ahmad
    @date 18/07/22

*/

#include <iostream>
using namespace std;

int main()
{
    int nums[] = {4, 10, 5, 9, 12, 8, 2, 7, 3, 1, 11, 6};

    int n = sizeof(nums) / sizeof(nums[0]);

    cout << "Original Array : ";
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (nums[i] < nums[j])
            {
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
        }
    }

    cout << "\nSorted Array   : ";
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }

    return 0;
}
