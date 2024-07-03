//? Program to print sum and multiplication of digits entered.
/*
  logic:
  let a number N=XYZ;
  divinding this no. by 10 and extracting its REMINDER(R) and QUEATIONT(Q).
  so,(XYZ % 10)=Z=R; and (XYZ / 10)=XY=Q;
     (XY % 10)=Y and XY / 10=X;
     so from above its clear that any multi digit no. divided by 10 gives its last digit(Z) as Reminder(R) and rest of the digits(XY) as questiont.
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    long long int n, r, sum = 0, mul = 1;
    cout << "Enter your number:";
    cin >> n;
    while (n != 0)
    {
        r = n % 10;
        cout << r << endl;
        sum = sum + r;
        mul = mul * r;
        n = n / 10;
    }
    cout << "Sum = " << sum << endl;
    cout << "Mul = " << mul << endl;
    return 0;
}