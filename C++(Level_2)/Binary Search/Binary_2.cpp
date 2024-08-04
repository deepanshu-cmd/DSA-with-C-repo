//? W.A.P to tell first and last occurence of an element in an array.
#include <iostream>
#include <iomanip>
using namespace std;
//@ NOTE: Watch lecture 13 for breif understanding of pair and vectors

int lastoccurence(int arr[], int length, int key)
{
    int start = 0, end = length - 1, ans = -1;
    int mid = start + (end - start) / 2; //% To avoid integer overflow this statement is valid.
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
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
    return ans;
}

int Firstoccurence(int arr[], int length, int key)
{
    int start = 0, end = length - 1, ans = -1;
    int mid = start + (end - start) / 2; //% To avoid integer overflow this statement is valid.
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        /*else if (key < arr[mid])
        {
            end = mid - 1;
        }*/
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
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
    int key;
    cout << "Enter your key : ";
    cin >> key;

    cout << "First occurence of " << key << " is at index " << Firstoccurence(arr, length, key) << endl;
    cout << "Last occurence of " << key << " is at index " << lastoccurence(arr, length, key) << endl;

    //% Total number of occurence = (last occurence index - first occurence index) + 1.
    cout << "Total number of occurence of " << key << " = " << (lastoccurence(arr, length, key) - Firstoccurence(arr, length, key)) + 1 << endl;

    return 0;
}
