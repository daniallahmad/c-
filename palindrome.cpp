/**
    CS-1A, C++ Practice
    Purpose: Program takes a word as an input from user and checks whether it is palindrome or not.
    @file palindrome.cpp

    @author Daniall Ahmad
    @date 24/06/22

*/

#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int size;
    char word[20] = {};
    char name[20] = {};
    cout << "Enter a word : ";
    cin.getline(word, 20);
    size = strlen(word);
    int last = size - 1;

    for (int i = 0; i < size; i++)
    {
        strncpy(&name[last - i], &word[i], 1);
    }
    int check = strcmp(word, name);

    if (check == 0)
    {
        cout << "\"" << word << "\" is Palindrome." << endl;
    }
    else
    {
        cout << "\"" << word << "\" is not Palindrome." << endl;
    }

    return 0;
}