#include <iostream>
#include <iomanip>
using namespace std;

//% number & 1 = 0 -----> Even
//% number & 1 = 1 -----> Odd
bool isEven(int a)
{
    if (a & 1 == 1)
    {
        // cout << "Not even" << endl;
        return 0;
    }
    else
    {
        // cout << "even" << endl;
        return 1;
    }
}

int main()
{
    int x;
    cout << "Enter x : ";
    cin >> x;
    int ans = isEven(x);
    if (ans == 1)
    {
        cout << "even" << endl;
    }
    else
    {
        cout << "odd" << endl;
    }
    return 0;
}