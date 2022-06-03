// 1207.Unique Number of Occurrences --> LeetCode

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool uniqueOccurences(vector<int> &arr)
{
    int i = 0, j, count = 1;
    vector<int> ans;
    sort(arr.begin(), arr.end());
    for (i = 0; i < arr.size(); i += count)
    {
        count = 1;
        for (j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] == arr[j])
                count++;
        }
        ans.push_back(count);
    }
    for (i = 0; i < ans.size(); i++)
    {
        for (j = i + 1; j < ans.size(); j++)
        {
            if (ans[i] == ans[j])
                return false;
        }
    }
    return true;
}

int main()
{
    vector<int> arr;
    int n, i, val;
    bool unq;
    cout << "N = ";
    cin >> n; // range of the array
    cout << "Enter elements = ";
    for (i = 0; i < n; i++)
    {
        cin >> val;
        arr.push_back(val);
    }
    // for (i = 0; i < n; i++)
    // {
    //     cout << arr[i];
    // }
    unq = uniqueOccurences(arr);

    cout << unq;

    return 0;
}