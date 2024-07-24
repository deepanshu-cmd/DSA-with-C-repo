#include <iostream>
using namespace std;

int main()
{
    float x = 2620;
    float &y = x; //* Here y is acting as a reference variable.
    cout << x << '\n'
         << &y << endl;

    /*When a variable is declared as a reference, it becomes an alternative name for an existing variable. A variable can be declared as a reference by putting ‘&’ in the declaration.
Also, we can define a reference variable as a type of variable that can act as a reference to another variable. ‘&’ is used for signifying the address of a variable or any memory. Variables associated with reference variables can be accessed either by its name or by the reference variable associated with it.*/
}