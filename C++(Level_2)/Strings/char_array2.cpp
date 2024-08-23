#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int getlength(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

int main()
{
    char name[20];
    cin >> name;
    int size = getlength(name);
    cout << "Size of character array = " << size << endl;
    cout << &name << endl;
    cout << endl;
    return 0;
}