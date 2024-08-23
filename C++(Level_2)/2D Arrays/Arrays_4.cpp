//? W.A.P to print row wise sum of Matrix.
#include <iostream>
#include <iomanip>
#include <limits.h>
using namespace std;

void rowSum(int arr[][4], int row, int col)
{
    cout << "Sum of Elemnet (row wise):-" << endl;
    for (int r = 0; r < row; r++)
    {
        int sum = 0;
        for (int c = 0; c < col; c++)
        {
            sum += arr[r][c];
        }
        cout << "Sum of elements in row " << r + 1 << " is " << sum << endl;
    }
}

void lagest_rowSum(int arr[][4], int row, int col)
{
    int maxSum = INT_MIN;
    int rowNum = 0;
    for (int r = 0; r < row; r++)
    {
        int sum = 0;
        for (int c = 0; c < col; c++)
        {
            sum += arr[r][c];
        }

        if (sum > maxSum)
        {
            maxSum = sum;
            rowNum = ++r;
        }
    }
    cout << "Row having largest sum: " << maxSum << " is row number : " << rowNum << endl;
}

void colSum(int arr[][4], int row, int col)
{
    cout << '\n'
         << "Sum of Elements (column wise):-" << endl;
    for (int c = 0; c < col; c++)
    {
        int sum = 0;
        for (int r = 0; r < row; r++)
        {
            sum += arr[r][c];
        }
        cout << "Sum of elements in column " << c + 1 << " is " << sum << endl;
    }
}

void lagest_colSum(int arr[][4], int row, int col)
{
    int maxSum = INT_MIN;
    int colNum = 0;
    for (int c = 0; c < col; c++)
    {
        int sum = 0;
        for (int r = 0; r < row; r++)
        {
            sum += arr[r][c];
        }

        if (sum > maxSum)
        {
            maxSum = sum;
            colNum = ++c;
        }
    }
    cout << "Column having largest sum: " << maxSum << " is Column number : " << colNum << endl;
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
            cout << setw(3) << arr[r][c] << " ";
        }
        cout << endl;
    }
    rowSum(arr, 3, 4);
    lagest_rowSum(arr, 3, 4);
    colSum(arr, 3, 4);
    lagest_colSum(arr, 3, 4);
    return 0;
}