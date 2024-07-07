#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    /*
         intialization;
         do
         {
            loop body(c++ code);
            update-expression;
         }while(conditon);

    It is diffrent from other two loops,here loop body will execute for atleast once even-if the condition is false.
    */
    int N, n, i = 1;
    cout << "Enter your number(n):";
    cin >> n;
    do
    {
        N = n * i;
        cout << N << endl;
        i++;
    } while (i < 11);
    cout << "End of program." << endl;
    return 0;
}