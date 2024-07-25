//? Star pattern-3 
/*
         *
        **
       ***
      ****
     *****
    ******
   *******
  ********
 *********
**********
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int i, j, n;
    char s;
    cout << "Enter number of rows(n) & the symbol(s) you want in your pattern:  ";
    cin >> n >> s;
    for (i = 1; i <= n; i++)
    {
        for (int k = n - i; k > 0; k--)
        {
            cout << " ";
        }

        for (j = 1; j <= i; j++)
        {
            cout << s;
        }
        cout << '\n';
    }
    return 0;
}