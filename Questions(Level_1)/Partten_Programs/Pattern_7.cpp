//? Pattern-7
/*
1       2       3       4
5       6       7       8
9       10      11      12
13      14      15      16
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int i = 1, count = 1, n;
    cout << "Enter number of rows(n) : ";
    cin >> n;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << count++ << '\t';
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}