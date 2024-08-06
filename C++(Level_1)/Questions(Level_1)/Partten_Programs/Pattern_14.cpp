#include <iostream>
#include <iomanip>
using namespace std;

void diamond(int n, char s)
{
    for (int i = 1; i <= n; i++)
    {
        for (int space = n - i; space >= 1; space--)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            if (j == 1 || j == i)
            {
                cout << s << " ";
            }
            else
            {
                cout << " " << " ";
            }
        }
        cout << endl;
    }

    for (int i = n - 1; i >= 1; i--)
    {
        for (int space = n - i; space >= 1; space--)
        {
            cout << " ";
        }
        for (int j = i; j >= 1; j--)
        {
            if (j == 1 || j == i)
            {
                cout << s << " ";
            }
            else
            {
                cout << " " << " ";
            }
        }
        cout << endl;
    }
}

int main()
{
    int n;
    char s;
    cout << "Enter number of rows(n) and symbole(s) you want in your pattern: ";
    cin >> n >> s;
    diamond(n, s);
    return 0;
}