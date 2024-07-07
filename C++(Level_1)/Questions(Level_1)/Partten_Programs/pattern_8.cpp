//? Pattern-8
/*
1
23
345
4567
56789
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int i = 1, n;
    cout << "Enter number of rows(n) : ";
    cin >> n;
    while (i <= n) //% Rows.
    {
        int j = 1;
        //* int value=i;
        while (j <= i) //% Columns.
        {
            //* cout << value++;
            cout << i + j - 1;
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}