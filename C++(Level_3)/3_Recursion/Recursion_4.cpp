//? Say the digit. Example :- 421 == four two one.
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void print(int n, string arr[])
{
    //* Base case
    if (n == 0)
        return;

    //* recursive relation.
    int digit = n % 10;
    n = n / 10;

    //* recursive call.
    print(n, arr);

    //* processing.
    cout << arr[digit] << " ";
}

int main()
{
    string arr[10] = {"zero", "one", "two", "three", "four", "five", "size", "seven", "eight", "nine"};
    int number;
    cout << "Enter your number : ";
    cin >> number;
    print(number, arr);
    return 0;
}