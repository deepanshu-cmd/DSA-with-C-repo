//? Linear Search : The linear search algorithm is defined asF a sequential search algorithm that starts at one end and goes through each element of a list until the desired element is found; otherwise, the search continues till the end of the dataset.
#include <iostream>
#include <iomanip>
using namespace std;

bool search(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            cout << "At index " << i << "," << " ";
            return 1;
        }
    }
    return 0;
}

int main()
{
    int arr_num[9] = {10, 0, -22, 26, 6, 15, 20, 15, -31};
    int element;
    cout << "Enter the element you want to search : ";
    cin >> element;
    int found = search(arr_num, 9, element);
    if (found)
    {
        cout << element << " is found in arr_num." << endl;
    }
    else
    {
        cout << element << " is not found in arr_num." << endl;
    }
    return 0;
}
