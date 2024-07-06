#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a = 1;
    int b = a++;
    int c = ++a;
    cout << "b = " << b << '\n'
         << "c = " << c << endl;
    return 0;
}