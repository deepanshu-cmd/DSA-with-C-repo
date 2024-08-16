#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main()
{
    //* size(),max_size() & capacity():
    //^ The capacity does not suppose a limit on the size of the vector. When this capacity is exhausted and more is needed, it is automatically expanded by the container (reallocating it storage space). The theoretical limit on the size of a vector is given by member max_size.
    vector<float> number = {26.201, 15.202, 6.11, 31.03};
    vector<float>::iterator float_num;
    for (float_num = number.begin(); float_num < number.end(); float_num++)
    {
        cout << *float_num << " ";
    }
    cout << endl;
    cout << "size of vector(number): " << number.size() << '\n'
         << "max_size of vector(number): " << number.max_size() << '\n'
         << "capacity of vector(number): " << number.capacity() << endl;
    number.push_back(20.26);
    cout << endl;
    for (float_num = number.begin(); float_num < number.end(); float_num++)
    {
        cout << *float_num << " ";
    }
    cout << endl;
    cout << "size of vector(number): " << number.size() << '\n'
         << "max_size of vector(number): " << number.max_size() << '\n'
         << "capacity of vector(number): " << number.capacity() << endl;

    //* resize():The function alters the container's content in actual by inserting or deleting the elements from it. It happens so, If the given value of n is less than the size at present then extra elements are demolished.
    cout << endl;
    // number.resize(3);  //% only 3 elements got printed on display.
    number.resize(12, 26); //% size would be 12 ,means elements got printed on display(after last element 0 get assigned).
    for (float_num = number.begin(); float_num < number.end(); float_num++)
    {
        cout << *float_num << " ";
    }
    cout << endl;
    cout << "size of vector(number): " << number.size() << '\n'
         << "max_size of vector(number): " << number.max_size() << '\n'
         << "capacity of vector(number): " << number.capacity() << endl;
    return 0;
}