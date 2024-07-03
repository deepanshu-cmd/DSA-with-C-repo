//? Program to enter marks of a student in 5 subjects and printing their percentage(page-no.:141).
#include <iostream>
using namespace std;

int main()
{
    double sub1, sub2, sub3, sub4, sub5, Tmarks, percentage;
    cout << "Enter marks in each subject:";
    cin >> sub1 >> sub2 >> sub3 >> sub4 >> sub5;

    Tmarks = sub1 + sub2 + sub3 + sub4 + sub5;
    cout << "Total marks:" << Tmarks << endl;

    percentage = (Tmarks / 500) * 100;
    cout << "Percentage:" << percentage << endl;
    return 0;
}