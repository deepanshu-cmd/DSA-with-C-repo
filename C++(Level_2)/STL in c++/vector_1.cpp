#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

//? Vectors in C++ are part of the Standard Template Library (STL) and are dynamic arrays that can grow and shrink in size. Unlike arrays, vectors can automatically resize themselves when an element is added or removed, and they provide a range of functions to manipulate the data they hold.
//^ Unlike arrays, Vectors provides bound checking of elements.

int main()
{
    //* Declaration: vector<object_type> vector_name(size);
    vector<int> numbers;

    //^ Initializtion: vector_name={e1,e2,e3,......};
    //^ Initializtion2: vector_name.push_back(value);
    numbers.push_back(26);
    numbers.push_back(20);
    numbers.push_back(6);
    numbers.push_back(11);
    int value;
    for (int i = 0; i < 5; i++)
    {
        cout << "enter value no. " << i + 1 << " : ";
        cin >> value;
        numbers.push_back(value);
    }
    for (int i = 0; i < 5; i++)
    {
        //^ Accessing elements: vector_name[index];
        cout << numbers[i] << " ";
    }

    vector<int> num(10);
    cout << "Enter elements of your vector: ";
    for (int i = 0; i < 10; i++)
    {
        cin >> num[i];
    }
    for (int i = 0; i < 10; i++)
    {
        cout << num[i] << " ";
    }

    return 0;
}