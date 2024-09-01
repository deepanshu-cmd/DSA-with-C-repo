#include <iostream>
#include <iomanip>
using namespace std;

void update(int *p)
{
    *p = (*p) * 2;
}

int main()
{
    int num = 26;
    cout << "before updation num = " << num << endl;
    update(&num);
    cout << "after updation num = " << num << endl;
    return 0;
}