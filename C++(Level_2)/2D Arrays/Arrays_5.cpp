//? W.A.P to print transpose of a Matrix(A).
#include <iostream>
#include <iomanip>
using namespace std;

//* Transpose of Matrix: Row becomes column and column becomes row (rxc <------> cxr).
void transpose(int arr[][4])
{
    cout << "Transpose of Matrix(A):- " << endl;
    for (int row = 0; row < 4; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cout << setw(2) << arr[col][row] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int arr[3][4];
    cout << "Enter elements of your array(taking row wise input): ";
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cin >> arr[row][col];
        }
    }
    cout << "Element of 2D array:- " << endl;
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cout << setw(2) << arr[row][col] << " ";
        }
        cout << endl;
    }
    cout << endl;
    transpose(arr);
    return 0;
}