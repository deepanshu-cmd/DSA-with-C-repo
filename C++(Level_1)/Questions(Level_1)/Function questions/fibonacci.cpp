//? W.A.P using functions to print fibonacci series.
#include <iostream>
#include <iomanip>
using namespace std;

int fibonacci(int n1, int n2)
{
    n1 = 0, n2 = 1;
    int n3, N, i = 1;
    cout << "Enter value of termination point(N) : ";
    cin >> N;
    cout << n1 << " " << n2;
    for (; i <= N; i++)
    {
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
        cout << " " << n3;
    }
}

int main()
{
    int x, y;
    int fibo = fibonacci(x, y);
    return 0;
}