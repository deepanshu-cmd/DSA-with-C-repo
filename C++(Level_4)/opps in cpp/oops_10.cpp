#include <iostream>
#include <iomanip>
#include <string.h> // for strlen and strcpy
using namespace std;

//* A deep copy allocates new memory for name for the new object and copies the contents, ensuring that each object has its own independent copy of the string.

class Hero
{
private:
    int health;

public:
    char level;
    char *name;

    // Default constructor
    Hero()
    {
        name = new char[1000];
    }

    // Parameterized constructor
    Hero(int health, char level)
    {
        this->health = health;
        this->level = level;
        name = new char[1000];
    }

    // Manual copy constructor (deep copy)
    Hero(const Hero &temp)
    {
        // Allocate memory for the name and perform a deep copy
        name = new char[strlen(temp.name) + 1]; // +1 for null terminator
        strcpy(name, temp.name);
        this->health = temp.health;
        this->level = temp.level;
    }

    // Destructor to free dynamically allocated memory
    ~Hero()
    {
        delete[] name;
    }

    void print_2()
    {
        cout << "[Health = " << this->health << ", "
             << "Level = " << this->level << ", "
             << "Name = " << this->name << "]" << endl;
    }

    // Getters
    int getHealth()
    {
        return health;
    }

    char getLevel()
    {
        return level;
    }

    // Setters
    void setHealth(int h)
    {
        health = h;
    }

    void setLevel(char ch)
    {
        level = ch;
    }

    void setName(const char name[])
    {
        strcpy(this->name, name);
    }
};

int main()
{
    // Create an object h1 and set its values
    Hero h1;
    h1.setHealth(26);
    h1.setLevel('B');
    char name[7] = "Babita";
    h1.setName(name);
    h1.print_2(); // Prints h1's values

    // Create a copy of h1 using the copy constructor (deep copy)
    Hero h2(h1);
    h2.print_2(); // Prints h2's values (copied from h1)

    // Change the name of h1 to test deep copy
    h1.name[0] = 'b'; // Changing first character of h1's name
    h1.print_2();     // h1's name should be different now
    h2.print_2();     // h2's name should remain unchanged (because of deep copy)

    return 0;
}

//* Problem with shallow copy:
//^ 1.Shared Memory: Both h1 and h2 share the same memory for name, so any change in one object’s name affects the other.
//^ 2.Potential Issues with Destruction: When h1 and h2 go out of scope, both will try to delete[] name. This leads to a double free error (because the same memory is freed twice), causing a crash or undefined behavior.

//* Non-pointer members like health and level are copied by value in both shallow and deep copies. Each object (h1 and h2) will have its own independent storage for health and level, so changing health in one object does not affect the other.Pointer members like name are where the shallow copy differs. In a shallow copy, both objects share the same memory for name. Therefore, changing the contents of name in one object will affect the other object, but this behavior does not apply to health or other primitive members. 
