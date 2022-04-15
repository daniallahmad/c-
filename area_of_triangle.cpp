/**
    CS-1A, C++ Practice
    Purpose: Program that accepts the base and height of a right-angle triangle and displays the area of the triangle.
    @file area_of_triangle.cpp
	
    @author Daniall Ahmad
    @date 09/04/22 
	
*/

#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int height;
    int base;
    int area;

    cout << "Etner Height: ";
    cin >> height;
    cout << "Enter base: ";
    cin >> base;
	
    area = (base * height) / 2;
    cout << "Area of Right Angle Triangle is: " << area;
	
    _getch();
    return 0;
}
