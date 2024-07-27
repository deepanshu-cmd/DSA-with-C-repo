#include <iostream>
#include <iomanip>
using namespace std;

int numpattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << '\n';
    }
}

int numpattern2(int n)
{
    cout << '\n';
    for (int i = n; i >= 1; i--)
    {
        for (int j = i; j >= 1; j--)
        {
            cout << i;
        }
        cout << '\n';
    }
}

int numpattern3(int n)
{
    cout << '\n';
    for (int i = n; i >= 1; i--)
    {
        for (int j = i; j >= 1; j--)
        {
            cout << n - i + 1;
        }
        cout << '\n';
    }
}

int main()
{
    int n, p;
    cout << "Enter number of rows(n): ";
    cin >> n;
    cout << "Enter parttern number: ";
    cin >> p;
    if (p == 0)
    {
        numpattern(n);
        numpattern2(n);
        numpattern3(n);
    }
    else if (p == 1)
    {
        numpattern(n);
    }
    else if (p == 2)
    {
        numpattern2(n);
    }
    else if (p == 3)
    {
        numpattern3(n);
    }
    return 0;
}