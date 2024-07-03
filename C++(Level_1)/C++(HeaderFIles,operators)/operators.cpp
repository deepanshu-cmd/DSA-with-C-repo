#include <iostream>
using namespace std;

int main()
{
    //? Arthmatic operaotrs.
    int a = 26, b = 20;
    cout << "a+b=" << a + b << endl; //* 46
    cout << "a-b=" << a - b << endl; //* 6
    cout << "a*b=" << a * b << endl; //* 560
    cout << "a/b=" << a / b << endl; //* 1
    cout << "a%b=" << a % b << endl; //* 6
    cout << "a++=" << a++ << endl;   //! 26(post-increment)
    cout << "++a=" << ++a << endl;   //! 28(pre-increment)
    cout << "--a=" << --a << endl;   //! 27(pre-decrement)
    cout << "a--=" << a-- << endl;   //! 27(post-decrement)
    cout << "a--=" << --a << endl;   //* 25

    //? (=)Assignment operator(Assign value from L.H.S to R.H.S).
    cout << '\n'
         << endl;

    //? Relational operators.
    cout << "The value of a==b is :" << (a == b) << endl; //* 0
    cout << "The value of a!=b is :" << (a != b) << endl; //* 1
    cout << "The value of a>b is :" << (a > b) << endl;   //* 1
    cout << "The value of a<b is :" << (a < b) << endl;   //* 0
    cout << "The value of a<=b is :" << (a <= b) << endl; //* 0
    cout << "The value of a>=b is :" << (a >= b) << endl; //* 1
    return 0;
}