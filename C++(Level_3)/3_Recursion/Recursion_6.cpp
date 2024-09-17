//? W.A.P through recursion which tell that the given array is sorted or not.
#include <iostream>
#include <iomanip>
using namespace std;

bool isSorted(int arr[], int length)
{
    //* Base case.
    if (length == 0 || length == 1)
        return true;
    if (arr[0] > arr[1])
        return false;
    //* Recursive call.
    else
        return isSorted(arr + 1, length - 1);
}

int main()
{
    int arr[1000];
    int length;
    cout << "Enter length of arr : ";
    cin >> length;
    cout << "Enter elements of arr: ";
    for (int i = 0; i < length; i++)
    {
        cin >> arr[i];
    }
    bool ans = isSorted(arr, length);
    cout << "Ans = " << ans << endl;
    return 0;
}