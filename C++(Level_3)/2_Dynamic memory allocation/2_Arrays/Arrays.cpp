#include <iostream>
#include <iomanip>
using namespace std;

//% An array size can't be a variable. In C/C++, local variables (like arrays) are often stored on the stack, and allocating a large array at runtime can exhaust stack space, leading to a stack overflow.If we want to give size of array at run time then we have to access heap memory.

int main()
{
    // char ch = 'b';
    // char *c = &ch;
    // cout << sizeof(ch) << '\n' //* output: 1
    //      << sizeof(c) << endl; //* output: 4

    int size;
    cout << "size = ";
    cin >> size;
    cout << endl;
    //% Pointer "arr" in stack memory pointing to address of of "new int" in heap memory.
    int *arr = new int[size];
    //^ Total space = *arr(4 bytes) in stack + new int (4*size bytes) in heap --> 4 + 4*size bytes.

    cout << "Enter elements of your array : ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;

    //@ NOTE: Memomry in stack got freed automatically once it reaches to return statement( or }).But Heap memory won't get freed automatically we have to free it manually.
}

//@ NOTE: Learn about address typecasting.