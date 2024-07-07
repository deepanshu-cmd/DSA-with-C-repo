//? Simple calculator program using switch-case.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double a, b, sum, sub, mul, div;
    char op;
    cout << "Enter values of a & b:";
    cin >> a >> b;
    cout << "Enter operator:";
    cin >> op;
    switch (op)
    {
    case '+':
        sum = a + b;
        cout << "Sum=" << sum << endl;
        break;
    case '-':
        sub = a - b;
        cout << "sub=" << sub << endl;
        break;
    case '*':
        mul = a * b;
        cout << "mul=" << mul << endl;
        break;
    case '/':
        div = a / b;
        cout << "division=" << div << endl;
        break;
    }

    return 0;
}