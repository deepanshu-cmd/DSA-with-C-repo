#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int i, j, n;
    char s;
    cout << "Enter number of rows(n) & the symbol you want in pattern(s): ";
    cin >> n >> s;
    // int n1 = n;
    // for (i = 1; i <= n; i++, n1--) //% Rows.
    for (i = n; i >= 1; i--) //% Rows.
    {
        // for (int space = n - n1; space > 0; space--)
        for (int space = n - i; space > 0; space--)
        {
            cout << " ";
        }
        // for (j = n1; j >= 1; j--) //% Column.
        for (j = i; j >= 1; j--) //% Column.
        {
            cout << s;
        }
        cout << endl;
    }
    return 0;
}