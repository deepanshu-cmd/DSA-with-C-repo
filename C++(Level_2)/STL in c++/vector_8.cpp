#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main()
{
     //* reserve():reserve() reserves memory for the vector without actually modifying its size.
     vector<int> num = {26, 20, 15};
     cout << "size of num = " << num.size() << '\n'
          << "capacity of num = " << num.capacity() << endl;
     num.reserve(100);
     cout << "size of num = " << num.size() << '\n'
          << "capacity of num = " << num.capacity() << endl;
     cout << endl;

     //* empty():The C++ vector::empty() function is used to determine whether a given vector is empty or not. If the vector size is 0, it returns true(1); otherwise, it returns false(0). It is a library function of the <vector> header.
     vector<int> empty_vector = {};
     cout << "Non-empty vector: " << num.empty() << endl;
     cout << "Empty vector: " << empty_vector.empty() << endl;
     cout << endl;

     //* shrink_to_fit():The vector::shrink_to_fit() is a built-in function in C++ STL which reduces the capacity of the container to fit its size and destroys all elements beyond the capacity. Syntax: vector_name.shrink_to_fit() Parameters: The function does not accept any parameters. Return value: The function does not returns anything.
     vector<int> num_2 = {26, 20, 15};
     num_2.reserve(100);
     cout << "size of num = " << num_2.size() << '\n'
          << "capacity of num = " << num_2.capacity() << endl;
     cout << endl;
     num_2.shrink_to_fit();
     cout << "size of num = " << num_2.size() << '\n'
          << "capacity of num = " << num_2.capacity() << endl;
     return 0;
}