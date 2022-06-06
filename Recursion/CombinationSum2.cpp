#include <bits/stdc++.h>

void helper(int i, vector<int> &arr, int n, vector<int> &subset, vector<vector<int>> &powerSet, int sum, int target)
{

    // base condition
    if (sum == target)
    {
        powerSet.push_back(subset);
        return;
    }
    if (sum > target)
        return;
    if (i == n)
        return;

    // include Ith element
    subset.push_back(arr[i]);
    sum += arr[i];
    helper(i + 1, arr, n, subset, powerSet, sum, target);

    // not including the ith element
    subset.pop_back();
    sum -= arr[i];

    // skip
    while (i + 1 < arr.size() && arr[i] == arr[i + 1])
        i++;
    helper(i + 1, arr, n, subset, powerSet, sum, target);
}

vector<vector<int>> combinationSum2(vector<int> &arr, int n, int target)
{
    vector<vector<int>> powerSet;
    vector<int> subset;
    int sum = 0;
    sort(arr.begin(), arr.end());
    helper(0, arr, n, subset, powerSet, sum, target);
    return powerSet;
}
