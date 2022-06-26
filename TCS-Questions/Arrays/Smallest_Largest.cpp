#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// O(N) time and O(1) space
int Smallest(int arr[], int n)
{
    int min = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
            min = arr[i];
    }
    return min;
}

int Largest(int arr[], int n)
{
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}

int main()
{

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Smallest: " << Smallest(arr, n) << endl;
    cout << "Largest: " << Largest(arr, n);
}

// 1st approach  O(1) space and O(n*log n) time complexity
//  int main()
//  {
//      int n;
//      cin >> n;
//      int arr[n];

//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     sort(arr, arr + n);
//     cout << arr[0];
// }