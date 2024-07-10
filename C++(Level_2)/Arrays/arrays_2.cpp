//? Functions with arrays.
#include <iostream>
#include <iomanip>
using namespace std;

//! Passed array must be of integer type means we can't use this function for charter array ,for that we need make anohter function.
void Array(int arr_name[], int arr_size)
{
    for (int i = 0; i < arr_size; i++)
    {
        cout << arr_name[i] << " ";
    }
}

int main()
{
    //% Here size is 15 but we only give 10 element.It won't give error.The rest five indexes get filled with zero.
    const int size = 15;
    int num[size] = {15, 30, 45, 60, 75, 90, 105, 120, 135, 150};
    Array(num, 15);
    cout << endl;

    //% Actual length is 10 but on display we get 15.
    cout << "Size of num : " << sizeof(num) << '\n'
         << "Length of num : " << sizeof(num) / sizeof(int) << endl;
    return 0;
}