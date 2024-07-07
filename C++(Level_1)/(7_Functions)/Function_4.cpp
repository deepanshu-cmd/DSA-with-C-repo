//? Program to print nCr.
#include <iostream>
#include <iomanip>
using namespace std;

int factorial(int n)
{
    int f = n;
    for (int i = 1; i < n; i++)
    {
        f = f * i;
    }
    if (f == 0)
    {
        f = 1;
        return f;
    }
    return f;
}

int ncr(int n, int r)
{
    cout << "Enter n and r : ";
    cin >> n >> r;
    if (n <= r)
    {
        return 0;
    }
    int numerator = factorial(n);
    int denomenator = factorial(r) * factorial(n - r);
    return numerator / denomenator;
}

int main()
{
    int n, r;
    if (ncr(n, r) == 0)
    {
        cout << "nCr = Infinity." << endl;
    }
    cout << "nCr = " << ncr(n, r) << endl;
    return 0;
}