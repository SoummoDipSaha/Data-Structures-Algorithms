// Find the unique element in an array

#include <iostream>

using namespace std;

int findUnique(int *arr, int n)
{
    int i, j, count = 0, val;
    for (i = 0; i < n; i++)
    {
        count = 0;
        for (j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
                count++;
        }
        if (count == 1)
            return arr[i];
    }
    // return val;

    /*
    1, 3, 2, 1, 4, 3, 2
    0 ^ 1 = 0000 ^ 0001 = 0001 = 1
    1 ^ 3 = 0001 ^ 0011 = 0010 = 2
    2 ^ 2 = 0010 ^ 0010 = 0
    0 ^ 1 = 1
    1 ^ 4 = 0001 ^ 0100 = 0101 = 5
    5 ^ 3 = 0101 ^ 0011 = 0110 = 6
    6 ^ 2 = 0110 ^ 0010 = 0100 = 4
    int ans = 0;
    for(i=0; i<n; i++){
        ans += arr[i]
    }
    return ans;
    */
}

int main()
{
    int n, i, val = 0;
    cout << "N = ";
    cin >> n; // range of an array
    int *arr = new int(n);

    cout << "Enter elements = ";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    val = findUnique(arr, n);
    cout << val;
    return 0;
}