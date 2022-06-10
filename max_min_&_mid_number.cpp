/**
	CS-1A, C++ Practice
    Purpose: Write a program that takes three number from user and find maximum, minimum & middle number using functions.
    @file max_min_&_mid_number.cpp
	
    @author Daniall Ahmad
    @date 10/06/22 	
*/

//import libraries
#include <iostream>
using namespace std;

//function to calculate max, min & mid number.
void numbers(int a, int b, int c)
{
    int max, min, middle;

    max = a;
    if (b > max)
        max = b;
    if (c > max)
        max = c;
    cout << "The Greatest number is: " << max << endl;
    min = a;
    if (b < min)
        min = b;
    if (c < min)
        min = c;
    cout << "The minimum number is: " << min << endl;
    if (a < max && a > min)
        middle = a;
    else if (b < max && b > min)
        middle = b;
    else
        middle = c;
    cout << "The middle number is: " << middle;
}

//main function
int main()
{
    int number1;
    int number2;
    int number3;
    cout << "Enter the first Number : ";
    cin >> number1;
    cout << "Enter the second Number : ";
    cin >> number2;
    cout << "Enter the third Number : ";
    cin >> number3;

    //passing input values to function
    numbers(number1, number2, number3);
    
    return 0;
}