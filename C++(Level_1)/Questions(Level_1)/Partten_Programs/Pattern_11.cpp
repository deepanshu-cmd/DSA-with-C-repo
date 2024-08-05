#include <iostream>
#include <iomanip>
using namespace std;

void cavity_diamond(int n, char s)
{
    for (int i = n; i > 1; i--)
    {
        for (int j = i; j >= 1; j--)
        {
            cout << s;
        }
        int space;
        for (space = n * 2 - i * 2; space > 0; space--)
        {
            cout << " ";
        }
        for (int j = i; j >= 1; j--)
        {
            cout << s;
        }
        cout << endl;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << s;
        }
        int space;
        for (space = n * 2 - i * 2; space > 0; space--)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << s;
        }
        cout << endl;
    }
}

void cavity_diamond2(int n, char s)
{
    for (int i = n; i > 1; i--)
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
}

int main()
{
    int n;
    char s;
    cout << "Enter number of lines(n) & symbol you want in your pattern: ";
    cin >> n >> s;
    cavity_diamond(n, s);
    cavity_diamond2(n, s);
    return 0;
}