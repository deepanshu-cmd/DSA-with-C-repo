//? W.A.P to print peak element in array mountain. 
#include <iostream>
#include <iomanip>
using namespace std;

int peak(int arr[], int length)
{
    int s = 0, e = length - 1;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        if (arr[mid] < arr[mid + 1])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}

int main()
{
    int length;
    cout << "Enter length : ";
    cin >> length;
    int arr[length];
    cout << "Enter your elements of array : ";
    for (int i = 0; i < length; i++)
    {
        cin >> arr[i];
    }
    cout << "arr = ";
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Peak element = " << arr[peak(arr, length)] << " at index " << peak(arr, length) << endl;
    return 0;
}