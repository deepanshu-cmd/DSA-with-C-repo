#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

//? The size of a vector is the number of elements that it contains, which is directly controlled by how many elements you put into the vector. Capacity is the amount of total space that the vector has. Under the hood, a vector just uses an array. The capacity of the vector is the size of that array.

int main()
{
    vector<int> numbers;
    //* size and capacity of an empty vector:
    cout << "Size and capacity of an empty vector:- " << endl;
    cout << "Size of vector numbers = " << numbers.size() << endl;
    cout << "Capacity of vector numbers = " << numbers.capacity() << endl;

    //^ size and capacity of a vector after inserting an element:-
    cout << endl;
    numbers.push_back(20);
    cout << "Size and capacity of a vector with an element:- " << endl;
    cout << "element = " << numbers[0] << endl;
    cout << "Size of vector numbers = " << numbers.size() << endl;
    cout << "Capacity of vector numbers = " << numbers.capacity() << endl;

    //^ Now size will be 2 and capacity will be 2 as we inserted another element in a vector whose size & capacity was 1.
    cout << endl;
    numbers.push_back(26);
    cout << "Size and capacity after inserting an element :- " << endl;
    cout << "element = " << numbers[0] << " " << numbers[1] << endl;
    cout << "Size of vector numbers = " << numbers.size() << endl;
    cout << "Capacity of vector numbers = " << numbers.capacity() << endl;

    //^ Now size will be 3 and capacity will be 4 as we inserted another element in a vector whose size & capacity was 2.
    cout << endl;
    numbers.push_back(26);
    cout << "Size and capacity after inserting an element in a vector of size 2 :- " << endl;
    cout << "element = " << numbers[0] << " " << numbers[1] << " " << numbers[2] << endl;
    cout << "Size of vector numbers = " << numbers.size() << endl;
    cout << "Capacity of vector numbers = " << numbers.capacity() << endl;

    //^ Now size will be 4 and capacity will be 4 as we inserted another element in a vector whose size was 3 & capacity was 4.
    cout << endl;
    numbers.push_back(26);
    cout << "Size and capacity after inserting an element in a vector of size 3 :- " << endl;
    cout << "element = " << numbers[0] << " " << numbers[1] << " " << numbers[2] << " " << numbers[3] << endl;
    cout << "Size of vector numbers = " << numbers.size() << endl;
    cout << "Capacity of vector numbers = " << numbers.capacity() << endl;

    //^ Now size will be 5 and capacity will be 8 as we inserted another element in a vector whose size was 4 & capacity was 5.
    cout << endl;
    numbers.push_back(26);
    cout << "Size and capacity after inserting an element in a vector of size 4 :- " << endl;
    cout << "element = " << numbers[0] << " " << numbers[1] << " " << numbers[2] << " " << numbers[3] << " " << numbers[4] << endl;
    cout << "Size of vector numbers = " << numbers.size() << endl;
    cout << "Capacity of vector numbers = " << numbers.capacity() << endl;
    return 0;
}