#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int age;
    cout << "Enter your age:";
    cin >> age;
    if (age < 18)
    {
        cout << "You are a minor." << endl;
    }
    else if (age == 18)
    {
        cout << "You are an adult." << endl;
    }
    else
    {
        cout << "You are 18+." << endl;
    }
    return 0;
}

//! NOTE: for else if() block if() block existence is neccassary.
