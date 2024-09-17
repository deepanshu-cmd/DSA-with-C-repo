#include <iostream>
#include <iomanip>
using namespace std;

//? In C++, a class(user-defined D.T) is a fundamental concept in Object-Oriented Programming (OOP). It is a blueprint for creating objects, encapsulating data (attributes) and methods (functions) that operate on the data. The main principles of OOP include encapsulation, inheritance, polymorphism, and abstraction, and the class plays a key role in realizing these concepts.An object is an instance of class.

class Hero
{
    //* Property.
    int health;
};

int main()
{
    //* Object:-
    Hero deepanshu;

    //* size of object hero:-
    cout << "Size of hero: " << sizeof(Hero) << endl;
    //% An empty class has size = 1 byte.By default for identification.
    return 0;
}

//? Object-Oriented Programming (OOP) is a programming paradigm that revolves around the concepts of objects and classes. It allows for structuring programs such that properties (data) and behaviors (functions) are bundled into individual objects.
//^ An object is an entity which has two things behaviour and state/properties.For example:A coffee cup is an object its preperties are its name,color,width,radius,height,depth etc and its behaviour is that it used to contain coffee.
//^ Using oops concepts increase readability and maintainance of code.
