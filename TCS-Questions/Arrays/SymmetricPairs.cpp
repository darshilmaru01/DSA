#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// O(N*N) nd O(1) Complexity
// int main()
// {

//     int n = 5;
//     int arr[][2] = {{1, 2}, {2, 1}, {3, 2}, {4, 5}, {5, 4}};

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[j][0] == arr[i][1] && arr[j][1] == arr[i][0])
//             {
//                 cout << '(' << arr[i][1] << " " << arr[i][0] << ')';
//             }
//         }
//     }
// }

// O(N)
int main()
{
    int n = 5;
    int arr[5][2] = {{1, 2}, {2, 1}, {3, 2}, {4, 5}, {5, 4}};

    unordered_map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        int first = arr[i][0];
        int second = arr[i][1];

        if (mp.find(second) != mp.end() && mp[second] == first)
        {
            cout << "(" << first << " " << second << ")";
        }
        else
        {
            mp[first] = second;
        }
    }
}