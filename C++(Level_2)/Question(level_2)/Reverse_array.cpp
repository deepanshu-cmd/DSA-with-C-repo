//? Printing element of arrays in reverse oder. 
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int arr_num[100];
    int length;
    cout << "Enter length of your array : ";
    cin >> length;

    cout << "Enter elements of arr_num : ";
    for (int i = 0; i < length; i++)
    {
        cin >> arr_num[i];
    }

    cout << "arr_num = " << " ";
    for (int i = 0; i < length; i++)
    {
        cout << arr_num[i] << " ";
    }

    cout << endl
         << "Reverse of arr_num = " << " ";
    for (int i = length - 1; i >= 0; i--)
    {
        cout << arr_num[i] << " ";
    }
    return 0;
}