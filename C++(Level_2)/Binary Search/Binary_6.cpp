#include <iostream>
#include <iomanip>
using namespace std;

bool ispossible(int arr[], int length, int n, int mid)
{
    int StudentCount = 1;
    int pageSum = 0;
    for (int i = 0; i < length; i++)
    {
        if (pageSum + arr[i] <= mid)
        {
            pageSum += arr[i];
        }
        else
        {
            StudentCount++;
            if (StudentCount > n || arr[i] > mid)
            {
                return false;
            }
            pageSum = arr[i];
        }
    }
    return true;
}

int book(int arr[], int length, int n)
{
    if (n > length)
        return -1; //% Not enough books for students

    int s = 0;
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum += arr[i];
    }
    int e = sum;
    int ans = -1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {

        if (ispossible(arr, length, n, mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{
    int length, n;
    cout << "Enter length of your array: ";
    cin >> length;
    int arr[length];
    cout << "Enter elements of your array: ";
    for (int i = 0; i < length; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter number of students: ";
    cin >> n;

    int result = book(arr, length, n);
    if (result == -1)
    {
        cout << "Not enough books for the number of students." << endl;
    }
    else
    {
        cout << "The minimum number of pages that a student will have to read is: " << result << endl;
    }
    return 0;
}
