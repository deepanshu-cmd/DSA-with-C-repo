//? Swapping of two no.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // int a = 20, b = 26, c;
    // c = a;
    // a = b;
    // b = c;
    // cout << "a=" << a << '\n'
    //      << "b=" << b << endl;

    int a = 20, b = 26;
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "a=" << a << '\n'
         << "b=" << b << endl;
    return 0;
}