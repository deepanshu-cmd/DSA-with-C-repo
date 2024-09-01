#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int first = 26;
    int *p = &first;
    int *q = p;
    (*q)++;
    cout << "First = " << first << endl;
    cout << "First = " << *p << endl;
    cout << "First = " << *q << endl;

    int second = 25;
    int *r = &second;
    cout << "Value at address where pointer r is pointer after post increment = " << (*r)++ << endl;
    cout << "Second = " << second << endl;

    return 0;
}