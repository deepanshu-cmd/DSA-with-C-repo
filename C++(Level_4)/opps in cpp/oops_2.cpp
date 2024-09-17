#include <iostream>
#include <iomanip>
#include "Hero.cpp"
using namespace std;

//* We can define class in a seprate file and then we can add it in our code through #include "class name"

int main()
{
    Hero Deepanshu;
    cout << "Size of object : " << sizeof(Hero) << endl;
    return 0;
}