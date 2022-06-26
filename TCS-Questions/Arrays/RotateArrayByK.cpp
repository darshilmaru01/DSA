#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void rotate(vector<int> &arr, int n)
{
    vector<int> arr1(n);
    int i;

    for (i = 0; i < n; i++)
    {
        arr1[(i + 1) % n] = arr[i];
    }
    arr = arr1;
}

int main()
{

    vector<int> arr = {1, 2, 3, 4, 5};
    int n = arr.size();

    cout << rotate(arr, n) << endl;
}