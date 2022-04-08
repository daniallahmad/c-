/**
	CS-1A, C++ Practice
    Purpose: Swaps the values of two variables with each other using a third variable 'temp'.
    @file swapping.cpp
	
    @author Daniall Ahmad
    @date 08//04/22 
	
*/

#include <iostream>
using namespace std;
int main()
{
    int num1;
    int num2;
    int temp;
    
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    
    cout << "value of num1 before swapping is: " << num1 << endl;
    cout << "value of num2 before swapping is: " << num2 << endl;
	
    temp = num1;
    num1 = num2;
    num2 = temp;
    
    cout << "value of num1 after swapping is: " << num1 << endl;
    cout << "value of num2 after swapping is: " << num2 << endl;
    
    return 0;
}
