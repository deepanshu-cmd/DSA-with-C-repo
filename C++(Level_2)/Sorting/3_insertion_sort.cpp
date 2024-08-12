#include <iostream>
#include <iomanip>
using namespace std;

//* Insertion sort is a simple sorting algorithm that works by iteratively inserting each element of an unsorted list into its correct position in a sorted portion of the list. It is a stable sorting algorithm, meaning that elements with equal values maintain their relative order in the sorted output.

void insertion(int arr[], int arr_length)
{
    //% Sort array in increasing order:
    for (int i = 1; i < arr_length; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        while (j >= 0)
        {
            if (arr[j] > temp)
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
            j--;
        }
        arr[j + 1] = temp;
    }
    cout << "Array sorted in increasing order = ";
    for (int i = 0; i < arr_length; i++)
    {
        cout << arr[i] << " ";
    }
}

void insertion_2(int arr[], int arr_length)
{
    //% Sort in decreasing order:
    for (int i = 1; i < arr_length; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        while (j >= 0)
        {
            if (arr[j] < temp)
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
            j--;
        }
        arr[j + 1] = temp;
    }
    cout << "Array sorted in decreasing order = ";
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
    insertion(arr, arr_length);
    cout << endl;
    insertion_2(arr, arr_length);
    return 0;
}