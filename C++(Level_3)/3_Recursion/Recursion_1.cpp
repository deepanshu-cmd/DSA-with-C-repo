#include <iostream>
#include <iomanip>
using namespace std;

//* Recursion in C++ is a process where a function calls itself directly or indirectly to solve a larger problem by breaking it down into smaller, more manageable sub-problems. Recursion is often used when a problem can naturally be divided into similar sub-problems. In C++, recursion is implemented through functions.

//? Factorial Program using recursion.
int factorial(int n)
{
    //% Base case.
    if (n == 0 || n == 1)
        return 1;

    //% Recursive Relation.
    int smallProblem = factorial(n - 1);
    //^ f(n) = n * f(n-1); -----> n! = n * (n-1)!;
    //% Processing or recursive step.
    int bigProblem = n * smallProblem;
    return bigProblem;
}

int main()
{
    int number;
    cout << "Enter your number: ";
    cin >> number;
    cout << "Factorial of " << number << " is " << factorial(number) << endl;
    return 0;
}

//? Key concept:-
//* Base Case(compulsory): This is the condition that stops the recursion. Without a base case, the recursion would continue indefinitely, causing a stack overflow(segmentation fault).

//* Recursive Case or relation(compulsory): This is where the function calls itself with a modified argument, moving toward the base case.

/*
///^ General form of recursive function:-
return_type function_name(parameters) {
    if (base_case_condition) {
     /   //% Base case: return some value.
        return some_value;
    }
    else {
    /    //% Recursive case: call the function again with modified parameters.
        return function_name(modified_parameters);
    }
}

*/