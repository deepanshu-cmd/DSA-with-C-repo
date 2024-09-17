#include <iostream>
#include <iomanip>
using namespace std;

class Hero
{
    int health;
    char level;
};

int main()
{
    Hero Deepanshu;
    //% Expected size = 5 , Actual size = 8. Due to padding and greedy alignment.
    cout << "Size of Object Deepanshu : " << sizeof(Deepanshu) << endl;
    return 0;
}

//? In C++, padding refers to extra bytes added between data members of a structure or class to align the data in memory. This is done to ensure efficient access to memory and adhere to the alignment requirements of the system’s architecture.Most modern processors are optimized for accessing data at specific memory boundaries (like 4-byte, 8-byte, or 16-byte boundaries). If data isn't aligned to these boundaries, the processor might take more time to fetch the data due to extra memory accesses or it might even raise an error in certain architectures. To prevent this, padding is used to align the data.
