//? Program to print max/min value of in an array.
#include <iostream>
#include <iomanip>
using namespace std;

//* Min value function:
int min_arr(int arr_min[], int length)
{
    int min = arr_min[0];
    for (int i = 0; i < length; i++)
    {
        if (min > arr_min[i])
        {
            min = arr_min[i];
        }
    }
    return min;
}

//* Max value function:
int max_arr(int arr_max[], int length)
{
    int max = arr_max[0];
    for (int i = 0; i < length; i++)
    {
        if (max < arr_max[i])
        {
            max = arr_max[i];
        }
    }
    return max;
}

int main()
{
    int length;
    cout << "Enter length of your array : ";
    cin >> length;
    int arr_num[length];
    cout << "Enter elements of your array : ";
    for (int i = 0; i < length; i++)
    {
        cin >> arr_num[i];
    }
    cout << "arr_num = ";
    for (int i = 0; i < length; i++)
    {
        cout << arr_num[i] << " ";
    }

    cout << '\n'
         << "Max value of arr_num = " << max_arr(arr_num, length) << '\n'
         << "Min value of arr_num = " << min_arr(arr_num, length) << endl;

    return 0;
}