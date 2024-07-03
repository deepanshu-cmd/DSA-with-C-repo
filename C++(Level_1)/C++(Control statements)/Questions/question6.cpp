//? Program to print reverse table of a no.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int N, n;
    cout << "Enter your no.(n):";
    cin >> n;
    for (int i = 10; i >= 1; i--)
    {
        N = n * i;
        cout << N << endl;
    }
    cout << "End of program." << endl;
    return 0;
}