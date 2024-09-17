#include <iostream>
#include <iomanip>
using namespace std;

//* Double Pointer with Functions.

void pointer(int num, int *p, int **q)
{
    num = ++num;
    cout << "num inside function after updation = " << num << endl;
    *p = ++(*p);
    cout << "Value at address where pointer p is pointing after updation inside the fucntion = " << *p << endl;
    **q = ++(**q);
    cout << "Value at address where pointer q is pointing indirectly through p after updation inside the fucntion = " << **q << '\n'
         << endl;
}

int main()
{
    int num = 26;
    int *p = &num;
    int **q = &p;
    cout << "num outside of function before updation = " << num
         << endl;

    cout << "Value at address where pointer p is pointing before updation outside the fucntion = " << *p
         << endl;

    cout << "Value at address where pointer q is pointing indirectly through p before updation outside the fucntion = " << **q << '\n'
         << endl;
    pointer(num, p, q);
    cout << "num outside of function after updation = " << num
         << endl;

    cout << "Value at address where pointer p is pointing after updation outside the fucntion = " << *p
         << endl;

    cout << "Value at address where pointer q is pointing indirectly through p after updation outside the fucntion = " << **q << '\n'
         << endl;
    return 0;
}