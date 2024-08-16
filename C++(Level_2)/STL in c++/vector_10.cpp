#include <iostream>
#include <iomanip>
#include <utility>
using namespace std;

//? A pair in C++ is described as a container that combines two elements of the same or different data types in C++. Pair in C++ consists of two elements, first and second (must be in this order), and they are accessed using the dot (.)

int main()
{
     //* declaration: pair<data_type1,data_type2> pair_name;
     pair<int, char> p(26, 'B');
     //% p = {20, 'D'};
     cout << "first element  of pair (p) = " << p.first << '\n'
          << "Second element of pair (p) = " << p.second << endl;
     cout << endl;

     //^ using make_pair() for initialization:
     pair<string, double> p2;
     p2 = make_pair("Babita", 26.20);
     cout << "first element  pair of p2  = " << p2.first << '\n'
          << "Second element pair of p2  = " << p2.second << endl;
     cout << endl;

     //^ using auto for initialization without declaration:
     auto p3 = make_pair("Deepanshu", 'B');
     cout << "first element  pair of p3  = " << p3.first << '\n'
          << "Second element pair of p3  = " << p3.second << endl;
     cout << endl;

     //^ Initializing a pair with another pair:
     pair<string, double> p4(p2);
     cout << "first element  pair of p4  = " << p4.first << '\n'
          << "Second element pair of p4  = " << p4.second << endl;
     cout << endl;

     //^ Initializing through direct assignment:
     pair<bool, float> p5;
     p5.first = true;
     p5.second = 20.26;
     cout << "first element  pair of p5  = " << p5.first << '\n'
          << "Second element pair of p5  = " << p5.second << endl;
     cout << endl;

     //* Swaping and checking values of two pair(they must have same order of data_type):
     pair<int, double> p6(20, 20.26);
     pair<int, double> p7(11, 20.15);
     cout << "first element  pair of p6 & p7 before swaping  = " << p6.first << '\t' << p7.first << '\n'
          << "Second element pair of p6 & p7 before swaping  = " << p6.second << '\t' << p7.second << endl;
     p7.swap(p6);
     //% p6.swap(p7);
     cout << endl;
     cout << "first element  pair of p6 & p7 after swaping  = " << p6.first << '\t' << p7.first << '\n'
          << "Second element pair of p6 & p7 after swaping  = " << p6.second << '\t' << p7.second << endl;

     cout << "p6==p7 : " << (p6 == p7) << endl;
     cout << "p6!=p7 : " << (p6 != p7) << endl;

     //@ NOTE: Initializing pairs will give 0 value as an output except for string(nothing would be printed).

     return 0;
}