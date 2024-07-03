//? Program to tell wheather the entered year is a leap year or not.
/*
**LOGIC :-
*1 year=365 days 6hr
*leap year=366 days 24hr.
*A leap comes  once in a every 4year
*So the years which are completely divisble by(1)//! 4 ,100 and 400 is a leap year
                                             *(2)//! 4 only is a leap year
                                             *(3)//! **100 and 4 only is not a leap year.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int year;
    cout << "year=";
    cin >> year;
    if (year % 400 == 0 && year % 100 == 0 && year % 4 == 0)
    {
        cout << "Year:" << year << "is a leap year." << endl;
    }
    else if (year % 400 != 0 && year % 100 != 0 && year % 4 == 0)
    {
        cout << "Year:" << year << "is a leap year." << endl;
    }
    else if (year % 400 != 0 && year % 100 == 0 && year % 4 == 0)
    {
        cout << "Year:" << year << "is not a leap year." << endl;
    }
    else if (year % 400 != 0 && year % 100 != 0 && year % 4 != 0)
    {
        cout << "Year:" << year << "is not a leap year." << endl;
    }
    return 0;
}