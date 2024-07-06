#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a = 5;
    int i = 1;
    for (;;)
    {
        if (i <= a)
        {
            cout << i << endl;
        }
        else
        {
            break;
        }
        i++;
    }

    return 0;
}