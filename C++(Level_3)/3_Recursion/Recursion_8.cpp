//? Binary search through recursion.
#include <iostream>
#include <iomanip>
using namespace std;

int print(int arr[], int s, int e)
{
    for (int i = s; i < e; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

bool binarySearch(int arr[], int s, int e, int key)
{
    // print(arr, s, e);
    int mid = s + (e - s) / 2;

    //*base case.
    if (s > e)
        return false;

    if (arr[mid] == key)
        return true;

    else if (arr[mid] < key)
        return binarySearch(arr, mid + 1, e, key);

    else if (arr[mid] > key)
        return binarySearch(arr, s, mid - 1, key);
}

int main()
{
    int arr[1000];
    int length;
    cout << "Enter length of your array: ";
    cin >> length;
    for (int i = 0; i < length; i++)
    {
        cin >> arr[i];
    }
    int key;
    cout << "Enter key: ";
    cin >> key;
    int s = 0, e = length;
    if (binarySearch(arr, s, e, key))
        cout << "Element is found " << endl;
    else
        cout << "Element is not found" << endl;

    return 0;
}