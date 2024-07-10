//? An Array is a collection of homogeneuos data items stored in a contigious  memory location.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    //* Declaration.
    //^ data_type array_name[size of array];
    //! An array name contains the address of first element of the array(Base address) which acts like constant pointer. It means, the address stored in array name can't be changed.
    int arr_num[15];
    //% Number of bytes allocated to whole array.
    cout << "size of arr_num : " << sizeof(arr_num) << endl;

    //% Number of elements in array(length of array).
    cout << "Number of elements in arr_num : " << sizeof(arr_num) / sizeof(int) << endl;

    //% Without initialization we will get grabage value.
    cout << "arr_num[0] = " << arr_num[0] << endl;

    cout << endl;

    //* Initialization and Accessing elements of an array.
    //^ array_name[size of array]={e1,e2,.....en} ---> Initialization.
    int arr_num_3[5] = {2, 4, 6, 8, 10};
    cout << "1st element of arr_num_3 = " << " " << arr_num_3[0] << " " << "address = " << &(arr_num_3[0]) << '\n'
         << "2nd element of arr_num_3 = " << " " << arr_num_3[1] << " " << "address = " << &(arr_num_3[1]) << '\n'
         << "3rd element of arr_num_3 = " << " " << arr_num_3[2] << " " << "address = " << &(arr_num_3[2]) << '\n'
         << "4rth element of arr_num_3 = " << " " << arr_num_3[3] << " " << "address = " << &(arr_num_3[3]) << '\n'
         << "5th element of arr_num_3 = " << " " << arr_num_3[4] << " " << "address = " << &(arr_num_3[4]) << endl;

    cout << endl;

    //@ NOTE: We can't initialize an entire array with a non-zero value like we did with zero.We need to use fill_n(arr_name,size,value) function  for that in c++.
    //% int arr_num_2[15] = {0};
    int arr_num_2[15];
    fill_n(arr_num_2, 15, 5);
    for (int i = 0; i < 15; i++)
    {
        cout << arr_num_2[i] << " ";
    }
    return 0;
}