// ? Pattern - 4
/*
 *
 *       *
 *       *       *
 *       *       *       *
 *       *       *       *       *
 */
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int i, j, n;
    char I;
    cout << "Enter number of rows : ";
    cin >> n;
    cout << "Enter your input(I) : ";
    cin >> I;
    for (i = 1; i <= n; i++) //% Rows.
    {
        for (j = 1; j <= i; j++) //% Column.
        {
            cout << I << '\t';
        }
        cout << endl;
    }
    return 0;
}