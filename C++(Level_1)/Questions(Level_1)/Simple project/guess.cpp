//? Guess the number game.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    srand(time(NULL));
    int cpu = rand() % 100 + 1;
    int yournumber, chance = 0, points = 100;
    cout << "Enter your number: ";
    cin >> yournumber;
    while (yournumber)
    {
        if (yournumber == cpu)
        {
            cout << "yournumber = cpu = " << cpu << endl;
            cout << "Congrats you guessed the right number!";
            break;
        }
        else if (yournumber > cpu)
        {
            cout << "Your number is greater then the number genrated by cpu!" << endl;
            cout << "Enter your number again : ";
            chance++;
            cin >> yournumber;
        }
        else if (yournumber < cpu)
        {
            cout << "Your number is less then the number genrated by cpu!" << endl;
            cout << "Enter your number again : ";
            chance++;
            cin >> yournumber;
        }
    }

    cout << "points = " << points - chance << endl;

    return 0;
}