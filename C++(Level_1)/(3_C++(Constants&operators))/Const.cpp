#include <iostream>
using namespace std;

int main()
{
    const float pi = 3.14;
    //* pi=3.149867 --> we will get an error.
    cout << "The value of pi:" << pi << endl;
    //* using const keyword means the vlaue can't get modified further (we can't change constant values and we can't re-declare them too)
    return 0;
}