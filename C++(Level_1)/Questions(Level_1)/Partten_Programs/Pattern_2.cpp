//? Pattern-2. 
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int i, j, n;
    char s;
    cout << "Enter number of rows(n) and your symbol(s) you want in pattern : ";
    cin >> n >> s;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << s;
            //^ cout <<setw(n)<< s;
        }
        cout << '\n';
    }
    return 0;
}