#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int i, j, n;
    char s;
    cout << "Enter number of rows(n) : ";
    cin >> n;
    cout << "Enter the symbol you want in pattern(s) : ";
    cin >> s;
    for (i = n; i >= 1; i--) //% Rows.
    {
        for (j = i; j >= 1; j--) //% Column.
        {
            cout << s;
        }
        cout << endl;
    }
    return 0;
}