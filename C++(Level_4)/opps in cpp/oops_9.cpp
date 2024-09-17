#include <iostream>
#include <iomanip>
#include <string.h>
#include <cstring>
using namespace std;

//? Copy Constructor:A constructor that creates a new object as a copy of an existing object. It takes a reference to an object of the same class as a parameter.If you don’t define a copy constructor, the compiler provides one automatically

class Hero
{
private:
    int health;

public:
    char level;
    char *name;

    //% Also as we created our own constructor so the compiler won't creat and call contructor for class by itself.
    Hero()
    {
        // cout << "Default constructor called." << endl;
        name = new char[1000];
    }

    Hero(int health, char level)
    {
        this->health = health;
        this->level = level;
        // cout << "this(contains address of current object) : " << this << endl;
        // cout << "Parameterized Constructer called" << endl;
    }

    //* Manual copy constructor.
    //% In C++, when defining a copy constructor, the argument is typically passed by reference (specifically, a const reference) rather than by value. This is because passing by value in the copy constructor would result in a problematic situation known as infinite recursion. Let’s break down why this happens and why passing by reference is the correct approach.
    // Hero(Hero &temp)
    // {
    //     cout << "Copy Constructor called." << endl;
    //     this->health = temp.health;
    //     this->level = temp.level;
    // }

    ~Hero()
    {
        delete[] name;
    }

    void print()
    {
        cout << "Health inside class = " << this->health << '\n'
             << "level inside class = " << this->level << '\n'
             << endl;
    }

    void print_2()
    {
        cout << "[" << "Health inside class = " << this->health << " ,"
             << "level inside class = " << this->level << " ,"
             << "Name inside class = " << this->name << "]"
             << endl
             << endl;
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

    void setName(char name[])
    {
        strcpy(this->name, name);
    }
};

int main()
{
    // Hero Deepanshu(26, 'B');
    // cout << "Printing health and level of Deepanshu:-" << endl;
    // Deepanshu.print();

    // //* Copy Constructor(created by compiler).
    // // Hero Babita(Deepanshu);
    // // cout << "Printing health and level of Babita:-" << endl;
    // // Babita.print();

    // //* Manual Copu Constructor.(Default copy constructor got destroyed after the creation of manual copy contructor.)
    // Hero Babita(Deepanshu);
    // cout << "Printing health and level of Babita:-" << endl;
    // Babita.print();

    //* Shallow and Deep copy:-
    Hero h1;
    h1.setHealth(26);
    h1.setLevel('B');
    char name[7] = "Babita";
    h1.setName(name);
    h1.print_2();

    Hero h2(h1);
    h2.print_2();

    //% Default Copy Constructor.Change name of h1.
    h1.name[0] = 'b';
    h1.print_2();
    h2.print_2();
    //^ Name of h2 also get changed! as name was a pointer. In shallow copy we access same copy with diffrent name and same address. Default constructor do shallow copy while if we creat our own constructor then that will do deep copy.
    return 0;
}