//? Program to print area of a circle.
#include <iostream>
using namespace std;

int main()
{
    double r, a, PI = 3.14;
    cout << "Enter value of radius(r):";
    cin >> r;
    a = PI * (r * r);
    cout << "area of a circle is:" << a << endl;
    return 0;
}
