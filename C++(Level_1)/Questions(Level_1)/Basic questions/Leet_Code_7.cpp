//? Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.Assume the environment does not allow you to store 64-bit integers (signed or unsigned).
#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main()
{
    int x, r, sum = 0;
    cout << "Enter number(x) : ";
    cin >> x;
    int INT_MAX = pow(2, 31) - 1;
    int INT_MIN = pow(2, 31);
    for (; x != 0; x = x / 10)
    {
        r = x % 10;
        //% If x > INT_MAX or x < INT_MIN,return 0.int range [INT_MIN,INT_MAX].
        if ((sum > INT_MAX / 10) || (sum < INT_MIN / 10))
        {
            cout << "Out int range." << endl;
            return 0;
        }
        sum = sum * 10 + r;
    }
    cout << "Reverse = " << sum << endl;
    return 0;
}