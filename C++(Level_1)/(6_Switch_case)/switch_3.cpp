#include <iostream>
#include <iomanip>
using namespace std;
//@ NOTE: case value type must be same as expression value type in switch(expression). 
int main()
{
    int age;
    cout << "Enter your age:";
    cin >> age;
    switch (age)
    {
    case 1 ... 17:
        cout << "You are a minor." << endl;
        break;
    case 18 ... 49:
        cout << "You are an adult." << endl;
        break;
    case 50 ... 100:
        cout << "You are old." << endl;
        break;

    default:
        cout << "No other cases." << endl;
        break;
    }
    cout << "Out of switch-case body." << endl;
    return 0;
}