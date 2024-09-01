#include <iostream>
#include <iomanip>
using namespace std;

//* Pointer arthematic concept :-

int main()
{
    int num = 26;
    cout << "address of num = " << &num << endl;
    int *p = &num;
    (*p)++;
    //^ *p = *p + 1;
    cout << "value at address stored in pointer p = " << *p << endl;

    cout << "address stored in pointer p = " << p << endl;
    (p)++;
    cout << "address stored in pointer p after incrementation = " << p << endl;
    (p)++;
    cout << "address stored in pointer p after incrementation = " << p << endl;
    cout << "address of num = " << &num << endl;

    //% size of int = 4, so after incrementing pointer p,address stored in p gets incremented by 4 bytes.
    return 0;
}