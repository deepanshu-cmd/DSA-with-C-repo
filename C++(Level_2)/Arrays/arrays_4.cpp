//? Max and Min value in an array.
#include <iostream>
#include <iomanip>
#include <limits.h> //% INT_MAX & INT_MIN defined in limit.h header file.
using namespace std;

int get_Min(int arr_name[], int length)
{
    int minimum = INT_MAX;
    for (int i = 0; i < length; i++)
    {
        minimum = min(minimum, arr_name[i]);
        //* min() ----> predifined function
        // if (arr_name[i] < min)
        // {
        //     minimum = arr_name[i];
        // }
    }
    return minimum;
}

int get_Max(int arr_name[], int length)
{
    int maximum = INT_MIN;
    for (int i = 0; i < length; i++)
    {
        maximum = max(maximum, arr_name[i]);
        //* max() ----> predifined function
        // if (arr_name[i] > max)
        // {
        //     maximum = arr_name[i];
        // }
    }
    return maximum;
}

int main()
{
    int arr_num[100];
    int length;
    cout << "Enter length of your array : ";
    cin >> length;
    cout << "Enter elements of arr_num : ";
    for (int i = 0; i < length; i++)
    {
        cin >> arr_num[i];
    }

    cout << "Max value in arr_num : " << get_Max(arr_num, length) << endl;
    cout << "Min value in arr_num : " << get_Min(arr_num, length) << endl;

    return 0;
}