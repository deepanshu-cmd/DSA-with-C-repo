// ? Parttern - 3.
/*
 *
 **
 ***
 ****
 *****
 ******
 *******
 ********
 *********
 **********
 */
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int i, j, n;
    // char I;
    int count = 1;
    cout << "Enter number of rows(n) : ";
    cin >> n;
    // cout << "Enter your input(I) : ";
    // cin >> I;
    for (i = 1; i <= n; i++) //% Rows.
    {
        for (j = 1; j <= i; j++) //% Column.
        {
            // cout << I;
            cout << count++ << '\t';
        }
        cout << endl;
    }
    return 0;
}