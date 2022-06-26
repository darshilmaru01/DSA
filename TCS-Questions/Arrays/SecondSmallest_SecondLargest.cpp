#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// 1st approach  O(1) space and O(n*log n) time complexity
int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n);
    cout << arr[1];
    cout << arr[n - 2];
}