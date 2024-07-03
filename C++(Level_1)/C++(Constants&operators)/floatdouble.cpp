#include <iostream>
using namespace std;

int main()
{
    //* float d = 26.7;
    float d = 26.7f;
    //* long double e = 26.7;
    long double e = 26.7l;
    cout << "The value of d:" << d << '\n'
         << "The value of e:" << e << endl;
    cout << "The size of 26.7:" << '\t' << sizeof(26.7) << endl;
    cout << "The size of 26.7f:" << '\t' << sizeof(26.7f) << endl;
    cout << "The size of 26.7F:" << '\t' << sizeof(26.7F) << endl;
    cout << "The size of 26.7l:" << '\t' << sizeof(26.7l) << endl;
    cout << "The size of 26.7L:" << '\t' << sizeof(26.7L) << endl;
    /**8 By default any no. like 26.7 is double to compiler if we pass this no. in function then that function will accept this no. as double, for a function to accept these type of no. as floating point we need to write them like this 26.7f. f-->floating point & l-->long double.****/
}