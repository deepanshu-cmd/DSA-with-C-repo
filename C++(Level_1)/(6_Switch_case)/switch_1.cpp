#include <iostream>
#include <iomanip>
using namespace std;
//? Switch case is conditional statement.It has case in it ,if case value matches to expression than that case block gets executed.
int main()
{
    char ch = '1';
    int num = 1;
    switch (ch)
    {
    case 1:
        cout << "First statement" << endl;
        break;

    case '1':
        //* Nested switch_case.
        switch (num)
        {
        case 1:
            cout << "Second statement";
            break;
        }
        break;

    default:
        break;
    }
    return 0;
}