#include <iostream>
#include <iomanip>
using namespace std;
//@ Watch lectur number 26. again.
int main()
{
    char temp = 'B';
    cout << &temp << endl;
    char *q = &temp;
    cout << '\n'
         << "address stored in pointer q = " << q << endl;

    //% This is not a good practice.
    return 0;
}