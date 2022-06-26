/**
  CS-1A, C++ Practice
    Purpose: Program that takes marks as an input and checks the grade.
    @file check_grade.cpp

    @author Daniall Ahmad
    @date 26/06/22

*/

#include <iostream>

using namespace std;

int main()
{
  int marks;
  cout << " Please enter your marks to check Grade : ";
  cin >> marks;
  if (marks <= 100)
  {
    if (marks <= 33)
      cout << " Your Grade is \"F\"";
    else if (marks <= 50)
      cout << " Your Grade is \"E\"";
    else if (marks <= 60)
      cout << " Your Grade is \"D\"";
    else if (marks <= 70)
      cout << " Your Grade is \"C\"";
    else if (marks <= 80)
      cout << " Your Grade is \"B\"";
    else if (marks <= 90)
      cout << " Your Grade is \"A\"";
    else
      cout << " Your Grade is \"A+\"";
  }
  else
    cout << "Invalid.Please enter b/w 0-100 ";
  return 0;
}