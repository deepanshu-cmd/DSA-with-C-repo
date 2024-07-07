//? Program to print X^Y without using pow function.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int x, y;
    cout << "Enter your number(x) and its power(y) : ";
    cin >> x >> y;
    int ans = 1;
    for (int i = 1; i <= y; i++)
    {
        ans = ans * x;
    }
    cout << "Answer = " << ans << endl;
    return 0;
}