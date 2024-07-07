#include <iostream>
#include <iomanip>
using namespace std;

//% 1 -----> Even
//% 0 -----> Odd
bool isEven(int a)
{
    if (a & 1 == 1)
    {
        cout << "Not even" << endl;
        // return 0;
    }
    else
    {
        cout << "even" << endl;
        // return 1;
    }
}

int main()
{
    int x;
    cout << "Enter x : ";
    cin >> x;
    isEven(x);
    return 0;
}