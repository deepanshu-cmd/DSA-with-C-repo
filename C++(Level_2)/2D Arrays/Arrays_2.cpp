#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    //* Initialization at compile time:
    //^ Initialising row wise:
    int arr[3][4] = {{1, 2, 4, 8}, {16, 32, 64, 128}, {256, 512, 1024, 2048}};
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cout << setw(4) << arr[row][col] << " ";
        }
        cout << endl;
    }
    return 0;
}