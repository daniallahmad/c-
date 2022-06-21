/**
    CS-1A, C++ Practice
    Purpose: Program to print size of data types using 'sizeof' operator.
    @file sizeof.cpp

    @author Daniall Ahmad
    @date 22/06/22

*/

#include <iostream>
using namespace std;
int main()
{
    cout << "Size of char is: " << sizeof(char) << " byte." << endl;
    cout << "Size of bool is: " << sizeof(bool) << " byte." << endl;
    cout << "Size of short is: " << sizeof(short) << " bytes." << endl;
    cout << "Size of int is: " << sizeof(int) << " bytes." << endl;
    cout << "Size of long is: " << sizeof(long) << " bytes." << endl;
    cout << "Size of float is: " << sizeof(float) << " bytes." << endl;
    cout << "Size of double is: " << sizeof(double) << " bytes." << endl;
    cout << "Size of long double is: " << sizeof(long double) << " bytes." << endl;
    return 0;
}
