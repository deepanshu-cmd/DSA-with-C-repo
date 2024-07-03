//? Program to print sum of even and odd natural no.
#include <iostream>
#include <iomanip>
using namespace std;

int odd()
{
    int sum = 0, i;
    cout << "Enter i for sum of odd no.:";
    cin >> i;

    while (i <= 100)
    {
        if (i % 2 != 0)
        {
            sum = sum + i;
            cout << i << '\t';
        }
        i++;
    }
    cout << endl;
    cout << "Sum of odd no.=" << sum << endl;
}

int main()
{
    int sum = 0, i;
    cout << "Enter i for sum of even no.:";
    cin >> i;

    while (i <= 100)
    {
        if (i % 2 == 0)
        {
            sum = sum + i;
            cout << i << '\t';
        }
        i++;
    }
    cout << endl;
    cout << "Sum of even no.=" << sum << endl;
    odd();

    return 0;
}