#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{

    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    double median = 0;

    sort(arr, arr + n);

    if (n % 2 == 0)
    {
        median = (double)(arr[n / 2] + arr[n / 2 - 1]) / 2;
    }
    else
    {
        median = arr[n / 2];
    }

    cout << median;
    return 0;
}