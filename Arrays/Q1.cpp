// Swap alternate elements in an array

#include <iostream>

using namespace std;

int *swap(int *arr, int n)
{
    int i;
    for (i = 0; i < n - 1; i += 2)
    {
        arr[i] = arr[i] + arr[i + 1];     // 5+10 =15
        arr[i + 1] = arr[i] - arr[i + 1]; // 15-10 = 5
        arr[i] = arr[i] - arr[i + 1];     // 15-5 = 10
    }
    return arr;
}

int main()
{
    int n, i;
    cout << "N = ";
    cin >> n; // range of the array
    int *arr = new int(n);

    cout << "Enter elements = ";

    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    arr = swap(arr, n);

    for (i = 0; i < n; i++)
    {
        cout << arr[i];
    }

    return 0;
}