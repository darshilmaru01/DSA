#include <iostream>
#include <vector>
#include <climits>
using namespace std;

// O(n^3) Time and  O(1) Space
int maxProductSubArray(vector<int> &nums)
{
    int ans = INT_MIN;
    for (int i = 0; i < nums.size() - 1; i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            int prod = 1;
            for (int k = i; k <= j; k++)
                prod *= nums[k];
            ans = max(ans, prod);
        }
    }
    return ans;
}

// O(N) Time and O(1) Space
int maxProduct(vector<int> &arr)
{
    int minp = 1, maxp = 1;
    int ans = INT_MIN;

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] < 0)
        {
            swap(minp, maxp);
        }

        minp = min(arr[i], minp * arr[i]);
        maxp = max(arr[i], maxp * arr[i]);
        ans = max(ans, maxp);
    }
    return ans;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 0};
    cout << maxProduct(arr);
}