#include <iostream>
#include <iomanip>
using namespace std;

//* Pointers with arrays: Arrays are static in nature. The array size cannot be resized(allocated or freed) as per user requirements during runtime. Pointers, on the other hand, are dynamic in nature. The memory allocation can be allocated or freed at any point in time.

int main()
{
     int arr[10] = {10, 1, 2, 3, 4, 5, 6, 7, 8, 9};
     cout << "address of first memory block of arr = " << arr << endl;
     cout << "address of first memory block of arr = " << &arr << endl;
     cout << "address of first memory block of arr = " << &arr[0] << endl
          << endl;

     cout << "Address of each memory block of arr :-" << endl;
     for (int i = 0; i < 10; i++)
     {
          cout << &arr[i] << " ";
     }
     cout << endl
          << endl;

     cout << "*arr = " << *arr << endl;
     //^ Value at address which is stored in arr.
     cout << "*arr = " << *arr + 1 << endl;

     cout << "value at 1st index = " << *(arr + 1) << endl;
     cout << "value at 1st index after multiplying 2 = " << *(arr + 1) * 2 << endl;

     cout << endl
          << "All values of arr :-" << endl;
     for (int i = 0; i < 10; i++)
     {
          cout << *(arr + i) << " ";
          //^ arr[i]= *(arr + i)
          //^ i[arr]= *(i + arr)
     }

     int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
     cout << endl
          << endl
          << "Address of arr a = " << a << endl;
     int *p = &a[0];
     cout << "Address stored in pointer p = " << p << endl;

     cout << endl
          << "Accessing all elements of arrays using pointer p :-" << endl;
     for (int i = 0; i < 10; i++)
     {
          cout << *(p + i) << setw(8) << " ";
     }

     cout << endl
          << endl
          << "Address all elements of arrays using pointer p :-" << endl;
     for (int i = 0; i < 10; i++)
     {
          cout << p + i << " ";
     }

     //@ NOTE: Address of any array is not rassinable.
     return 0;
}