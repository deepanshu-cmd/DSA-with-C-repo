#include <iostream>
#include <iomanip>
using namespace std;
//* #define identifier replacement 
#define PI 3.14159

int main()
{
    int radius;
    cout << "Enter radius of circle : ";
    cin >> radius;
    float circle_area = 2 * PI * radius;
    cout << "Area of circle : " << circle_area << endl;
    return 0;
}