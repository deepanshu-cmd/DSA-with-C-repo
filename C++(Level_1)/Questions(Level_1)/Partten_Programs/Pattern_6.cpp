//? Pattern-6
/*
12345
12345
12345
12345
12345
*/
#include <iostream>
#include <iomanip>
using namespace std;

int reverse()
{
    cout << "Now print no. in coulumns in reverse and decending manner." << endl;
    int i = 1, j, n;
    cout << "Enter number of rows(n) : ";
    cin >> n;
    while (i <= n)
    {
        j = n;
        while (j >= 1)
        {
            cout << j;
            j--;
        }
        cout << endl;
        i++;
    }
}

int main()
{
    int i = 1, j, n;
    cout << "Enter number of rows(n) : ";
    cin >> n;
    while (i <= n)
    {
        j = 1;
        while (j <= n)
        {
            cout << j;
            // cout << n - j + 1; //! Use this line or call function reverse for another pattern.
            j++;
        }
        cout << endl;
        i++;
    }
    reverse();
    return 0;
}