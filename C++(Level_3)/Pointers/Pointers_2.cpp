#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    //! Declaring a pointer without initializing  is not a good practise ,it means that we have created a pointer which points to any address in computer which we don't know. Better to initialize pointer with any Value rather than Only declaring it.
    // int *ptr = 0;
    // cout << "Pointer ptr pointing to address = " << ptr << endl;
    // //% We will get segmentation fault in null pointer.
    // cout << "value at address to which Pointer ptr is pointing = " << *ptr << endl
    //      << endl;

    int i = 20;
    int *ptr2 = 0;
    ptr2 = &i;
    cout << "Pointer ptr2 pointing to address = " << ptr2 << endl;
    cout << "value at address to which Pointer ptr2 is pointing = " << *ptr2 << endl
         << endl;

    int num = 26;
    auto a = num;
    a = --a;
    cout << "a = " << a << endl;
    cout << "num = " << num << endl;

    int *p = &num;
    cout << "p = " << --(*p) << endl;
    cout << "num = " << num << endl;
    return 0;
}