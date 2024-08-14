#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main()
{
    //* rbegin() & rend().
    //^ rbegin and rend return reverse iterators. Reverse iterators behave as though they are looking at the sequence backward. rbegin returns an iterator that points to the last element, and rend returns an iterator that points to one before the first; this is exactly opposite of what begin and end do.
    vector<char> vowels = {'a', 'e', 'i', 'o'};
    vector<char>::reverse_iterator c;
    for (c = vowels.rbegin(); c != vowels.rend(); c++)
    {
        cout << *c << " ";
    }
    vowels.push_back('u');
    cout << endl;
    for (c = vowels.rbegin(); c != vowels.rend(); c++)
    {
        cout << *c << " ";
    }
    cout << endl;

    
    return 0;
}