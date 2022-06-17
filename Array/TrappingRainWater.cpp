#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// // O(N) time and O(N) space
// long getTrappedWater(long *arr, int n)
// {

//     long *left = new long[n];
//     long *right = new long[n];

//     left[0] = arr[0];
//     for (int i = 1; i < n; i++)
//     {
//         left[i] = max(arr[i], left[i - 1]);
//     }

//     right[n - 1] = arr[n - 1];
//     for (int i = n - 2; i >= 0; i--)
//     {
//         right[i] = max(arr[i], right[i + 1]);
//     }

//     long ans = 0;
//     for (int i = 0; i < n; i++)
//     {
//         ans += min(left[i], right[i]) - arr[i];
//     }
//     return ans;
// }
//
//
//

// O(N) time and O(1) space
long getTrappedWater(long *a, int n)
{

    int lo = 0;
    int hi = n - 1;
    int mi = 0;
    int ma = 0;
    int ans = 0;

    while (lo <= hi)
    {
        if (a[lo] < a[hi])
        {
            if (a[lo] > mi)
            {
                mi = a[lo];
            }
            else
            {
                ans += mi - a[lo];
            }
            lo++;
        }

        else
        {
            if (a[hi] > ma)
            {
                ma = a[hi];
            }
            else
            {
                ans += ma - a[hi];
            }
            hi--;
        }
    }

    return ans;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long *arr = new long[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        cout << "Ans: " << getTrappedWater(arr, n) << endl;
    }
}