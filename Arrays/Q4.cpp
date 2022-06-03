// Duplicate In Array
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int findDuplicate(vector<int> &arr)
{
    int i;
    sort(arr.begin(), arr.end());
    for (i = 0; i < arr.size() - 1; i++)
    {
        if (arr[i] == arr[i + 1])
            return arr[i];
    }
    // int i, j;
    // for (i = 0; i < arr.size() - 1; i++)
    // {
    //     for (j = i + 1; j < arr.size(); j++)
    //     {
    //         if (arr[i] == arr[j])
    //             return arr[i];
    //     }
    // }
}

int main()
{
    int n, i, val, duplicate;
    cout << "N = "; // range of the vector
    cin >> n;
    vector<int> arr;
    cout << "Enter elements = ";
    for (i = 0; i < n; i++)
    {
        cin >> val;
        arr.push_back(val);
    }

    duplicate = findDuplicate(arr);
    cout << duplicate;

    return 0;
}