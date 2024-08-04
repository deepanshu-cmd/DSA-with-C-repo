//? Use switch_case statement in an infinite loop all exit from it.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    while (1)
    {
        cout << "HOW YOU DOIN????" << endl;

        int num = 1;
        switch (num)
        {
        case 1:
            cout << "I'M FINE" << endl;
            break;
        }
        exit(0); //% used when we want to come out of infinet loop.
    }
    return 0;
}