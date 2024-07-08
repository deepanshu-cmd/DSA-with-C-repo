//? Character array.
#include <iostream>
#include <iomanip>
using namespace std;

void Array(char arr_name[], int size)
{
    for (int i = 0; i < 6; i++)
    {
        cout << arr_name[i] << " ";
    }
}

int main()
{
    char ch[6] = {'B', 'A', 'B', 'I', 'T', 'A'};
    Array(ch, 6);
    return 0;
}