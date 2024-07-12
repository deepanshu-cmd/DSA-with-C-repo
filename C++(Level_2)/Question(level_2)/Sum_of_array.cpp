//? Program to print sum of all elements in an array.
#include <iostream>
#include <iomanip>
using namespace std;

int arr_sum(int arr_sum[], int length)
{
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum = sum + arr_sum[i];
    }
    return sum;
}

int main()
{
    int length;
    cout << "Enter array length : ";
    cin >> length;
    int arr_num[100];
    cout << "Enter elements in your array : ";
    for (int i = 0; i < length; i++)
    {
        cin >> arr_num[i];
    }

    cout << "Sum of all elements in arr_num : " << arr_sum(arr_num, length) << endl;
    return 0;
}