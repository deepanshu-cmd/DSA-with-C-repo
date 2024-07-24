#include <iostream>
using namespace std;
//! Variables are named memory location or they store vlaue of our given data.
int main()
{
    //* syntax of declaring + initializing a variable.
    //* data_type  variable_name; --->declaration
    //* variable_name = value; --->initialization.
    int a = 20;   //* 'a' is a variable which stores an integer value.
    double b(26); //* Constructor Initialization.'b' is a variable which stores a floating point value in ().
    char c{'A'};  //* Uniform Initialization.'c' is variable which stores a single character value in {}.
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
    return 0;
    //* Above all variable are declared locally(all are local variable).After coming out of main function their scope ends.
}