//? Program to display ASCII code of given input.
#include <iostream>
using namespace std;

int main()
{
    char character;
    cout << "Enter your character : ";
    cin >> character;
    cout << "character_value = " << character << endl;
    cout << "ASCII_CODE = " << int(character) << endl;

    cout << "Adding 1 in above ASCII_CODE." << endl;
    cout << "character_value = " << int(character + 1) << endl;
    cout << "ASCII_CODE = " << char(character + 1) << endl;
    return 0;
}