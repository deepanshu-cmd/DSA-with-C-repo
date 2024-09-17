#include <iostream>
#include <iomanip>
using namespace std;

//* The first pointer is used to store the address of the variable. And the second pointer is used to store the address of the first pointer. That is why they are also known as double-pointers. We can use a pointer to a pointer to change the values of normal pointers or create a variable-sized 2-D array.

int main()
{
    int num = 26;
    int *p = &num;
    int **q = &p;
    int ***r = &q;

    cout << "num = " << num << '\n'
         << "Address of num = " << &num << '\n'
         << endl;

    cout << "Address at which pointer p is pointing = " << p << '\n'
         << "Value at that address to which p is pointing = " << *p << '\n'
         << "Address of pointer p = " << &p << '\n'
         << endl;

    cout << "Address at which pointer q is pointing = " << q << '\n'
         << "Value at that address to which q is pointing = " << *q << '\n'
         << "Value at that address where q is pointing indirectly through pointer p =" << **q << '\n'
         << "Address of pointer q = " << &q << '\n'
         << endl;

    cout << "Address at which pointer r is pointing = " << r << '\n'
         << "Value at that address to which r is pointing = " << *r << '\n'
         << "Value at that address where r is pointing indirectly through pointer q =" << **r << '\n'
         << "Value at that address where r is pointing indirectly through pointer q and then p =" << ***r << '\n'
         << "Address of pointer r = " << &r << '\n'
         << endl;

    return 0;
}