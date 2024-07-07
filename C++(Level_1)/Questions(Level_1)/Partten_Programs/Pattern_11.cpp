//? Pattern-11
/*
D
CD
BCD
ABCD
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int i = 1, n;
    cout << "Enter number of rows(n) : ";
    cin >> n;
    char ch;
    cout << "Enter your starting character(ch) : ";
    cin >> ch;
    while (i <= n)
    {
        int j = 1;
        char start = ch + n - i;
        while (j <= i)
        {
            cout << start++;
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}