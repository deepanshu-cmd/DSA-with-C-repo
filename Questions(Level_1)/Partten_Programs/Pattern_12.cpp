//? Pattern-12
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int i = 1, n;
    cout << "Enter number of rows(n) : ";
    cin >> n;
    while (i <= n)
    {
        //% Printing space column wise.
        //* int space = n - i;
        int space=i-1;
        while (space)
        {
            cout << " ";
            space--;
        }
        //% Printing "*" column wise.
        //* int j = i;
        int j = n;
        //* while (j <=i)
        while (j >= i)
        {
            cout << "*";
            //* j++;
            j--;
        }
        cout << endl;
        i++;
    }

    return 0;
}