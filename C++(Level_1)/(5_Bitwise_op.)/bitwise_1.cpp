#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a = 4, b = 6;
    cout << "a & b = " << (a & b) << endl; //% Bitwise AND.
    cout << "a | b = " << (a | b) << endl; //% Bitwise OR.
    cout << "a ^ b = " << (a ^ b) << endl; //% Bitwise XOR.
    cout << "~a = " << (~a) << endl;       //% Bitwise NOT.
    return 0;
}

//* Bitwise operator manuplates the operands at bit level.First the given oprands values gets converted into binary form then the bitwise operate on them.After operation the result of the operation which is in binary form gets converted into actual result then we get our output.
//^ Bitwise AND = It returns 1 if both the bits are 1.If a single bit is 0 then it return 0.
//^ Bitwise OR = It returns 0 if both the bits are 0.If a single bit is 1 then it return 1.
//^ Bitwise XOR = It returns 0 if both the bits are same(either 0 or 1) .If a both bits are diffrent than it retuns 1.
//^ Bitwise NOT = It inverts the bits (0 ----> 1 & 1 ----> 0)