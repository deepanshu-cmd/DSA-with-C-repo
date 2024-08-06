//? Program to print pivot element from a rotated sorted array. 
#include <iostream>
#include <iomanip>
using namespace std;

int pivot(int arr[], int length)
{
    int s = 0, e = length - 1;
    int mid = s + (e - s) / 2;
    for (; s < e; mid = s + (e - s) / 2)
    {
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
    }
    return s;
}

int main()
{
    int length;
    cout << "Enter length of your array: ";
    cin >> length;
    int arr[length];
    cout << "Enter Elements of array(rotated sorted array): ";
    //% Elements must be sorted.
    for (int i = 0; i < length; i++)
    {
        cin >> arr[i];
    }

    int index = pivot(arr, length);
    cout << "Pivot element in the given array is " << arr[index] << " at index " << index << endl;

    return 0;
}