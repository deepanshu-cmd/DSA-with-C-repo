//?A function is a block of code that performs some operation. A function can optionally define input parameters that enable callers to pass arguments into the function. A function can optionally return a value as output.A function perform some specific task.Using functions reduces bulkyness of code,makes code readable and
/*
Syntax :-
return_type func_name(arg_1,arg_2,.....arg_n)
{
    function body;
    return value ----> depends on return type.
}
*/
#include <iostream>
#include <iomanip>
using namespace std;

int power(int x, int y)
{
    //% Function body
    cout << "Enter your number(x) and its power(y) : ";
    cin >> x >> y;
    int ans = 1;
    for (int i = 1; i <= y; i++)
    {
        ans = ans * x;
    }
    //* cout << "Answer = " << ans << endl; use void instead of int and then run the program.
    return ans; //% Returning int value.
}

int main()
{
    int num_1, num_2;
    //% power(arg_1,arg_2,......arg_n) -----> Function Call.
    cout << "Answer is " << power(num_1, num_2) << endl;
    cout << "Answer is " << power(num_1, num_2) << endl;
    cout << "Answer is " << power(num_1, num_2) << endl;
    cout << "Answer is " << power(num_1, num_2) << endl;
    cout << "Answer is " << power(num_1, num_2) << endl;
    return 0;
}