// ? Pattern - 5.
/*
*****
****
***
**
*
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
    for (i = n; i >= 1; i--) //% Rows.
    {
        for (j = 1; j <= i; j++) //% Column.
        {
            // cout << i; //! COMMENT OUT LINE NO. 16, 19 & 20 FOR NUMBER PARTTERN.
            cout << I;
            // cout << I << '\t';
        }
        cout << endl;
    }
    return 0;
}