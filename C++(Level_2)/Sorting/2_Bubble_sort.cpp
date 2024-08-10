#include <iostream>
#include <iomanip>
using namespace std;

//* Bubble sort is a simple sorting algorithm that repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order. The pass through the list is repeated until the list is sorted.
void bubble_sort(int arr[], int arr_length)
{
    //% Sort in increasing order:
    for (int i = 1; i < arr_length; i++)
    {
        bool swapped = false;
        for (int j = 0; j < arr_length - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
            swapped = true;
        }
        if (swapped == false)
        {
            break;
        }
    }
    cout << "Array sorted in increasing order: ";
    for (int i = 0; i < arr_length; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    //% Sort in decreasing order:
    for (int i = 1; i < arr_length; i++)
    {
        bool swapped = false;
        for (int j = 0; j < arr_length - i; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
            swapped = true;
        }
        if (swapped == false)
        {
            break;
        }
    }
    cout << "Array sorted in decreasing order: ";
    for (int i = 0; i < arr_length; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr_length;
    cout << "Enter length of array: ";
    cin >> arr_length;
    int arr[arr_length];
    cout << "Enter elements of your array: ";
    for (int i = 0; i < arr_length; i++)
    {
        cin >> arr[i];
    }
    bubble_sort(arr, arr_length);
    return 0;
}
