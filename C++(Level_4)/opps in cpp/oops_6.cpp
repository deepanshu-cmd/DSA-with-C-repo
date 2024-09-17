#include <iostream>
#include <iomanip>
using namespace std;

//* Creating object dynamically.

class Hero
{
private:
    int health;

public:
    char level;

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
    Hero *d = new Hero;

    //* Initialization.
    d->setHealth(26);
    d->level = 'D';

    cout << "Size of hero: " << sizeof(*d) << endl;

    //* Accessing.
    // cout << "Health = " << (*d).getHealth() << endl;
    // cout << "Level = " << (*d).getLevel() << endl;

    //^ Alternate Accessing method.
    cout << "Health = " << d->getHealth() << endl;
    cout << "Level = " << d->getLevel() << endl;

    //% Free the dynamically allocated memory.
    delete d;

    return 0;
}