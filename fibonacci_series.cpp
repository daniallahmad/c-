/**
    CS-1A, C++ Practice
    Purpose: Print Fibonaaci Series.
    @file fibonacci_series.cpp

    @author Daniall Ahmad
    @date 21/05/22

*/

/* Print Fibonaaci Series */

#include <iostream>
using namespace std;
int main()
{
    long a = 0, b = 1, temp;
    cout << a << "  " << b << " ";
    for (int i = 0; i < 45; i++)
    {
        temp = a + b;
        a = b;
        b = temp;
        cout << " " << temp << " ";
    }
    return 0;
}


/* Print Fibonaaci Series in range */


#include <iostream>
using namespace std;
int main()
{
    long a = 0, b = 1, temp, range;
    cout << "Enter number of fibonacci series, You want to print : ";
    cin >> range;
    cout << a << "  " << b << " ";
    for (int i = 2; i < range; i++)
    {
        temp = a + b;
        a = b;
        b = temp;
        cout << " " << temp << " ";
    }
    return 0;
}


/* {rint Fibonaaci Series b/w lower and upper limit */


#include <iostream>
using namespace std;
int main()
{
    int a = 0, b = 1, temp, lowerLimit, upperLimit;
    cout << "Enter Lower limit: ";
    cin >> lowerLimit;
    cout << "Enter Upper limit: ";
    cin >> upperLimit;
    for (int i = 0; i < 45; i++)
    {
        temp = a + b;
        a = b;
        b = temp;
        if (temp >= lowerLimit && temp <= upperLimit)
        {
            cout << temp << "  ";
        }
    }
    return 0;
}