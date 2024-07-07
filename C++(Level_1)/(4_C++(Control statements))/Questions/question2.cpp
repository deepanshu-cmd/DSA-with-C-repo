//? program to print n natural no. in decreasing order.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int i;
    cout << "Enter i:";
    cin >> i;
    // while (i >= 1)
    // {

    //     cout << i << endl;
    //     i--;
    // }

    // while (i >= 1)
    // {
    //     if (i % 2 == 0)
    //     {
    //         cout << i << endl;
    //     }
    //     i--;
    // }

    while (i >= 1)
    {
        if (i % 2 != 0)
        {
            cout << i << endl;
        }
        i--;
    }
    return 0;
}