#include <iostream>
#include <iomanip>
using namespace std;

//* Character arrays with Pointers.

int main()
{
     int num[5] = {1, 2, 3, 4, 5};
     char ch[7] = "Babita";
     cout << "address of integer array num = " << num << '\n'
          << "address of character array ch = " << ch << endl;

     int *p = &num[0];
     char *c = &ch[0];
     cout << '\n'
          << "address of integer array num = " << p << '\n'
          << "address of character array ch = " << c << endl;
     //% It's the operator<< that is overloaded for const void* and for const char*. Your char array is converted to const char* and passed to that overload, because it fits better than to const void*. The int array, however, is converted to const void* and passed to that version. The version of operator<< taking const void* just outputs the address. The version taking the const char* actually treats it like a C-string and outputs every character until the terminating null character. If you don't want that, convert your char array to const void* explicitly when passing it to operator<< .

     return 0;
}