/**
    CS-1A, C++ Practice
    Purpose: Program takes a year as an input and checks whether year is leap year or not.
    @file leap_year.cpp

    @author Daniall Ahmad
    @date 23/06/22

*/

#include <iostream>
using namespace std;
int main()
{
    int year;

    cout << "Enter a year: ";
    cin >> year;

    if (!(year > 999 && year < 10000))
        cout << "Invalid Input! Please Enter four-digit number.";
    else
    {
        if (year % 4 == 0)

            cout << year << " is a leap year.";

        else
            cout << year << " is not a leap year.";
    }

    return 0;
}