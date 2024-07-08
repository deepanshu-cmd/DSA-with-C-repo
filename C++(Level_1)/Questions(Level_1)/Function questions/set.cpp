//? You have given two integer no. ,print total number of set bit(set bit =1).
#include <iostream>
#include <iomanip>
using namespace std;

int setBits_B(int b)
{
    int count = 0;
    while (b != 0)
    {
        if (b & 1)
        {
            count++;
        }
        b = b >> 1;
    }
    return count;
}

int setBits_A(int a)
{
    int count = 0;
    while (a != 0)
    {
        if (a & 1)
        {
            count++;
        }
        a = a >> 1;
    }
    return count;
}

int main()
{
    int a, b;
    cout<<"Enter a & b : ";
    cin >> a >> b;
    int ans1 = setBits_A(a);
    int ans2 = setBits_B(b);
    cout << "Set bits of A=" << ans1 << endl;
    cout << "Set bits of B=" << ans2 << endl;
    int ans = ans1 + ans2;

    cout << "Total set bits of A and B are =" << ans << endl;

    return 0;
}
