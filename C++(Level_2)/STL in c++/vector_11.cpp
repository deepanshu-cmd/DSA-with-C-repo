#include <iostream>
#include <iomanip>
#include <utility>
#include <vector>
using namespace std;

int main()
{
    //* Vector of pairs:
    vector<pair<int, string>> details = {{20, "Deepanshu"}, {26, "Babita"}};
    for (int i = 0; i < details.size(); i++)
    {
        cout << details.at(i).first << " " << details.at(i).second << endl;
    }
    cout << endl;

    details.push_back({15, "Angad"});
    details.push_back(make_pair(20, "Akshit"));
    for (int i = 0; i < details.size(); i++)
    {
        cout << details.at(i).first << " " << details.at(i).second << endl;
    }
    cout << endl;

    details.erase(details.begin() + 2);
    for (int i = 0; i < details.size(); i++)
    {
        cout << details.at(i).first << " " << details.at(i).second << endl;
    }

    return 0;
}