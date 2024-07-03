// ? W.A.P to print factorial of a no.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    long long int n, f, i;
    cout << "Enter n:";
    cin >> n;
    f = n;
    for (i = 1; i < n; i++)
    {
        cout << f << "*" << i << "=" << f * i << endl;
        f = f * i;
    }
    cout << "factorial of" << n << "is=" << f << endl;
    return 0;
}