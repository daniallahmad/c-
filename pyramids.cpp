/**
CS-1A Asn 2,
Purpose: Prints Pyramids.
@file pyramids.cpp

@author Daniall Ahmad
@date 22/05/22 
	
*/

#include <iostream>
using namespace std;
int main()
{
    int lines;
    char check;
    int degree;
    do
    {
        cout << "Enter number of lines: ";
        cin >> lines;
        cout << "Enter degree (1,2,3,4): ";
        cin >> degree;
        if (degree == 1)
        {
            for (int row = 1; row <= lines; row++)
            {
                for (int space = 1; space <= lines - row; space++)
                {
                    cout << "  ";
                }
                for (int star = 1; star <= (row * 2) - 1; star++)
                {
                    cout << "* ";
                }

                cout << endl;
            }
        }

        else if (degree == 2)
        {
            for (int row = 1; row <= lines; row++)
            {
                for (int star = 1; star <= row; star++)
                {
                    cout << "*  ";
                }

                cout << endl;
            }
            for (int row = lines - 1; row >= 1; row--)
            {
                for (int star = 1; star <= row; star++)
                {
                    cout << "*  ";
                }

                cout << endl;
            }
        }
        else if (degree == 3)
        {
            for (int row = lines; row >= 1; row--)
            {
                for (int space = 1; space <= lines - row; space++)
                {
                    cout << "  ";
                }
                for (int star = 1; star <= (row * 2) - 1; star++)
                {
                    cout << "* ";
                }

                cout << endl;
            }
        }
        else if (degree == 4)
        {
            for (int row = 1; row <= lines; row++)
            {
                for (int space = 1; space <= lines - row; space++)
                {
                    cout << "  ";
                }
                for (int star = 1; star <= row; star++)
                {
                    cout << "* ";
                }
                cout << endl;
            }
            for (int row = lines - 1; row >= 1; row--)
            {
                for (int space = 1; space <= lines - row; space++)
                {
                    cout << "  ";
                }
                for (int star = 1; star <= row; star++)
                {
                    cout << "* ";
                }
                cout << endl;
            }
        }
        else
        {
            cout << "\nInvalid Input!";
        }

        cout << "Are you want to perform it again! (Y/N): ";
        cin >> check;
    } while (check == 'y' || check == 'Y');

    return 0;
}
