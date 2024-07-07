//? question21(page-no.142)
#include <iostream>
using namespace std;

int main()
{
    long double one_cubicfoot = 7.481, G, N;
    cout << "Enter no. of gallons(G):";
    cin >> G;
    N = one_cubicfoot * G;
    cout << "No. of gallons(G) in Cubic-foot=" << N << endl;
    return 0;
}