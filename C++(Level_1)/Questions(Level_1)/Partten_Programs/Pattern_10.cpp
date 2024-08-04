#include <iostream>
#include <iomanip>
using namespace std;

void butterfly(int n, char s)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << s;
        }
        int space;
        for (space = n * 2 - i * 2; space > 0; space--)
        {
            cout << ' ';
        }
        for (int j = 1; j <= i; j++)
        {
            cout << s;
        }
        cout << endl;
    }

    for (int i = n - 1; i >= 1; i--)
    {
        for (int j = i; j >= 1; j--)
        {
            cout << s;
        }
        int space;
        for (space = n * 2 - i * 2; space > 0; space--)
        {
            cout << ' ';
        }
        for (int j = i; j >= 1; j--)
        {
            cout << s;
        }
        cout << endl;
    }
}

void butterfly2(int n, char s)
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
        int space;
        for (space = n * 2 - i * 2; space > 0; space--)
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
        int space;
        for (space = n * 2 - i * 2; space > 0; space--)
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
    cout << "Enter number of lines(n): ";
    cin >> n;
    char s;
    cout << "Enter your symbol(s) you want in pattern: ";
    cin >> s;
    butterfly(n, s);
    butterfly2(n, s);
    return 0;
}