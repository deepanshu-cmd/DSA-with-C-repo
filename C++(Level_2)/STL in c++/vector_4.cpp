#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

//? Accessing elements of a vector.

int main()
{
    //* First method to access elements of a vector.
    vector<int> num = {20, 26, 15, 6, 11};
    // for (int i = 0; i < num.size(); i++)
    // {
    //     cout << "Element at index " << i << " = " << num[i] << endl;
    // }
    //^ Problem with upper method is that there is no bound checking.

    //* Second method: using at().
    for (int i = 0; i < num.size(); i++)
    {
        cout << "Element at index " << i << " = " << num.at(i) << endl;
    }

    //^ Bound checking:
    //% cout << "Element at index 5 = " << num.at(5) << endl;

    //* Accessing first and last element of a vector.
    cout << "Frist element = " << num.front() << '\n'
         << "Last Element = " << num.back() << endl;

    //* Modifying elements of vectors:
    num[1] = 11;
    num.at(4) = 31;
    cout << "element at index 1 = " << num.at(1) << '\n'
         << "Last Element = " << num.back() << endl;

    return 0;
}