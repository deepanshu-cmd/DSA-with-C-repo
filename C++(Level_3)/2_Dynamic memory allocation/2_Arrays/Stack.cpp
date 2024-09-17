#include <iostream>
#include <iomanip>
using namespace std;

//* Global variable (static memory): globalVar is allocated in the data segment and exists for the program's lifetime.
int globalVar = 26;

void staticExample()
{
    //* Static local variable (static memory): staticVar inside staticExample() retains its value between function calls and is allocated in static memory.
    static int staticVar = 20;
    cout << "Static Variable: " << staticVar << endl;
    cout << "Global Variable inside the function: " << globalVar << endl;
}

int main()
{
    staticExample();
    cout << "Global Variable outside the function: " << globalVar << endl;
    return 0;
}

//? Stack Memory allocation:Memory for variables is allocated at compile-time before the program starts executing. The size and type of the variables must be known during compilation.Memory is reserved when the program is compiled.Example: Global variables, static local variables.

//? Memory Location: Stack Segment --> Typically allocated on the stack for local variables with static storage duration.

//? Lifespan & Scope:-
//^ Lifespan ---> Exists for the entire duration of the program.
//^ Scope---> Depends on where it is declared (e.g., global vs. local).

//? Memory Managment:-
//^ Automatic Management ---> Handled by the compiler; no manual intervention required.
//^ Less Overhead ---> Since allocation and deallocation are managed at compile-time.

//? Flexibility:- Limited Flexibility --> Size and number of variables must be known in advance.