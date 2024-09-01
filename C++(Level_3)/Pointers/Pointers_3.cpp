#include <iostream>
#include <iomanip>
using namespace std;

//* Making copy of a pointer.

int main()
{
     int num = 26;
     cout << "address of variable num = " << &num << endl;

     int *p = &num;
     //^ p is a pointer to int which pointing to the address of variable num.

     int *q = p;
     //^ q is a pointer to int which is pointing to the address stored in pointer p.

     cout << "address at which pointer p is pointing = " << &(*p) << '\n'
          << "address at which pointer q is pointing = " << &(*q) << endl
          << endl;

     cout << "address stored in pointer p = " << p << '\n'
          << "address stored in pointer q = " << q << endl
          << endl;

     cout << "value at address stored in *p = " << *p << '\n'
          << "value at address stored in *q = " << *q << endl
          << endl;

     cout << "address of pointer p = " << &p << '\n'
          << "address of pointer q =" << &q << endl
          << endl;
     return 0;
}