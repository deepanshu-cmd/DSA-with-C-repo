#include <iostream>
using namespace std;

int main()
{
    int a = 26, b = 20;
    //? Logical operators.
    cout << "The value of ((a == b) && (a > b)) is :" << ((a == b) && (a > b)) << endl;
    cout << "The value of ((a != b) !!(a > b)) is :" << ((a != b) || (a > b)) << endl;
    cout << "The value of (!(a > b)) is :" << (!(a > b)) << endl;
}
//! logical AND(&&):If both conditions are true than only outout will be 1 otherwise it will be zero.If any condition is false then program won't execute further.

//! logical OR(||):If any condition is true than  outout will be 1 ,for 0 every conditon must be 0 .If any condition is true then program  execute further.

//! Logical NOT(!):Invert the result(True-->False and False-->True).