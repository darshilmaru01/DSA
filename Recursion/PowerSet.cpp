#include <iostream>
#include <vector>
using namespace std;

void helper(vector<int> &v, int i, vector<int> &subSet, vector<vector<int>> &ans)
{

    // base condition
    if (i == v.size())
    {
        ans.push_back(subSet);
        return;
    }

    // include Ith element
    subSet.push_back(v[i]);
    helper(v, i + 1, subSet, ans);

    // not including the ith element
    subSet.pop_back();
    helper(v, i + 1, subSet, ans);
}

vector<vector<int>> pwset(vector<int> v)
{
    // Write your code here
    vector<vector<int>> ans;
    vector<int> subSet;
    helper(v, 0, subSet, ans);
    return ans;
}