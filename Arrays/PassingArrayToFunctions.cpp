#include <iostream>

using namespace std;

void printArray(int *arr, int n)
{
    // int n = sizeof(arr) / sizeof(int);

    cout << "In function = " << sizeof(arr) << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "[" << arr[i] << "]";
    }
    cout << endl;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    printArray(arr, n);

    cout << "In main = " << sizeof(arr) << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "[" << arr[i] << "]";
    }
}