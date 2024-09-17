#include <iostream>
#include <iomanip>
using namespace std;

//? In Object-Oriented Programming (OOP), a constructor is a special member function of a class in C++ that is automatically called when an object of that class is created. It is used to initialize the object's data members and allocate resources if necessary. Constructors play a crucial role in ensuring that objects start in a well-defined and valid state.

class Hero
{
private:
    int health;

public:
    char level;

    //% Default constructor has no parameter,no return type,it called automatically when an object is created.Also as we created our own constructor so the compiler won't creat and call contructor for class by itself.
    Hero()
    {
        cout << "Constructor called(Default)." << endl;
    }

    void print()
    {
        cout << "level inside class = " << level << endl;
    }

    int getHealth()
    {
        return health;
    }

    char getLevel()
    {
        return level;
    }

    void setHealth(int h)
    {
        health = h;
    }

    void setLevel(char ch)
    {
        level = ch;
    }
};

int main()
{
    cout << "Before constructor call." << endl;
    //* Object created.
    Hero Deepanshu; //% ------> Hero.Deepanshu(); by default automatically.
    cout << "After constructor call." << endl;

    return 0;
}