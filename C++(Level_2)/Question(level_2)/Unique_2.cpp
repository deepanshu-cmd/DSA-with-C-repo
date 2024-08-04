#include <iostream>
#include <iomanip>
using namespace std;

//! Below code works only when length of array is odd(2m-1).

int unique(int arr[], int length)
{
    //* Finding unique element.
    /*
    logic : Using XOR Operator
    0 ^ num = num;
    num ^ num = 0;
    */
    int ans = 0;
    for (int i = 0; i < length; i++)
    {
        ans = ans ^ arr[i];
        cout << ans << endl;
    }
    return ans;
}

int main()
{
    int length;
    cout << "Enter length : ";
    cin >> length;
    int arr[length];
    cout << "Enter elements of array : ";
    for (int i = 0; i < length; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << '\n'
         << "Unique element in array = " << unique(arr, length) << endl;
    return 0;
}
