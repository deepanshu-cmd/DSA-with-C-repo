#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main()
{
    //* Initializing a vector of size n with a single value:-
    //^ vector<int> numbers(10, 26);
    vector<int> numbers(10);
    fill(numbers.begin(), numbers.end(), 26);
    for (int i = 0; i < numbers.size(); i++)
    {
        cout << numbers[i] << " ";
    }
    cout << endl;

    //* Creating a vector from another vector with the values of 1st vector:-
    vector<char> characters = {'B', 'A', 'B', 'I', 'T', 'A'};
    vector<char> characters_2(characters.begin(), characters.end());
    for (int i = 0; i < characters.size(); i++)
    {
        cout << characters[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < characters_2.size(); i++)
    {
        cout << characters_2[i] << " ";
    }
    cout << endl;
    //% begin() and end() are itrators.

    //? Creating a vector which container boolean values:-
    // vector<bool> value(10, false);
    vector<bool> value(10, true);
    for (int i = 0; i < value.size(); i++)
    {
        cout << value[i] << " ";
    }
    return 0;
}