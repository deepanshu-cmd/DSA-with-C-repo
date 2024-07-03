//? An Armstrong number is a special kind of number in math. It's a number that equals the sum of its digits, each raised to a power. For example, if you have a number like 153, it's an Armstrong number because 1^3 + 5^3 + 3^3 equals 153.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int N, r, sum = 0, a, p;
    cout << "Enter N:";
    cin >> N;
    a = N;
    while (N > 0)
    {
        r = N % 10;
        p = r * r * r;
        sum = sum + p;
        N = N / 10;
    }
    cout << "Sum=" << sum << endl;
    if (a == sum)
    {
        cout << "Given no. is an Armstrong no.:" << endl;
    }
    else
    {
        cout << "Given no. is not an Armstrong no.:" << endl;
    }
    return 0;
}