#include <iostream>
#include <iomanip>
using namespace std;

//* By default class is private.
class Hero
{
    //^ If we write public after health then we can only access level outside of class as health is private by default.
public:
    int health;

    // private:
    char level;

    void print()
    {
        cout << "level inside class = " << level << endl;
    }
};

int main()
{
    Hero Deepanshu;

    //* Initializing health and level:-
    Deepanshu.health = 20;
    Deepanshu.level = 'D';

    //* Accessing health and level of Deepanshu.
    cout << "Health of Deepanshu : " << Deepanshu.health << endl;
    cout << "Level of Deepanshu : " << Deepanshu.level << endl;

    return 0;
}

//?A class defines a new data type with its own attributes (variables) and behaviors (functions). Once a class is defined, you can create objects (instances) of that class.
//^ Accessing Data Member/Properties of an object using " . " operator.
//^ Access Modifiers:In C++, access modifiers (or access specifiers) are used to control the visibility and accessibility of class members (attributes and methods). Three Acess Modifiers --> Public,Private & Protected.

//^ Public:Members declared as public can be accessed from outside the class.Both functions and data members marked as public are available to all other functions in the program, provided an object of the class is used to access them.

//^ Private:Members declared as private cannot be accessed directly from outside the class. They can only be accessed within the class itself (or by friend classes or functions).private is the default access modifier if none is explicitly specified.

//^ Protected:Members declared as protected are similar to private members, but they can be accessed by derived (child) classes.These members are not accessible outside the class unless through inheritance.