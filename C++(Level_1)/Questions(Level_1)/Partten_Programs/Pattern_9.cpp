#include <iostream>
#include <iomanip>
using namespace std;

void pyramid(int n, char s)
{
    for (int i = 1; i <= n; i++)
    {
        for (int space = n - i; space >= 1; space--)
        {
            cout << ' ';
        }
        for (int j = 1; j <= i; j++)
        {
            cout << s << ' ';
        }
        cout << endl;
    }
}

void pyramid2(int n, char s)
{
    for (int i = n; i >= 1; i--)
    {
        for (int space = n - i; space >= 1; space--)
        {
            cout << ' ';
        }
        for (int j = i; j >= 1; j--)
        {
            cout << s << ' ';
        }
        cout << endl;
    }
}

void diamond(int n, char s)
{
    for (int i = 1; i <= n; i++)
    {
        for (int space = n - i; space >= 1; space--)
        {
            cout << ' ';
        }
        for (int j = 1; j <= i; j++)
        {
            cout << s << ' ';
        }
        cout << endl;
    }
    for (int i = n - 1; i >= 1; i--)
    {
        for (int space = n - i; space >= 1; space--)
        {
            cout << ' ';
        }
        for (int j = i; j >= 1; j--)
        {
            cout << s << ' ';
        }
        cout << endl;
    }
}

int main()
{
    int n;
    char s, t;
    cout << "Enter number of lines(n) & your symbol(s) you want in your pattern & type of pattern(t): ";
    cin >> n >> s >> t;
    if (t == 'p')
    {
        pyramid(n, s);
    }
    else if (t == 'P')
    {
        pyramid2(n, s);
    }
    else if (t == 'd')
    {
        diamond(n, s);
    }
    else if (t == '0')
    {
        pyramid(n, s);
        pyramid2(n, s);
        diamond(n, s);
    }
    return 0;
}