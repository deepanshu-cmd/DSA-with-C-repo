// Program to print Reverse of given multi digit no.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    long long int n, r, sum = 0, t;
    cout << "Enter your number:";
    cin >> n;
    // while (n != 0)
    // {
    //     r = n % 10;
    //     cout << r;
    //     n = n / 10;
    // }
    for (; n != 0; n = n / 10)
    {
        r = n % 10;
        sum = sum * 10 + r;
    }

    cout << '\n'
         << sum << endl;
    return 0;
}