#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    //* Allocate memory for an integer on the heap
    int *ptr = new int;
    *ptr = 30;
    cout << "Dynamically Allocated Integer: " << *ptr << endl;

    //* Allocate memory for an array on the heap
    int *arr = new int[5];
    for (int i = 0; i < 5; ++i)
    {
        arr[i] = i * 10;
    }
    cout << "Dynamically Allocated Array: ";
    for (int i = 0; i < 5; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    //% Deallocate memory
    delete ptr;
    delete[] arr;

    return 0;
}

//? Dynamic Memory allocation:Memory is allocated at runtime as needed, allowing for flexible memory usage.The size can be determined during program execution, enabling the creation of data structures like arrays ,linked lists, trees, etc.Memory is reserved while the program is running.Example: Objects created using new, memory allocated with malloc().

//? Memory Location: Heap Segment ---> Allocated on the heap, which is a larger pool of memory managed at runtime.

//? Lifespan & Scope:-
//^ Lifespan: Exists until it is explicitly deallocated.
//^ Scope: Controlled by the programmer, allowing for flexible usage patterns.

//? Memory Management:-
//^ Manual Management: Programmers must allocate and deallocate memory using new/delete or malloc()/free().
//^ Potential for Errors: Risks of memory leaks, dangling pointers, and fragmentation if not managed properly.

//? Flexibility: High Flexibility --> Can handle varying amounts of data and complex data structures that change size during execution.
