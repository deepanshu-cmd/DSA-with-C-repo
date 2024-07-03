//? Program to print more than one table in a single console.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int N, n, i, j, mul;
    cout << "Enter N=";
    cin >> N;
    for (i = 1; i <= N; i++)
    {
        for (j = 1; j <= 10; j++)
        {
            mul = i * j;
            cout << mul << '\n';
        }
    }
    return 0;
}