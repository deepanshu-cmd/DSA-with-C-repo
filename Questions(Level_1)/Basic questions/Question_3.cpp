#include <iostream>
#include <iomanip>
using namespace std;

int question4()
{
    int x = 1, y = 2;
    if (x-- > 0 || ++y > 2)
    {
        cout << "Stage 1 - Inside if" << endl;
    }
    else
    {
        cout << "Stage 2 - Inside else" << endl;
    }
    cout << "x = " << x << '\n'
         << "y = " << y << endl;
    //@ Important : In this question program won't execute further after encountring condition_1(x-- >0) as condition_1 is true and in logical OR if frist condition is true than output would be true and program won't execute further if condition_1 was false then conditon_2(++y > 2) get executed.For logical OR atleat one condition must be true for true output.
}

int main()
{
    int a = 1, b = 2;
    if (a-- > 0 && ++b > 2)
    {
        cout << "Stage 1 - Inside if" << endl;
    }
    else
    {
        cout << "Stage 2 - Inside else";
    }
    cout << "a = " << a << '\n'
         << "b = " << b;
    question4();
    return 0;
}