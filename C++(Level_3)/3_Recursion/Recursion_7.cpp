//? Linear search through recursion.
#include <iostream>
#include <iomanip>
using namespace std;

int print(int arr[], int length)
{
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int linearSearch(int arr[], int length, int key)
{
    //% print(arr, length);

    //* Base case.
    if (length == 0)
        return 0;

    if (arr[0] == key)
        return 1;
    else
        linearSearch(arr + 1, length - 1, key);
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
    if (linearSearch(arr, length, key))
        cout << "Element is found" << endl;
    else
        cout << "Element is not found" << endl;
    return 0;
}