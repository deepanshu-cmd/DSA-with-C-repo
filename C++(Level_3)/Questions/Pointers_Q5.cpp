#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    char ch_arr[7] = "Babita";
    char *ptr = &ch_arr[0];
    // cout << "*ptr = " << *ptr << endl;
    // cout << "*(++ptr) = " << *(++ptr) << endl;
    cout << "ptr = " << ptr << endl;
    cout << "++ptr = " << ++ptr << '\n'
         << endl;

    char str[10] = "Deepanshu";
    char *ptr2 = &str[0];
    cout << "str[0] = " << str[0] << '\t' << "ptr2[0] = " << ptr2[0] << endl;
    return 0;
}