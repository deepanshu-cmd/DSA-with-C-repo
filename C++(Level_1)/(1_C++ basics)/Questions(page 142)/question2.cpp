//? Program to display ASCII code of given input.
#include <iostream>
using namespace std;

int main()
{
    char character;
    cout << "Enter your character : ";
    cin >> character;
    int integer = character;
    cout << "character_value = " << character << endl;
    cout << "ASCII_CODE = " << integer << endl;

    integer = character + 1;
    character = integer;
    cout << "Adding 1 in above ASCII_CODE." << endl;
    cout << "character_value = " << integer << endl;
    cout << "ASCII_CODE = " << character << endl;
    return 0;
}