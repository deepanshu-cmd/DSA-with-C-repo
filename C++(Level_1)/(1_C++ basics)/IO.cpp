//* stream = sequence of bytes.
//* iostream=Input/output stream
//* Input stream=Direction of flow of bytes takes place from input device(like keyboard) to the main memory.
//* Output stream=Direction of flow of bytes takes place from main memory(like keyboard) to the output device(like display).
#include <iostream>
using namespace std;

int main()
{
    int num1, num2, sum;

    cout << "Enter num1 and num2:"; //! (<<)=insertion operator.

    cin >> num1 >> num2; //! (>>)=extraction operator.

    sum = num1 + num2;
    cout << "Sum=" << sum << endl;
    return 0;
}

//! cin.get() -----> lecture 3 of dsa series