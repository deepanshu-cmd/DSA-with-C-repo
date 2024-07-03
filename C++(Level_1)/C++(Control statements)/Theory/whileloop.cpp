#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    /*
        initialization;
        while(condition)
        {
            loop body(c++ code);
            update-expression;
        }
    */
    int N, n, i = 1;
    cout << "Enter your number(n):";
    cin >> n;
    while (i <= 10)
    {
        N = n * i;
        cout << n << "*" << i << "=" << N << endl;
        i++;
    }
    cout << "End of program." << endl;
}