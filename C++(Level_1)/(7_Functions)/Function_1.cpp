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

int power(int n, int N)
{
    //% Function body
    cout << "Enter your number(x) and its power(y) : ";
    cin >> n >> N;
    int ans = 1;
    for (int i = 1; i <= N; i++)
    {
        ans = ans * n;
    }
    //* cout << "Answer = " << ans << endl; use void instead of int and then run the program.
    return ans; //% Returning int value.
}

int main()
{
    int x, y;
    for (int i = 0; i <= 5; i++)
    {
        cout << "Answer = " << power(x, y) << endl;
    }
    return 0;
}

//% Arguments in function call(x,y) are called actual argument or actual parameters and argument in function declaration(n,N) are called formal paramenters or arguments.