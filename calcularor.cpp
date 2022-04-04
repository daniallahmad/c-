/**
	CS-1A Asn 1,
    Purpose: Calculator which performs all arithmetical operations ( / % * + - ).
    @file calculator.cpp
	
    @author Daniall Ahmad
    @date 03/04/22 
	
*/

#include <iostream>
using namespace std;
int main()
{
    int number1;
    int number2;
    char sign;
    char check;
    do	//Using do while loop
    {

        cout << "Enter first number: ";
        cin >> number1;
        cout << "Enter second number: ";
        cin >> number2;
        cout << "Enter Operator (+,-,*,/): ";
        cin >> sign;
        if (sign == '+')
        {
            cout << "Sum of numbers is: "<< number1 + number2 << endl;
			//Add the both numbers
        }

        else if (sign == '-')
        {
            cout << "Subtraction of numbers is: "<< number1 - number2 << endl;
			//Subtract the number2 from number1
        }

        else if (sign == '*')
        {
            cout << "Multiplication of numbers is: "<< number1 * number2 << endl;
			//Multiply both numbers
        }

        else if (sign == '/')
        {
            cout <<  "Division of numbers is: "<< number1 / number2 << endl;
			//Divide the number1 by number2
        }
        else
            cout << "Invalid Input!" << endl;
        cout << "Are you want to perform it again!";
        cout << endl << "Enter y for Yes and n for No: ";
        cin >> check;
    } while ((check == 'y' || check == 'Y'));

    return 0;
}