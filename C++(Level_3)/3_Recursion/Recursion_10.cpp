//? Check if a given string is palindrom or not.
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

bool checkPalindrom(string &str, int i, int e)
{
    //* Base case.
    if (i > e)
        return true;

    if (str[i] != str[e])
        return false;
    else
        return checkPalindrom(str, ++i, --e);
}

int main()
{
    string name;
    cout << "Enter your string: ";
    cin >> name;
    bool palindrom = checkPalindrom(name, 0, name.length() - 1);
    if (palindrom)
        cout << "Its is a palindrom!" << endl;
    else
        cout << "Its not a palindrom" << endl;
    return 0;
}