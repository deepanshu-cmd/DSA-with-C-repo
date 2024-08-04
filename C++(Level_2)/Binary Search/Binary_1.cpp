//? Binary Search Algorithm is a searching algorithm used in a sorted array by repeatedly dividing the search interval in half.The idea of binary search is to use the information that the array is sorted and reduce the time complexity to O(log N).
//@ NOTE: Array elements must be sorted in either increasing or decreasing order.
#include <iostream>
#include <iomanip>
using namespace std;

int binary(int arr[], int length, int key)
{
    int start = 0, end = length - 1;
    //! int mid = (start + end)/2; ----> This will give error if 'mid' get assigned with the value which is not in the range of int[2^31-1,-(2^31-1)].
    int mid = start + (end - start) / 2; //% To avoid integer overflow, this statement is valid.
    while (start <= end)
    {

        if (arr[mid] == key)
        {
            return mid;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else if (key < arr[mid])
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
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
    cout << endl;
    int key;
    cout << "Enter your key : ";
    cin >> key;

    int mid = binary(arr, length, key);
    if (mid != -1)
    {
        cout << "Given element " << arr[mid] << " is found at index " << mid;
    }
    else
    {
        cout << "Given element " << key << " is not found in the array." << endl;
    }

    return 0;
}