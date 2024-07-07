//? Check wheather the given input character is a vowel or a consonent.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    char Letter;
    cout << "Enter your letter from English alphabet:";
    cin >> Letter;
    //! switch (Letter)
    // {
    // case 'a':
    //     cout << "Given letter is a vowel";
    //     break;
    // case 'e':
    //     cout << "Given letter is a vowel";
    //     break;
    // case 'i':
    //     cout << "Given letter is a vowel";
    //     break;
    // case 'o':
    //     cout << "Given letter is a vowel";
    //     break;
    // case 'u':
    //     cout << "Given letter is a vowel";
    //     break;
    // default:
    //     cout << "Given letter is a consonet.";
    //     break;
    // }
    if (Letter == 'a' || Letter == 'A' || Letter == 'e' || Letter == 'E' || Letter == 'i' || Letter == 'I' || Letter == 'o' || Letter == 'O' || Letter == 'u' || Letter == 'U')
    {
        cout << "Given letter is a vowel." << endl;
    }
    else
    {
        cout << "given letter is a consonet." << endl;
    }

    return 0;
}