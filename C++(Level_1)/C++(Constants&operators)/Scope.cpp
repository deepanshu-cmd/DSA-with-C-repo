#include <iostream>
using namespace std;

int c = 26;

int main()
{
    int a, b, c;
    cout << "Enter value of a:";
    cin >> a;
    cout << "Enter value of b:";
    cin >> b;
    c = ++a * --b;
    cout << "The value of c=" << c << endl;
    cout << "The value of gloabal c=" << ::c << endl;
    //! :: --> scope resolution operator use to access values of global variables.
    return 0;
}