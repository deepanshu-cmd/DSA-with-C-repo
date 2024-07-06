#include <iostream>
#include <iomanip>
using namespace std;
//@ Note: Dry run this program.
int main()
{
    long int a = 4;
    cout << "4 << 2 = " << (a << 2) << endl; //% Left shift.
    cout << "4 >> 1 = " << (a >> 1) << endl; //% Right shift.
    return 0;
}
//* Left shift bitwise op. manuplates the bits by shifting them towards left direction and the empty bits get filled with 0.
//* Right shift bitwise op. manuplates the bits by shifting them towards right direction and the empty bits get filled with 0.