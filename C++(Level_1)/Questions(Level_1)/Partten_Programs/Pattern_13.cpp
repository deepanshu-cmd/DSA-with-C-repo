//? Program to print English Alpabet. 
#include <iostream>
#include <iomanip>
using namespace std;

void alphabet(int n)
{
    int c = 'A';
    int N = 14;
    for (int i = n; i >= 1; i--, N = N - 2)
    {
        for (int space = n - i; space >= 1; space--)
        {
            cout << " ";
        }
        for (int j = N; j >= 1; j--, c++)
        {
            cout << char(c) << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n = 2;
    alphabet(n);
    return 0;
}