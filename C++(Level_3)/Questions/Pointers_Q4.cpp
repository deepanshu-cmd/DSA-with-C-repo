#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int arr[5] = {6, 15, 20, 26, 31};
    //! int *p = arr++; ---> this will give error coz we can't update content of symbole table in case of an array.

    int *p = arr;
    *(p++);
    cout << "*p = " << *p << '\n'
         << endl;

    char ch = 'B';
    char *q = &ch;
    cout << "*q = " << *q << endl;
    cout << "q = " << q << endl;
    cout << "&ch = " << &ch << '\n'
         << endl;

    char c = 'A';
    char *r = &c;
    c++;
    cout << "c = " << c << '\t' << "*r = " << *r << '\n'
         << endl;
    return 0;
}