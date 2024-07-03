#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    /*
    The continue statement works somewhat like the break statement. Instead of forcing termination, however, continue forces the next iteration of the loop to take place, skipping any code in between. For the for loop, continue causes the conditional test and increment portions of the loop to execute.
    */
    // ? Program to print even no. using continue statement.
    for (int i = 1; i <= 50; i++)
    {
        if (i % 2 != 0)
        {
            continue;
        }
        cout << i << endl;
    }
    return 0;
}