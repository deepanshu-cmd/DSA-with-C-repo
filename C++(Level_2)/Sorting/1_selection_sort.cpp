//? Sorting: Arranging items into an order (ex: increasing/decreasing).A Sorting Algorithm is used to rearrange a given array or list of elements according to a comparison operator on the elements. The comparison operator is used to decide the new order of elements in the respective data structure.
#include <iostream>
#include <iomanip>
using namespace std;

//* Selection sort is a simple & efficient sorting algorithm that works by repeatedly selecting the smallest (or largest) element from the unsorted portion of the list and moving it to the sorted portion of the list.
//^ For small arrays ,selection sort is usable.
void sort(int arr[], int arr_length)
{
    //* Sorting array in increasing order
    for (int i = 0; i < arr_length - 1; i++)
    {
        int min_Index = i;
        for (int j = i + 1; j < arr_length; j++)
        {
            if (arr[j] < arr[min_Index])
                min_Index = j;
        }
        //^ Swap the found minimum element with the first element
        int temp = arr[i];
        arr[i] = arr[min_Index];
        arr[min_Index] = temp;
    }

    cout << "Array sorted in increasing order: ";
    for (int i = 0; i < arr_length; i++)
    {
        cout << arr[i] << ' ';
    }
    cout << endl;

    //* Sorting array in decreasing order
    for (int i = 0; i < arr_length - 1; i++)
    {
        int max_Index = i;
        for (int j = i + 1; j < arr_length; j++)
        {
            if (arr[j] > arr[max_Index])
                max_Index = j;
        }
        //^ Swap the found maximum element with the first element
        int temp = arr[i];
        arr[i] = arr[max_Index];
        arr[max_Index] = temp;
    }

    cout << "Array sorted in decreasing order: ";
    for (int i = 0; i < arr_length; i++)
    {
        cout << arr[i] << ' ';
    }
    cout << endl;
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
    sort(arr, arr_length);
    return 0;
}