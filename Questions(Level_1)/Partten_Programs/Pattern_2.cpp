// ? Number parttern - 2.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int i, j, n;
    cout << "Enter number of rows(n) : ";
    cin >> n;
    for (i = 1; i <= n; i++) //% Rows.
    {
        for (j = 1; j <= n; j++) //% Column.
        {
            cout << i;
        }
        cout << endl;
    }
    return 0;
}