//@ IMPORTANT!, Compliment of base 10 integer ,Leetcode problem-1009.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n, mask = 0;
    cout << "Enter your number : ";
    cin >> n;
    int N = n, ans = 0;
    if (N == 0)
    {

        cout << "Compliment of " << n << " is " << ans++ << endl;
        return 0;
    }
    while (N != 0)
    {
        mask = (mask << 1) | 1;
        N = N >> 1;
    }

    ans = (~n) & mask;
    cout << "Compliment of " << n << " is " << ans << endl;
    return 0;
}