//? POINTERS.
#include <iostream>
#include <iomanip>
using namespace std;

//* A Pointer in C++ is a variable which stores address of another variable.

int main()
{
    int num = 26;
    cout << "Value of num = " << num << '\t' << "address of num = " << &num << endl;
    cout << "size of data_type of variable num = " << sizeof(num) << endl;
    cout << endl;

    int *ptr = &num; //% declration & initialization of pointer.
    //^ ptr is a pointer to int.

    cout << "Value at address ,where pointer(ptr) is pointing = " << *ptr << endl;
    //^ '*' is called derefrecing operator. *ptr ----> value at address stored in ptr.

    cout << "address at which pointer(ptr) is pointing = " << ptr << endl;
    cout << "size of data_type of pointer ptr = " << sizeof(ptr) << endl;
    cout << endl;

    double n = 90.267;
    double *ptr2 = &n;
    cout << "Value at address ,where pointer(ptr2) is pointing = " << *ptr2 << endl;
    cout << "address at which pointer(ptr2) is pointing = " << ptr2 << endl;
    cout << "size of data_type of pointer ptr2 = " << sizeof(ptr2) << endl;

    //% Pointer in C++ is just a variable that could store the address of the other variable. In C++ size of a pointer is not fixed as it depends on Word size of the processor. In general a 32-bit computer machine then size of a pointer would be 4 bytes while for a 64-bit computer machine, it would be 8 bytes.

    //% Symbol Table is an important data structure created and maintained by the compiler in order to keep track of semantics of variables i.e. it stores information about the scope and binding information about names, information about instances of various entities such as variable and function names, classes, objects, etc.

    //@ NOTE: Can't change the content of symbol tabel.
    return 0;
}