#include <iostream>
#include <iomanip>
using namespace std;

//* Inline function:An inline function is one for which the compiler copies the code from the function definition directly into the code of the calling function rather than creating a separate set of instructions in memory.

inline int getMax(int &a, int &b)
{
    return (a > b) ? a : b;
}

int main()
{
    int a = 20, b = 26;
    int ans;
    ans = getMax(a, b);
    cout << "Ans = " << ans << endl;
    a = a + 11;
    b = b - 6;
    ans = getMax(a, b);
    cout << "Ans = " << ans << endl;

    //@ NOTE: Learn about default argument and constant variable.
    return 0;
}