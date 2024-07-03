#include <iostream>
#include <iomanip> //! We can now use setw() function.
using namespace std;

int main()
{
     int a = 6, b = 20, c = 262626;
     cout << "The value of without setw() a:" << a << '\n'
          << "The value of without setw() b:" << b << '\n'
          << "The value of without setw() c:" << c << endl;
     cout << "The value of with setw() a:" << setw(6) << a << '\n'
          << "The value of with setw() b:" << setw(6) << b << '\n'
          << "The value of with setw() c:" << setw(6) << c << endl;
     /*The setw() method of iomanip library in C++ is used to set the ios library field width based on the width specified as the parameter to this method. The setw() stands for set width and it works for both the input and the output streams.*/
}
