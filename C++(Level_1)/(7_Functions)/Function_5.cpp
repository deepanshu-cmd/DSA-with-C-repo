//? Tell the given number is equal to power of 2 or not.
#include <iostream>
#include <iomanip>
#include <math.h>
#include <limits.h>
using namespace std;

//* If number of set bit of an decimal no is equals to 1 then that no. is equal to power of 2.
bool Power2(int x)
{
    int count = 0;
    for (int i = 0; x != 0; i++)
    {
        int bit = x & 1;
        if (bit == 1)
        {
            count++;
        }
        x = x >> 1;
    }

    if (count == 1)
    {
        return true;
    }
    else
        return false;
}

//* Below code is an optimized solution.
bool Power(int x)
{
    int ans = 1;
    for (int i = 0; i < 31; i++)
    {
        if (ans == x)
        {
            return true;
        }

        if (ans < __INT_MAX__ / 2)
        {
            ans = ans * 2;
        }
    }
    return false;
}

//* Below code is a Brute force solution.
bool power(int x)
{
    for (int i = 0; i < 31; i++)
    {
        int ans = pow(2, i);
        if (ans == x)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int n;
    cout << "Enter your number: ";
    cin >> n;
    // cout << power(n) << endl;

    // if (Power(n) == 1)
    //     cout << "true" << endl;
    // else
    //     cout << "false" << endl;
    if (Power2(n) == 1)
        cout << "true" << endl;
    else
        cout << "false" << endl;
    return 0;
}