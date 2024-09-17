#include <iostream>
#include <iomanip>
using namespace std;

//* Refrence variable : Memory is same ,only varible name is diffrent.

int main()
{
    int d = 20;
    int &b = d;
    cout << "d = " << d << setw(14) << "b = " << b << '\n'
         << "&d = " << &d << '\t' << "&b = " << &b << '\n'
         << endl;

    //% d = d + 6;
    b = b + 6;
    cout << "d = " << d << '\t' << "b = " << b << endl;
    return 0;
}