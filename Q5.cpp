// 442. Find All Duplicates in an Array - LeetCode

#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

vector<int> findDuplicates(vector<int> &nums)
{
    int i;
    unordered_map<int, int> map;
    vector<int> ans;

    for (i = 0; i < nums.size(); i++)
    {
        map[nums[i]]++;
        if (map[nums[i]] == 2)
            ans.push_back(nums[i]);
    }
    // for (int i : arr)
    // {
    //     map[i]++;
    //     if (map[i] == 2)
    //         ans.push_back(i);
    // }
    return ans;
}

int main()
{
    int n, i, val;
    cout << "N = ";
    cin >> n; // range of the vector

    vector<int> arr;
    vector<int> duplicates;
    cout << "Enter elements = ";
    for (i = 0; i < n; i++)
    {
        cin >> val;
        arr.push_back(val);
    }
    duplicates = findDuplicates(arr);

    for (i = 0; i < duplicates.size(); i++)
    {
        cout << duplicates[i] << " ";
    }

    return 0;
}