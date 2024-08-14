#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

//? Modifiers:A modifier is used to change the meaning of the base type as per the need or requirement of the function or program.

int main()
{
    //* pop_back():The list::pop_back() is a built-in function in C++ STL which is used to remove an element from the back of a list container. That is, this function deletes the last element of a list container. This function thus decreases the size of the container by 1 as it deletes an element from the end of the list.
    // vector<int> num;
    // int value;
    // do
    // {
    //     cout << "Enter element : ";
    //     cin >> value;
    //     num.push_back(value);
    // } while (value);

    // for (int i = 0; i < num.size(); i++)
    // {
    //     cout << num[i] << " ";
    // }
    // cout << endl;
    // num.pop_back();

    // int j = 0;
    // do
    // {
    //     cout << num[j] << " ";
    //     j++;
    // } while (j < num.size());
    // cout << endl;

    //* insert():Basically, the vector::insert() function from the STL in C++ is used to insert elements or values into a vector container. In general, the function returns an iterator pointing to the first of the inserted elements.
    vector<int> n = {31, 15, 26, 6};
    for (int i = 0; i < n.size(); i++)
    {
        cout << n[i] << " ";
    }
    cout << endl;
    vector<int>::iterator I;
    I = n.begin() + 2; //% n[2].
    n.insert(I, 6, 20);
    for (int i = 0; i < n.size(); i++)
    {
        cout << n[i] << " ";
    }
    cout << endl;

    //* erase(): erase a single element or a range of elements.
    n.erase(n.begin() + 1, n.end() - 2);
    cout << "erased: " << endl;
    for (int i = 0; i < n.size(); i++)
    {
        cout << n[i] << " ";
    }
    cout << endl;

    //* clear() : clear whole vector.
    n.clear();
    cout << "All elements got cleared.";
    for (int i = 0; i < n.size(); i++)
    {
        cout << n[i] << " ";
    }
    return 0;
}