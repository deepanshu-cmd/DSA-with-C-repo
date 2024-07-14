#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    //* Here string is a compount data_type.
    string mystring = "This a string";
    string mystring_2("This a 2nd string");
    string mystring_3{mystring + mystring_2}; //% Concatination. 
    cout << mystring << '\n'
         << mystring_2 << '\n'
         << mystring_3 << endl;
    return 0;
}