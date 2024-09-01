#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int first = 100;
    int *p = &first;
    int **q = &p;
    int second = ++(**q);
    int *r = *q;
    ++(*r);
    cout << "first = " << first << '\t' << "&first = " << &first << endl;
    cout << "&p = " << &p << '\t' << "p = " << p << '\t' << "*p = " << *p << endl;
    cout << "&q = " << &q << '\t' << "q = " << q << '\t' << "*q = " << *q << '\t' << "**q = " << **q << endl;
    cout << "&r = " << &r << '\t' << "r = " << r << '\t' << "*r = " << *r << endl;
    cout << "Second = " << second << endl;
    return 0;
}