//? Pattern-10
/*
AAAAA
BBBBB
CCCCC
DDDDD
EEEEE
*/
#include <iostream>
#include <iomanip>
using namespace std;
//@ NOTE: Try every variation(previous and future both.) on pattern.
int main()
{
    int i = 1, n;
    cout << "Enter your number of rows(n) : ";
    cin >> n;
    // char count = 'A'; //% Third variation.
    while (i <= n)
    {
        int j = 1;
        // char start = 'A';
        // while (j <= i)
        while (j <= n)
        {
            // char ch = 'A' + i + j - 2; //% Fourth variation.
            // cout << char('A' + i - 1);
            // cout << char('A' + j - 1); //% Second variation.
            // cout << count++ << '\t'; //% Third variation.
            // cout << ch << '\t'; //% Fourth variation.
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}

//* Second variation (while(j<=i)) :-
/*
A
AB
ABC
ABCD
ABCDE
*/

//* THird variation (while(j<=n)) :-
/*
A       B       C       D       E
F       G       H       I       J
K       L       M       N       O
P       Q       R       S       T
U       V       W       X       Y
*/

//* Fourth variation (while(j<=i)) :-
/*
A
B       C
C       D       E
D       E       F       G
E       F       G       H       I
*/