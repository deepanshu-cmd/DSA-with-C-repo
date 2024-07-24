//? program to convert celsius to Fahrenheit and vice-versa.
#include <iostream>
using namespace std;

//? Celcius ----> fahrenheit
void Fahrenheit()
{
    double F, C;
    cout << "Enter tempratur in celsius:";
    cin >> C;
    F = (9 / 5) * C + 32;
    cout << "F=" << F << endl;
}

//? Fahrenheit ----> Celcius.
void Celcius()
{
    double F, C;
    cout << "Enter tempratur in Fahrenheit:";
    cin >> F;
    C = (F - 32) * 5 / 9;
    cout << "C=" << C << endl;
}

int main()
{

    Celcius();
    Fahrenheit();
    return 0;
}