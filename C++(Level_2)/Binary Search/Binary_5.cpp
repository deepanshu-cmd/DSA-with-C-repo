//? Sqaur root using binary search.
#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

long long int Integral_squar_root(int number)
{
    int s = 0;
    int e = number;
    long long int ans = -1;
    long long int mid = s + (e - s) / 2;

    for (; s <= e; mid = s + (e - s) / 2)
    {
        long long int squar = mid * mid;
        if (squar == number)
        {
            return mid;
        }
        else if (squar < number)
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return ans;
}

double sqaur_root(int number, int precision, int root)
{
    double factor = 1;
    double ans = root;
    for (int i = 0; i < precision; i++)
    {
        factor = factor / 10;
        for (double j = ans; j * j < number; j = j + factor)
        {
            ans = j;
        }
    }
    return ans;
}

int main()
{
    int number;
    cout << "Enter your number: ";
    cin >> number;
    int root = Integral_squar_root(number);
    cout << "Sqaur_root of " << number << " is " << sqaur_root(number, 10, root) << endl;
    return 0;
}
