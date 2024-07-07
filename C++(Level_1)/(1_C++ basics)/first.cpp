#include <iostream> //*Input/Output header file.

int main() //*Program execution will start fron here(output will be an integer).
{
    std::cout << "Babita is beautifull.";
    //* cout is a standard namespace function use to display given input on screen.We used std(a namespace) as cout is defined in standart libirary of iostream.
    //* Anything written inside " " is known as string literal and given input will end with a null character(/0).
    return 0; //* Sending value 0 to operating system who called function main which tells the succefull termination of program to system.
}