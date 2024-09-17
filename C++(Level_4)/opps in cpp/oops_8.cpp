#include <iostream>
#include <iomanip>
using namespace std;

//? Parameterized Constructor:A constructor that takes one or more parameters to initialize an object with specific values at the time of creation.

class Hero
{
private:
    int health;

public:
    char level;

    //% Also as we created our own constructor so the compiler won't creat and call contructor for class by itself.

    Hero(int health, char level)
    {
        this->health = health;
        this->level = level;
        cout << "this(contains address of current object) : " << this << endl;
        cout << "Parameterized Constructer called" << endl;
    }

    void print()
    {
        cout << "Health inside class = " << health << endl;
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
    Hero Deepanshu(20, 'D');
    cout << "Address of Deepanshu: " << &Deepanshu << endl;
    Deepanshu.print();
    return 0;
}