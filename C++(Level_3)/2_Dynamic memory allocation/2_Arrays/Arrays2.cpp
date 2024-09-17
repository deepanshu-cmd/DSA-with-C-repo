#include <iostream>
#include <iomanip>
using namespace std;

//* Creating a 2d array through dynamic memory allocation.

int main()
{

    //% When row != cols.
    int row, cols;
    cout << "Enter number of rows and cols : ";
    cin >> row >> cols;
    int **arr = new int *[row];
    for (int i = 0; i < row; i++)
    {
        arr[i] = new int[cols];
    }
    cout << "Enter Elements of your 2d array: ";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "Array :- " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << setw(2) << arr[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < row; i++)
    {
        delete[] arr[i];
    }

    delete[] arr;

    // //% When row = cols.
    // int n;
    // cout << "Enter number of rows: ";
    // cin >> n;
    // int **arr = new int *[n];

    // for (int i = 0; i < n; i++)
    // {
    //     arr[i] = new int[n];
    // }

    // cout << '\n'
    //      << "Enter elements of array : ";
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cin >> arr[i][j];
    //     }
    // }
    // cout << '\n'
    //      << "Array : " << endl;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // //^Releasing memory from heap.
    // for (int i = 0; i < n; i++)
    // {
    //     delete[] arr[i];
    // }

    // delete[] arr;

    return 0;
}