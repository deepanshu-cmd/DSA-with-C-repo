#include <iostream>
#include <iomanip>
//* Macro : A piece of code that is replaced by the value of macro.In C++, a macro is a fragment of code defined using the #define directive, which instructs the preprocessor to replace occurrences of the macro name with its associated code before the actual compilation process begins. Macros are part of the preprocessor directives, meaning they are processed before the compiler compiles the source code.
#define PI 3.14159265359
using namespace std;

int main()
{
    long double radius, Area;
    cout << "Enter radius of your circle: ";
    cin >> radius;
    Area = PI * radius * radius;
    cout << "Area of circle = " << Area << endl;
    return 0;
}