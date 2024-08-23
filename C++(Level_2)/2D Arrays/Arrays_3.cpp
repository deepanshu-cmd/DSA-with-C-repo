//? W.A.P to find given element in a matrix(2D array).
#include <iostream>
#include <iomanip>
using namespace std;

//* Using linear search.Time complexity = O(row * column)
//! Giving column size is neccessary when we pass 2D array as a parameter.
void isPresent(int arr[][4], int row, int col, int target)
{
    for (int r = 0; r < row; r++)
    {
        for (int c = 0; c < col; c++)
        {
            if (arr[r][c] == target)
            {
                cout << "Given Element " << target << " is found in Matrix(A) at row no. : " << ++r << " and column no. : " << ++c << endl;
                return;
            }
        }
    }
    cout << "Given Element " << target << " is not found." << endl;
}

int main()
{
    int arr[3][4];
    cout << "Enter elements of your Matrix(A): ";
    for (int r = 0; r < 3; r++)
    {
        for (int c = 0; c < 4; c++)
        {
            cin >> arr[r][c];
        }
    }
    cout << "Matrix(A):- " << endl;
    for (int r = 0; r < 3; r++)
    {
        for (int c = 0; c < 4; c++)
        {
            cout << setw(2) << arr[r][c] << " ";
        }
        cout << endl;
    }
    int target;
    cout << "Enter the element to you want to find: ";
    cin >> target;
    isPresent(arr, 3, 4, target);
    return 0;
}