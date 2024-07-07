//? Program to print sum of n natural prime no.;
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    //! long int i, j, n, sum = 0;
    // cout << "Enter value of n:";
    // cin >> n;
    // for (i = 2; i <= n; i++)
    // {
    //     for (j = 2; j < i; j++)
    //     {
    //         if (i % j == 0)
    //         {
    //             cout << "";
    //             break;
    //         }
    //     }
    //     if (i == j)
    //     {
    //         sum = sum + i;
    //         cout << i << '\n';
    //     }
    // }
    // cout << "sum=" << sum << endl;

    long int i, j, n, sum = 0;
    cout << "Enter n:";
    cin >> n;
    for (i = 2; i <= n; i++)
    {
        int count = 0;
        for (j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                count++;
            }
        }
        if (count == 2)
        {
            sum = sum + i;
            cout << i << endl;
        }
    }
    cout << '\n'
         << "sum=" << sum << endl;

    return 0;
}