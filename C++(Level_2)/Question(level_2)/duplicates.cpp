#include <iostream>
#include <iomanip>
using namespace std;

//! Below code will work only if a single element  got repeated twice and 1 < arr[i] < length-1(ex:-1,2,2,3,4)
int duplicates(int arr_num[], int length)
{
    int ans = 0;
    for (int i = 0; i < length; i++)
    {
        ans = ans ^ arr_num[i];
    }
    for (int i = 1; i < length; i++)
    {
        ans = ans ^ i;
    }
    return ans;
}

int main()
{
    int length;
    cout << "Enter array length : ";
    cin >> length;
    int arr_num[length];
    cout << "Enter elements of your array : ";
    //* Read elements of array.
    for (int i = 0; i < length; i++)
    {
        cin >> arr_num[i];
    }

    cout << "Repeated element = " << duplicates(arr_num, length) << endl;

    return 0;
}