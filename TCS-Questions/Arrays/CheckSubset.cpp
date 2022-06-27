#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

bool checkSubset(vector<int> &arr1, vector<int> &arr2, int n, int m)
{
    if (m > n)
    {
        return false;
    }

    unordered_map<int, int> mp(0);
    for (auto i : arr2)
    {
        mp[i]++;
    }

    for (auto i : arr1)
    {
        if (mp.find(i) != mp.end())
            mp[i]--;
    }

    for (auto i : mp)
    {
        if (i.second >= 1)
            return false;
    }
    return true;
}

int main()
{
    vector<int> arr1 = {1, 2, 3, 4, 5};
    vector<int> arr2 = {1, 2, 5, 6};
    int n = arr1.size();
    int m = arr2.size();

    cout << checkSubset(arr1, arr2, n, m);
}