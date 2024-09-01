#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int first = 26;
    int second = 20;
    int *ptr = &second;
    *ptr = 26;
    cout << "First = " << first << '\t' << "Address of first = " << &first << '\n'
         << "Second = " << second << '\t' << "Address of second = " << ptr << '\n'
         << '\t' << "Address of pointer ptr = " << &ptr << '\n'
         << endl;

    int *p = 0;
    int third = 15;
    //! *p = 15; ---> wrong(segmentation fault)
    p = &third;
    cout << "*p = " << *p << endl;

    return 0;
}