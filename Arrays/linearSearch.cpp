#include <iostream>

using namespace std;

int linearSearch(int *arr, int n, int val)
{
    int i, pos = -1;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == val)
        {
            pos = i + 1;
            break;
        }
    }
    return pos;
}

int main()
{
    int n, value, i, pos;
    cout << "N = ";
    cin >> n; // range of array
    int *arr = new int(n);
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Searching element = ";
    cin >> value; // element to be searched
    pos = linearSearch(arr, n, value);
    if (pos == -1)
        cout << "Element not found";
    else
        cout << "Element found at position = " << pos;
    return 0;
}