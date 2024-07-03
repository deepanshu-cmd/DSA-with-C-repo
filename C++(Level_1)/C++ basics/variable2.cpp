#include <iostream>
using namespace std;

int global = 31; //* variable(global) defined globally.

void babita()
{
    int b;
    cout << "Global=" << global << endl;
}

int main()
{
    int a = 26, b = 20;
    float pi = 3.14, g = 9.8;
    bool t = true, f = false;
    //? int global=15;
    cout << "a=" << a << '\t' << "b=" << b << endl;
    cout << "pi=" << pi << '\t' << "g=" << g << endl;
    cout << "t=" << t << '\t' << "f=" << f << endl;
    cout << "global=" << global << endl;
    babita(); //? Function call.
}

//? Local variable are declared inside the function and thier scope ends after coming out of the function.
//? Gloable variable are declared outside of function body and can be accesed from anywhere.There scope is not limited its available for every function who calls it.
//! NOTE:Precendence of local variable is higher than global