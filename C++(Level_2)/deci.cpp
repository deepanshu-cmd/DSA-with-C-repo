#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{
    // long long int d, n, ans = 0;
    // cout << "Enter your number : ";
    // cin >> n;
    // n = d;
    // for (int i = 0; n != 0; i++,n = n >> 1 )
    // {
    //     int bit = n & 1;
    //     ans = (bit * pow(10, i)) + ans;
    // }
    // cout << "Binary form of " << d << " is " << ans << endl;

    int n;
    cout << "Enter n : ";
    cin >> n;
    float ans = 0;
    int i = 0;
    while (n != 0)
    {
        int bit = n & 1;
        cout << bit << endl;
        ans = (bit * pow(10, i)) + ans;
        n = n >> 1;
        i++;
    }
    cout << "Binary form " << ans << endl;
    return 0;
}