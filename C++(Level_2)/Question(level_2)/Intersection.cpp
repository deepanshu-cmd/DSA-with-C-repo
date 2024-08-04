//? You are given two arrays 'A' and 'B' of size 'N' and 'M' respectively. Both these arrays are sorted in non-decreasing order. You have to find the intersection of these two arrays.Intersection of two arrays is an array that consists of all the common elements occurring in both arrays.
#include <iostream>
#include <iomanip>
#include <limits.h>
using namespace std;

//! Below code is optimised solution ,it works if both arrays are sorted in non-decreasing order(ascending).Approache used in below code was Two pointer approach
void intersection2(int arr1[], int arr2[], int length1, int length2)
{
    int i = 0, j = 0;
    while (i < length1 && j < length2)
    {
        if (arr1[i] == arr2[j])
        {
            cout << arr1[i] << ' ';
            i++;
            j++;
        }
        else if (arr1[i] < arr2[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }
}

void intersection(int arr1[], int arr2[], int length1, int length2)
{
    for (int i = 0; i < length1; i++)
    {
        int element = arr1[i];
        for (int j = 0; j < length2; j++)
        {
            if (element == arr2[j])
            {
                cout << arr2[j] << ' ';
                arr2[j] = INT_MIN;
                break;
            }
        }
    }
}

int main()
{
    int length1, length2;
    cout << "Enter length of arr1 and arr2: ";
    cin >> length1 >> length2;
    int arr1[length1];
    int arr2[length2];
    cout << "Enter Elements of arr1: ";
    for (int i = 0; i < length1; i++)
    {
        cin >> arr1[i];
    }
    cout << endl;
    cout << "Enter Elements of arr2: ";
    for (int j = 0; j < length2; j++)
    {
        cin >> arr2[j];
    }
    intersection(arr1, arr2, length1, length2);
    // intersection2(arr1, arr2, length1, length2);
    return 0;
}