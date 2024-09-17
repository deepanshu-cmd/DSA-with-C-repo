#include <iostream>
using namespace std;

//? Function to calculate Fibonacci number using recursion
int fibonacci(int n)
{
    if (n <= 1)
        return n; //* Base case: fib(0) = 0, fib(1) = 1
    else
        return fibonacci(n - 1) + fibonacci(n - 2); //* Recursive case
}

int main()
{
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;

    cout << "Fibonacci sequence: ";
    for (int i = 0; i < n; i++)
    {
        cout << fibonacci(i) << " ";
    }

    cout << endl;
    return 0;
}

//@ The call stack grows as the recursion goes deeper, and it unwinds when the base case is reached. Stack depth is a limitation of recursion since each function call adds a frame to the stack, and for deep recursion, stack overflow could occur.