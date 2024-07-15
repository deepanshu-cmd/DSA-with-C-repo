#include <iostream>
#include <iomanip>
using namespace std;

//! Not working when size is odd.
int swap(int arr[], int size)
{

    for (int i = 0; i < size-1; i = i + 2)
    {
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
    }
}

int main()
{
    int length;
    cout << "Enter length of your array : ";
    cin >> length;
    int arr_num[length];
    cout << "Enter elements of your array : ";
    for (int i = 0; i < length; i++)
    {
        cin >> arr_num[i];
    }

    swap(arr_num, length);
    for (int i = 0; i < length; i++)
    {
        cout << arr_num[i] << " ";
    }

    return 0;
}