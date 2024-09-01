#include <iostream>
#include <iomanip>
using namespace std;

//* Pointer with functions.

//% Updating value.
void pointer(int *n)
{
    cout << "value in function = " << *n << endl;
    *n = *n - 6;
    cout << "value in function after modification = " << *n << endl;
}

//% Updating address.
void pointer_2(int *n)
{
    cout << '\n'
         << "address stored in n in function = " << n << endl;
    n = n + 1;
    cout << "address stored in n in function after modification = " << n << endl;
}

//^ int getsum(int arr[], int size)
int getsum(int *arr, int size)
{
    cout << "Size of arr = " << sizeof(arr) << endl;
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += i[arr];
        //^ sum += arr[i];
    }
    return sum;
}

int main()
{
    int value = 26;
    cout << "Value outside of Function before modifying in the function = " << value << endl;
    int *p = &value;
    //% Passing arguments by pass by refrence methode.
    pointer(p);
    cout << "Value outside of Function after modifying in the function = " << value << endl;

    cout << '\n'
         << "Address stored in p outside of function before modification = " << p << endl;
    pointer_2(p);
    cout << '\n'
         << "Address stored in p outside of function after modification = " << p << endl
         << endl;

    int arr[5] = {6, 11, 15, 20, 26};
    cout
        << "Size of arr outside of function = " << sizeof(arr) << '\n'
        << "Sum of all elements in arr " << getsum(arr, 5) << '\n'
        << "Sum of all elements in arr " << getsum(arr + 2, 5 - 2) << endl; //% Now sum of element from index 2 to 4 would get printed.

    return 0;
}