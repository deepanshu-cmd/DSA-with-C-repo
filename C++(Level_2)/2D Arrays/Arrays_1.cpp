#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    //* data_type arr_name[row][column];  
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
    
    cout << "Enter elements of your array(taking column wise input): ";
    for (int col = 0; col < 4; col++)
    {
        for (int row = 0; row < 3; row++)
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
    return 0;
}