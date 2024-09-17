#include <iostream>
#include <iomanip>
using namespace std;

//* Accessig private members of object outside of class through getter and setter concept.
//? Getters and setters are methods used in object-oriented programming (OOP) to control access to the private members of a class. They allow us to access (get) and modify (set) the value of private attributes indirectly, thereby enforcing encapsulation.By using getters and setters, we achieve encapsulation and data validation, controlling how the internal state of an object is accessed or changed.

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
    Hero Deepanshu;

    //* Initialization:-
    Deepanshu.setHealth(20);
    Deepanshu.setLevel('D');

    //* Accessing:-
    cout << "Health of Deepanshu : " << Deepanshu.getHealth() << endl;
    cout << "Level of Deepanshu : " << Deepanshu.getLevel() << endl;
    return 0;
}

//@ NOTE: Learn more about setter().