#include <iostream>
#include <iomanip>
using namespace std;

void increment(int **ptr)
{
    ++(*ptr);
}

int main()
{
    int num = 110;
    int *ptr = &num;
    cout << "ptr = " << ptr << endl;
    increment(&ptr);
    cout << "num = " << num << endl;
    cout << "ptr = " << ptr << endl;
    return 0;
}