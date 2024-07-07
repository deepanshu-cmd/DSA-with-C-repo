//? Program to print fibbonaci series.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    /*The Fibonacci sequence is a type series where each number is the sum of the two that precede it. It starts from 0 and 1 usually. The Fibonacci sequence is given by 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, and so on. The numbers in the Fibonacci sequence are also called Fibonacci numbers.*/
    long long int n1 = 0, n2 = 1, n3, N, i = 1;
    cout << "Enter value of termination point(N) : ";
    cin >> N;
    cout << n1 << "," << n2;
    while (i <= N)
    {
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
        cout << "," << n3;
        i++;
    }

    return 0;
}