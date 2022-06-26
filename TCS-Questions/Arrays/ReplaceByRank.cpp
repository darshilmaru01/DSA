#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Brute Force

// int main()
// {
//     int n = 5;
//     int arr[n] = {15, 20, 2, 1, 3};

//     for (int i = 0; i < n; i++)
//     {
//         set<int> s;
//         for (int j = 0; j < n; j++)
//         {
//             if (arr[j] < arr[i])
//             {
//                 s.insert(arr[j]);
//             }
//         }
//         cout << s.size() + 1 << " ";
//     }
// }

// Optimal
int main()
{
    int n = 6;
    int arr[n] = {20, 15, 26, 2, 98, 6};
    map<int, int> mp;
    int temp = 1;
    int brr[n];
    for (int i = 0; i < n; i++)
    {
        brr[i] = arr[i];
    }
    sort(brr, brr + n);
    for (int i = 0; i < n; i++)
    {
        // if element is previously not store in the map
        if (mp[brr[i]] == 0)
        {
            mp[brr[i]] = temp;
            temp++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << mp[arr[i]] << " ";
    }
}