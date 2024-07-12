#include <iostream>
#include <iomanip>
using namespace std;

void reverse(int arr[], int length)
{

    for (int i = 0, j = length - 1; i < j; i++, j--)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    cout << endl
         << "arr_num = " << " ";
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int length;
    cout << "Enter length of your array : ";
    cin >> length;

    int arr_num[length];
    cout << "Enter elements of arr_num : ";
    for (int i = 0; i < length; i++)
    {
        cin >> arr_num[i];
    }

    reverse(arr_num, length);

    return 0;
}