#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    /*
      //*  for(initialization ; condition ; update-expression)
        {
           //* loop body(c++ code);
        }
    */
    //%    Table of a no.
    int N, n;
    cout << "Enter your no.(n):";
    cin >> n;
    for (int i = 1; i <= 10; i++)
    {
        N = n * i;
        cout << n << "*" << i << " = " << N << endl;
    }
    cout << "End of program." << endl;
    return 0;
}
/*
    loop will become an infite loop if we don't include update-exp. or if we do hard coding in condintion(In both case conditon will always be true).
*/