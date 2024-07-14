#include <iostream>
using namespace std;

int main()
{
    const float pi = 3.14;
    //* pi=3.149867 --> we will get an error.
    cout << "The value of pi:" << pi << endl;
    //* using const keyword means the vlaue(literal) can't get modified further (we can't change constant values and we can't re-declare them too)
    return 0;
}
//*Literal constants can be classified into: integer, floating-point, characters, strings, Boolean, pointers, and user-defined literals.