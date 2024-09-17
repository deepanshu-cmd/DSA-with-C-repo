//? Reverse the string using recursion.
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void reverse(string &str, int i, int e)
{
    cout << "str = " << str << endl;
    //* Base case.
    if (i > e)
        return;

    //* Processing.
    swap(str[i], str[e]);
    i++;
    e--;

    //* Recursive call.
    reverse(str, i, e);
}

int main()
{
    string name;
    cout << " Enter your name: ";
    cin >> name;
    cout << endl;
    reverse(name, 0, name.length() - 1);
    cout << '\n'
         << name << endl;
    return 0;
}