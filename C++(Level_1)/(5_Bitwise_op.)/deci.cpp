//? Coverting Decimal to binary.
#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
//* Logic :- taking '&' of given no. 'n' with 1. n&1= bit,if bit=1 then no.(n) is odd or if bit=0 then no.(n) is even.Storing bit into another variable 'ans' by multiplying it with 10^i where i =0 and i++ till n!=0 and adding 'ans' [ans = (bit * pow(10, i)) + ans].Modifying 'n' by right shifting it by 1 bit[n=n>>1] till it becomes 0.Once all bits of 'n' becomes zero ,program will come out of loop and 'ans' gets displayed on screen.

int main()
{
    int n;
    cout << "Enter your number : ";
    cin >> n;
    float ans = 0;
    for (int i = 0; n != 0; i++, n = n >> 1)
    {
        int bit = n & 1;
        ans = (bit * pow(10, i)) + ans;
    }
    cout << "Binary form is " << ans << endl;
    return 0;
}