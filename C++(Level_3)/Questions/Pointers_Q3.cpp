#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float first = 19.26;
    float second = 31.15;
    float *p = &first;
    (*p)++;
    *p = second;
    cout << "*p = " << *p << '\t' << "first = " << first << '\t' << "second = " << second << endl;
    return 0;
}