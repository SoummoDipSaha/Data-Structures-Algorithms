#include <iostream>

using namespace std;

int binarySearch(int *arr, int n, int k)
{
    int mid, up = n - 1;
    int low = 0;
    while (low <= up)
    {
        mid = (low + up) / 2;
        if (k < arr[mid])
            up = mid - 1;
        else if (k > arr[mid])
            low = mid + 1;
        else
            return mid + 1;
    }
    return -1;
}

int main()
{
    int n, value, i, pos = 0;
    cout << "N = ";
    cin >> n;
    int *arr = new int(n);
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Searching value = ";
    cin >> value;
    pos = binarySearch(arr, n, value);
    if (pos == -1)
        cout << "Element not found";
    else
        cout << "Element found at position = " << pos;
    return 0;
}