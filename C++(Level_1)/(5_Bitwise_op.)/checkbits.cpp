//? W.A.P to tell number of set bits in a decimal number.
#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{
    int number, count = 0;
    cout << "Enter your number : ";
    cin >> number;
    int num = number;
    for (; number != 0; number = number >> 1)
    {
        if (number & 1 == 1)
        {
            count++;
        }
    }
    cout << "Number of set bits in " << num << " is " << count << endl;
    return 0;
}