//? W.A.P to tell wheather the given character is a number,upper-case letter or a lower-case letter.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    char ch;
    cout << "Enter your character : ";
    cin >> ch;
    if (ch >= 'a' && ch <= 'z')
    {
        cout << "Given character " << ch << " is a lower-case letter.";
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        cout << "Given character " << ch << " is an upper-case letter.";
    }
    else
    {
        cout << "Given character " << ch << " is a special symbol or a number.";
    }
    return 0;
}