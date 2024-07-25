#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int i, j, n;
    char s;
    cout << "Enter number of rows(n) : ";
    cin >> n;
    int n1 = n;
    cout << "Enter the symbol you want in pattern(s) : ";
    cin >> s;
    for (i = 1; i <= n; i++, n1--) //% Rows.
    {
        for (j = n1; j >= 1; j--) //% Column.
        {
            cout << s;
        }
        cout << endl;
    }
    return 0;
}