#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> separateNegativeAndPositive(vector<int> &nums)
{
    int N = nums.size();
    int i = 0;
    int j = 0;

    while (i < N)
    {
        if (nums[i] < 0)
        {
            int temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
            j = j + 1;
        }
        i += 1;
    }
    return nums;
}