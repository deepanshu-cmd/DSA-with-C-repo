#include <iostream>
#include <iomanip>
using namespace std;

//* This is considered as bad practice.We may get a warning message.
int &update(int n)
{
    int Num = n;
    int &ans = Num;
    ans++;
    return ans;
    //% Returns a refrence variable.
}
//% The Num variable is local to the update function, meaning it gets destroyed once the function exits. Returning a reference to a local variable leads to undefined behavior because the reference (ans) will point to a memory location that is no longer valid after the function returns.

//* This is considered as bad practice.We may get a warning message.
int *update_2(int n)
{
    int *ptr = &n;
    return ptr;
    //% Returns a variable which is pointing at an address.
}

int main()
{
    int num = 26;
    // cout << "Value of num after calling uopdate function = " << update(num) << endl;
    cout << "Value of num after calling uopdate function = " << update_2(num) << endl;

    return 0;
}