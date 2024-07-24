//? question21(page-no.142)
#include <iostream>
using namespace std;

long double one_cubicfoot = 7.481;

int main()
{
    long double G, N;
    cout << "Enter no. of gallons(G):";
    cin >> G;
    N = one_cubicfoot * G;
    cout << "No. of gallons(G) in Cubic-foot=" << N << endl;
    return 0;
}