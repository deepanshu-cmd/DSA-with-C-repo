//? Program to convert binary number to decimal no. 
#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{
    int bit;
    cout << "Enter your binary number(bit) : ";
    cin >> bit;
    float ans = 0;
    for (int i = 0; bit != 0; i++, bit = bit / 10)
    {
        int digit = bit % 10;
        if (digit == 1)
        {
            ans = ans + pow(2, i);
        }
    }
    cout << ans << endl;
    return 0;
}