#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

// O(NLogN)+O(N) time  and O(1) space
// void findNonRepeating(vector<int> &arr)
// {
//     bool check;
//     for (int i = 0; i < arr.size(); i++)
//     {
//         check = false;
//         for (int j = 0; j < arr.size(); j++)
//         {
//             if (i != j && arr[i] == arr[j])
//             {
//                 check = true;
//                 break;
//             }
//         }
//         if (!check)
//         {
//             cout << arr[i] << " ";
//         }
//     }
// }

// O(N) time and space
void findNonRepeating(vector<int> &arr)
{
    unordered_map<int, int> map;

    for (auto i : arr)
        ++map[i];

    for (auto pair : map)
    {
        if (pair.second == 1)
        {
            cout << pair.first;
        }
    }
}

int main()
{

    vector<int> arr = {1, 2, 1, 2, 3, 3, 5, 6, 7, 8};
    findNonRepeating(arr);

    return 0;
}