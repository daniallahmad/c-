/**
    CS-1A, C++ Practice
    Purpose: Program that accepts a positive and displays the factorial of the value.
    @file factorial.cpp

    @author Daniall Ahmad
    @date 15/04/22

*/

#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int value;
    int factorial = 1;
    cout << "Enter a positive value : ";
    cin >> value;

    if (!(value > 1))
    {
        cout << "Please enter a positive value." << endl;
    }
    else
    {
        for (int loop = value; loop > 1; loop--)
        {
            factorial *= loop;
        }
        cout << "Factorial of value " << value << " is : " << factorial << endl;
    }

    _getch();
    return 0;
}
