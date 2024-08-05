#include <iostream>
#include <iomanip>
using namespace std;

void hollowpyramid(int n, char s)
{
    int m = 2 * n - 1;
    for (int i = 1; i <= n; i++)
    {
        for (int space = n - i; space >= 1; space--)
        {
            cout << " ";
        }
        for (int j = 1; j <= m; j++)
        {
            if (j == n + i - 1 || j == n - i + 1 || (i == n && j % 2))
                cout << s;
            else
                cout << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    char s;
    cout << "Enter number of lines(n) & symbol(s) you want in your pattern: ";
    cin >> n >> s;
    hollowpyramid(n, s);
    return 0;
}