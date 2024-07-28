#include <iostream>
#include <iomanip>
using namespace std;

int charpattern(int n)
{
    int c = 'a';
    for (int i = 1; i <= n; i++, c++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << char(c);
        }
        cout << '\n';
    }
}

int charpattern2(int n)
{
    int c = 'a';
    for (int i = 1; i <= n; i++, c++)
    {
        for (int k = n - i; k >= 1; k--)
        {
            cout << ' ';
        }
        for (int j = 1; j <= i; j++)
        {
            cout << char(c);
        }
        cout << '\n';
    }
}

int charpattern3(int n)
{
    int c = 'a';
    for (int i = n; i >= 1; i--, c++)
    {
        for (int k = n - i; k >= 1; k--)
        {
            cout << ' ';
        }
        for (int j = i; j >= 1; j--)
        {
            cout << char(c);
        }
        cout << '\n';
    }
}

int charpattern4(int n)
{
    int c = 'a';
    for (int i = n; i >= 1; i--, c++)
    {
        for (int j = i; j >= 1; j--)
        {
            cout << char(c);
        }
        cout << '\n';
    }
}

int charpattern5(int n)
{
    int c = 'a';
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++, c++)
        {
            cout << char(c);
        }
        cout << '\n';
    }
}

int main()
{
    int n, type;
    cout << "Enter number of rows(n) and type of pattern: ";
    cin >> n >> type;
    if (type == 0)
    {
        charpattern(n);
        charpattern2(n);
        charpattern3(n);
        charpattern4(n);
        charpattern5(n);
    }
    else if (type == 1)
    {
        charpattern(n);
    }
    else if (type == 2)
    {
        charpattern2(n);
    }
    else if (type == 3)
    {
        charpattern3(n);
    }
    else if (type == 4)
    {
        charpattern4(n);
    }
    else if (type == 5)
    {
        charpattern5(n);
    }
    return 0;
}