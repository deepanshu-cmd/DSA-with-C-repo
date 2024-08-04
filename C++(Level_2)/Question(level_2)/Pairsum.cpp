//? W.A.P to print pair of elements which return desired sum.
#include <iostream>
#include <iomanip>
using namespace std;

void pairsum(int arr[], int size, int sum)
{
    int S;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            S = arr[i] + arr[j];
            if (S == sum && i != j)
            {
                cout << arr[i] << ' ' << arr[j] << endl;
            }
            else
            {
                continue;
            }
        }
    }
}

int main()
{
    int length, sum;
    cout << "Enter array length : ";
    cin >> length;
    int arr_num[length];
    cout << "Enter elements of your array : ";
    //* Read elements of array.
    for (int i = 0; i < length; i++)
    {
        cin >> arr_num[i];
    }
    cout << "Enter sum of any two elements of array: ";
    cin >> sum;
    pairsum(arr_num, length, sum);
    return 0;
}