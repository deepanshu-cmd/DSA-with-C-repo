#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

//? Itrators:An iterator is used to point to the memory address of the STL container classes. For better understanding, you can relate them with a pointer, to some extent. Iterators act as a bridge that connects algorithms to STL containers and allows the modifications of the data present inside the container.

int main()
{
    //* begin() & end() :
    //^ begin(): Returns an itrator pointing to memory address of first element of a vector.
    //^ end(): Returns an itrator pointing to memory address of an element of a vector preceded by last element.It points to the theortical element which comes after the element that's y we can't derefrence it.
    vector<int> num = {6, 11, 15, 20, 26};
    cout << "First element: " << num.front() << '\n'
         << "Last Element: " << num.back() << endl;

    //* Print all element using itrator:
    //^ Declaration: vector<object_type>:: itrator itrator_name;
    vector<int>::iterator I;
    for (I = num.begin(); I < num.end(); I++)
    {
        cout << *I << " ";
    }
    num.push_back(31);
    cout << endl;
    for (I = num.begin(); I < num.end(); I++)
    {
        cout << *I << " ";
    }
    return 0;
}