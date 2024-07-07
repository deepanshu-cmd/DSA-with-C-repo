//? Program to tell wheather the given no. is prime or not.
//* A Prime no. has only two factors.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int i, j, count = 0;
    cout << "Enter value of i:";
    cin >> i;
    for (j = 1; j <= i; j++)
    {
        if (i % j == 0)
        {
            count++;
        }
    }
    if (count == 2)
    {
        cout << i << " is a prime no." << endl;
    }
    else
    {
        cout << i << " is a composite no. " << " and no. of factors of i = " << count << endl;
    }

    return 0;
}