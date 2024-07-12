#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int length, count = 0;
    cout << "Enter array length : ";
    cin >> length;
    int arr_num[length];
    cout << "Enter elements of your array : ";
    //* Read elements in array.
    for (int i = 0; i < length; i++)
    {
        cin >> arr_num[i];
    }
    //* Print all elements of array.
    for (int i = 0; i < length; i++)
    {
        cout << arr_num[i] << " ";
    }

    cout << endl;
    //* Finding unique element.
    int i = 0, j = 0;
    for (i = 0; i < length; i++)
    {
        int count = 0;
        for (j = 0; j < length; j++)
        {
            if (i == j)
            {
                continue;
            }
            if (arr_num[i] == arr_num[j])
            {
                count++;
            }
            //% Second Method.Uncommnet line no.45. 
            /*if (arr_num[i] == arr_num[j])
            {
                break;;
            }*/
        }
        // if (j==length)
        if (count == 0)
        {
            cout << arr_num[i] << " is an unique element in given array." << endl;
        }
    }
    return 0;
}