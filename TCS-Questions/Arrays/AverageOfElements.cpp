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

    int sum = 0;
    int avg = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
        avg = sum / n;
    }

    cout << avg;
    return 0;
}