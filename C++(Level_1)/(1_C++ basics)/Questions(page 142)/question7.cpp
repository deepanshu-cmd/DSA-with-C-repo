//? question19(page-no.142)
#include <iostream>
using namespace std;

int main()
{
    double p, w, x, y, z, W, Y;
    cout << "Enter value of w:";
    cin >> w;
    cout << "Enter value of x:";
    cin >> x;
    cout << "Enter value of y:";
    cin >> y;
    cout << "Enter value of z:";
    cin >> z;
    cout << '\n';
    W = w + x;
    Y = y - z;
    p = W / Y;
    cout << "W=" << W << '\n'
         << "Y=" << Y << '\n'
         << "p=" << p << endl;
}