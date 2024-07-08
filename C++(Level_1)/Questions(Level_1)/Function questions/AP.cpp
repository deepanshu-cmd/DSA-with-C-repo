//? W.A.P to print nth term of an AP. Formula: AP = 3*n +7.
#include <iostream>
#include <iomanip>
using namespace std;

int AP(int n)
{
    cout << "Enter value of n : ";
    cin >> n;
    int ap = 3 * n + 7;
    return ap;
}

int main()
{
    int n;
    cout << "nth term of given ap : " << AP(n) << endl;
    return 0;
}