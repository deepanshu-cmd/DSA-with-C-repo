#include <iostream>
#include <iomanip>
using namespace std;

int power(int n)
{
    if (n == 0)
        return 1;

    int p1 = power(n - 1);
    int p2 = 2 * p1;
    // cout << "2" << "*" << p1 << " = " << 2 * p1 << endl;
    return p2;
}

int main()
{
    int n;
    cout << "Enter n which is in power of 2 : ";
    cin >> n;
    cout << power(n) << endl;
    return 0;
}