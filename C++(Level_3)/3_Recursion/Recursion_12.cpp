//? Bubble sort with recurison.
#include <iostream>
#include <iomanip>
using namespace std;

void bubbleSort(int arr[], int length)
{

    //* Base case.
    if (length == 0 || length == 1)
        return;

    //* Processing.
    for (int i = 0; i < length; i++)
    {
        if (arr[i] > arr[i + 1])
            swap(arr[i], arr[i + 1]);
    }
    //* Recursive call.
    bubbleSort(arr, length - 1);
}

int main()
{
    int arr[1000];
    int length;
    cout << "Enter length of your array : ";
    cin >> length;
    cout << "Enter elements of your array : ";
    for (int i = 0; i < length; i++)
    {
        cin >> arr[i];
    }

    bubbleSort(arr, length);

    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}

//@ NOTE : H.W --- Do Selection and Insertion sort with recursion.