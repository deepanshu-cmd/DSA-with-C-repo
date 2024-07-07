//? Pass by value : Pass by value means that a copy of the actual parameter's value is made in memory, i.e. the caller(main function) and callee(function) have two independent variables with the same value. If the callee(function) modifies the parameter value, the effect is not visible to the caller(main function).
#include <iostream>
#include <iomanip>
using namespace std;

//% Callee 
void dunmmy(int n)
{
    n++;
    cout << "value of n in dummy function : " << n << endl;
}

//% Caller 
int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;
    dunmmy(n);
    cout << "Value of n in maine function : " << n << endl;
    return 0;
}