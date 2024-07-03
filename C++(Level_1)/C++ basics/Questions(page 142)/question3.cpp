//? Program to display 4 multiples and factors of a number.
#include <iostream>
using namespace std;

int main()
{
    double N, multiple1, multiple2, multiple3, multiple4, Factor1, Factor2, Factor3, Factor4;
    cout << "Enter your no:";
    cin >> N;
    multiple1 = N * 1;
    multiple2 = N * 2;
    multiple3 = N * 3;
    multiple4 = N * 4;
    cout << "N=" << '\n'
         << "multiple1=" << multiple1 << '\t' << "multiple2=" << multiple2 << '\n'
         << "multiple3=" << multiple3 << '\t' << "multiple4=" << multiple4 << endl;
    cout << '\n';
    Factor1 = N / 1;
    Factor2 = N / 2;
    Factor3 = N / 3;
    Factor4 = N / 4;
    cout
        << "Factor1=" << Factor1 << '\t' << "Factor2=" << Factor2 << '\n'
        << "Factor3=" << Factor3 << '\t' << "Factor4=" << Factor4 << endl;
}