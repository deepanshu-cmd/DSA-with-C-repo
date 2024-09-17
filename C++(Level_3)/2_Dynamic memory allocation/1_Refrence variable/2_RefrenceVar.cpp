#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//* Passing by reference allows a function to modify a variable without creating a copy. We have to declare reference variables. The memory location of the passed variable and parameter is the same. Therefore, any change to the parameter also reflects in the variable inside its parent function.

void update_1(int &N)
{
    cout << "n(N) inside the function before updation = " << N << endl;
    N = N - 6;
    cout << '\n'
         << "n(N) inside the function after updation = " << N << endl;
}

void update_2(int N)
{
    cout << "n(N) inside the function before updation = " << N << endl;
    N = N - 6;
    cout << '\n'
         << "n(N) inside the function after updation = " << N << endl;
}

int main()
{
    int n = 26;
    string str;
    cout << "How you want to pass the variable : ";
    cin >> str;
    cout << "n outside the function before updation = " << n << endl;
    if (str == "Ref")
    {
        update_1(n);
        cout << " n outside the function after updation = " << n << endl;
    }
    else if (str == "Val")
    {
        update_2(n);
        cout << " n outside the function after updation = " << n << endl;
    }

    return 0;
}