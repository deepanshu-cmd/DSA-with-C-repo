//? Pattern-9
/*
1
21
321
4321
54321
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
        //* int value = i;
        while (j <= i) //% Columns.
        {
            //* cout << value--;
            cout << i - j + 1;
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}