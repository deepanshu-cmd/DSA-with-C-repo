//? Type deduction : auto and decltype ---> When a new variable is initialized, the compiler can figure out what the type of the variable is automatically by the initializer.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int num = 26;
    auto bar = num; //% Same as int a = num;
    //* Here, bar is declared as having an auto type; therefore, the type of bar is the type of the value used to initialize it: in this case it uses the type of num, which is int.
    cout << "num = " << num << '\t' << "bar = " << bar << endl;
    int num_2 = 20;
    decltype(num_2) bar_2;
    //*bar is declared as having the same type as num_2.
    cout << "num_2 = " << num_2 << '\t' << "bar_2 = " << bar_2 << endl;

    return 0;
}