#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int lengthOfLongestConsecutiveSequence(vector<int> &arr, int N)
{

    int len = 0, res = INT_MIN;
    if (N == 0)
        return 0;
    unordered_map<int, int> mp;
    for (int i = 0; i < N; i++)
        mp[arr[i]]++;
    for (auto i : arr)
    {
        if (mp.find(i - 1) == mp.end())
        {
            int k = i;
            int len = 1;
            while (mp.find(k + 1) != mp.end())
            {
                k++;
                len++;
            }
            // cout<<k<<"len-- "<<i<<"    ";
            res = max(res, len);
        }
    }
    return res > 0 ? res : 1;
}

int main()
{
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << lengthOfLongestConsecutiveSequence(arr, n);
}