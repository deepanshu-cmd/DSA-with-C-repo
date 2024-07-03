// A palindromic number (also known as a numeral palindrome or a numeric palindrome) is a number (such as 16461) that remains the same when its digits are reversed. In other words, it has reflectional symmetry across a vertical axis.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    long long int n, r, t, sum = 0;
    cout << "Enter your number:";
    cin >> n;
    t = n;
    while (n != 0)
    {
        r = n % 10;
        cout << r;
        sum = sum * 10 + r;
        n = n / 10;
    }
    if (t == sum)
    {
        cout << "Palindrom no." << endl;
    }
    else
    {
        cout << "Not a Palindrom no." << endl;
    }
    return 0;
}