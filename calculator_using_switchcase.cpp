/**
	CS-1A, C++ Practice
    Purpose: Calculator which performs all arithmetical operations ( /, *, +, - ).
    @file calculator_using_switchcase.cpp
	
    @author Daniall Ahmad
    @date 10/05/22 
	
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
        switch (sign)
        {
        case '+':
        {
            cout << "Sum of numbers is: "<< number1 + number2 << endl;
			//Add the both numbers
        }
        break;

        case '-':
        {
            cout << "Subtraction of numbers is: "<< number1 - number2 << endl;
			//Subtract the number2 from number1
        }
        break;

        case '*':
        {
            cout << "Multiplication of numbers is: "<< number1 * number2 << endl;
			//Multiply both numbers
        }
        break;

        case '/':
        {
            cout <<  "Division of numbers is: "<< number1 / number2 << endl;
			//Divide the number1 by number2
        }
        break;

        default:
            cout << "Invalid Input!" << endl;
            break;
        }
        cout << "Are you want to perform it again!";
        cout << endl << "Enter y for Yes and n for No: ";
        cin >> check;
    } while ((check == 'y' || check == 'Y'));

    return 0;
}