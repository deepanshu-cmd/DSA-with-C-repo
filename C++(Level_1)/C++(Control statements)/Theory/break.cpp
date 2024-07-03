#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    /*
    The break in C++ is a loop control statement that is used to terminate the loop.As soon as the break statement is encountered from within a loop, the loop iterations stop there and control returns from the loop immediately to the first statement after the loop.
    Basically, break statements are used in situations when we are not sure about the actual number of iterations for the loop or we want to terminate the loop based on some condition.
    */
    int i = 1;
    while (i < 51)
    {
        // !Putting update expression after "cout << i << endl;" will end the loop after 22.
        //** i++;
        if (i == 23)
        {
            cout << "loop will break here.";
            break;
            //* continue;
        }
        cout << i << endl;
        i++;
    }
    return 0;
}