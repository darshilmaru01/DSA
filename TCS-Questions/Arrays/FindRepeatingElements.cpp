#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

// O(NLogN)+O(N) time  and O(1) space
void findRepeatingElements(vector<int> &arr)
{
    sort(arr.begin(), arr.end());

    for (int i = 0; i < arr.size() - 1; i++)
    {
        if (arr[i] == arr[i + 1])
            cout << arr[i] << " ";
    }
}

// O(N) time and space
void findRepeating(vector<int> &arr)
{
    unordered_map<int, int> m;
    for (auto i : arr)
        ++m[i];

    for (auto i : m)
    {
        if (i.second > 1)
            cout << i.first << " ";
    }
}
int main()
{

    vector<int> arr = {1, 2, 1, 2, 3, 4, 5, 6, 7, 8};
    findRepeating(arr);

    return 0;
}