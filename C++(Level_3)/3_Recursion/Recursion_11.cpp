//? W.A.P to calculat a power b.
#include <iostream>
#include <iomanip>
using namespace std;

int power(int a, int b)
{
    //* Base Case.
    if (b == 0)
        return 1;
    if (b == 1)
        return a;

    //* Recursion call.
    int ans = power(a, b / 2);

    //* Processing:-
    //^ If b is even.
    if (b % 2 == 0)
        return ans * ans;

    //^ If b is odd.
    else
        return a * ans * ans;
}

int main()
{
    int a, b;
    cout << "Enter a & b : ";
    cin >> a >> b;
    cout << power(a, b);
    return 0;
}