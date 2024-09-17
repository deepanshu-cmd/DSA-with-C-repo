//? You have been given a number of stairs. Initially, you are at the 0th stair, and you need to reach the Nth stair.Each time, you can climb either one step or two steps.You are supposed to return the number of distinct ways you can climb from the 0th step to the Nth step.
#include <iostream>
#include <iomanip>
using namespace std;

int stairs(int nStairs)
{
    //* Base case.
    if (nStairs < 0)
        return 0;
    if (nStairs == 0)
        return 1;

    //* Recursive call.
    int ans = stairs(nStairs - 1) + stairs(nStairs - 2);

    return ans;
}

int main()
{
    int nStairs;
    cout << "Enter number of stairs: ";
    cin >> nStairs;
    cout << stairs(nStairs) << endl;
    return 0;
}